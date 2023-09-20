#include "FormHandler.h"
#include "liteloader/core/LiteLoader.h"
#include <liteloader/api/form/CustomForm.h>
#include <liteloader/api/form/SimpleForm.h>

namespace ll::form::handler {

void SimpleFormHandler::handle(Player& player, const std::string& data) const {
    int selected = data != "null" ? stoi(data) : -1;
    if (selected >= 0 && selected < mButtonCallbacks.size()) {
        if (mButtonCallbacks[selected]) {
            mButtonCallbacks[selected](player);
        }
    }
    if (mCallback) {
        mCallback(player, selected);
    }
}

void CustomFormHandler::handle(Player& player, const std::string& data) const {
    if (data == "null") {
        if (mCallback) {
            mCallback(player, {});
        }
        return;
    }

    try {
        fifo_json dataJson = fifo_json::parse(data);

        if (!dataJson.is_array()) {
            ll::logger.error("Failed to parse CustomForm result: not an array");
            return;
        }
        if (dataJson.size() != mFormElements.size()) {
            ll::logger.error("Failed to parse CustomForm result: size mismatch");
            return;
        }

        CustomFormResult result;

        for (size_t i = 0; i < mFormElements.size(); ++i) {
            auto& element = mFormElements[i];
            auto& value   = dataJson[i];
            if (element->getType() == CustomFormElement::Type::Label) {
                continue;
            }

            result.emplace(element->mName, element->parseResult(value));
        }

        if (mCallback) {
            mCallback(player, result);
        }
    } catch (...) {
        ll::logger.error("Failed to parse CustomForm result");
        return;
    }
}

void ModalFormHandler::handle(Player& player, const std::string& data) const {
    bool selected = data == "true";
    if (mCallback) {
        mCallback(player, selected);
    }
}

std::map<uint, std::unique_ptr<FormHandler>> formHandlers = {};
uint                                         currentId    = 114514;

uint addFormHandler(std::unique_ptr<FormHandler>&& data) {
    formHandlers.emplace(++currentId, std::move(data));
    return currentId;
}

void handleFormPacket(Player* player, uint formId, const std::string& data) {
    auto it = formHandlers.find(formId);
    if (it == formHandlers.end()) {
        ll::logger.error("Failed to find form handler for form id {}", formId);
        return;
    }
    it->second->handle(*player, data);
    formHandlers.erase(it);
}

} // namespace ll::form::handler