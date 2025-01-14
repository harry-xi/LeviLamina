#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/actor/player/PlayerSleepManager.h"

class ServerPlayerSleepManager : public ::PlayerSleepManager {
public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager(ServerPlayerSleepManager const&);
    ServerPlayerSleepManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerPlayerSleepManager@@UEAA@XZ
    virtual ~ServerPlayerSleepManager();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@ServerPlayerSleepManager@@UEAAXXZ
    virtual void updateSleepingPlayerList();

    // symbol:
    // ??0ServerPlayerSleepManager@@QEAA@V?$not_null@V?$NonOwnerPointer@VGameplayUserManager@@@Bedrock@@@gsl@@V?$unique_ptr@VIPlayerSleepPercentageGetter@@U?$default_delete@VIPlayerSleepPercentageGetter@@@std@@@std@@@Z
    MCAPI
    ServerPlayerSleepManager(Bedrock::NotNullNonOwnerPtr<class GameplayUserManager>, std::unique_ptr<class IPlayerSleepPercentageGetter>);

    // symbol: ?enoughPlayersDeepSleeping@ServerPlayerSleepManager@@QEBA_NXZ
    MCAPI bool enoughPlayersDeepSleeping() const;

    // symbol:
    // ?registerWithPlayerDimensionTransferConnector@ServerPlayerSleepManager@@QEAAXAEAVIPlayerDimensionTransferConnector@@@Z
    MCAPI void registerWithPlayerDimensionTransferConnector(class IPlayerDimensionTransferConnector&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_awakenAllPlayers@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _awakenAllPlayers();

    // symbol: ?_onPlayerDeath@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _onPlayerDeath();

    // NOLINTEND
};
