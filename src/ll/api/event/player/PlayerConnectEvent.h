#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

class ConnectionRequest;
class NetworkIdentifier;

namespace ll::event::inline player {

class PlayerConnectEvent : public Cancellable<PlayerEvent> {
    NetworkIdentifier const& mNetworkIdentifier;
    ConnectionRequest const& mConnectionRequest;

public:
    constexpr PlayerConnectEvent(
        NetworkIdentifier const& networkIdentifier,
        ConnectionRequest const& connectionRequest,
        ServerPlayer&            player
    )
    : Cancellable(player),
      mNetworkIdentifier(networkIdentifier),
      mConnectionRequest(connectionRequest) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI NetworkIdentifier const& networkIdentifier() const;
    LLNDAPI ConnectionRequest const& connectionRequest() const;
};
} // namespace ll::event::inline player
