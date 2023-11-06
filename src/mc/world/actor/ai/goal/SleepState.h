#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class SleepState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    SleepState& operator=(SleepState const&);
    SleepState(SleepState const&);
    SleepState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SleepState();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?stop@SleepState@@UEAAXXZ
    virtual void stop();

    // symbol: ?tick@SleepState@@UEAAXXZ
    MCVAPI void tick();

    // NOLINTEND
};
