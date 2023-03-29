#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player open container event.
 * @details This event is called when a player opens a container (e.g. chest).
 */
class PlayerOpenContainerEvent : public Event<PlayerOpenContainerEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Container*, container, getContainer);

    explicit PlayerOpenContainerEvent(Player* player, BlockInstance blockInstance);

    LL_DELETE_COPY(PlayerOpenContainerEvent);
    LL_DELETE_MOVE(PlayerOpenContainerEvent);
};

} // namespace ll::event::player