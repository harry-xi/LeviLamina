#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DeadBushFeature : public ::Feature {
public:
    // prevent constructor by default
    DeadBushFeature& operator=(DeadBushFeature const&);
    DeadBushFeature(DeadBushFeature const&);
    DeadBushFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DeadBushFeature();

    // vIndex: 3, symbol: ?place@DeadBushFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
