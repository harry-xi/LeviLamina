#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace mce::framebuilder {

class FrameBuilder : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    FrameBuilder& operator=(FrameBuilder const&);
    FrameBuilder(FrameBuilder const&);
    FrameBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FrameBuilder@framebuilder@@@UEAA@XZ
    virtual ~FrameBuilder();

    // NOLINTEND
};

}; // namespace mce::framebuilder
