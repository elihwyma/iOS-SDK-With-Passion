/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKMultiplayerService <Swift>

- (unsigned short)setShareInvitees: /* Error: Ran out of types for this method. */;
- (unsigned short)sendReconnectInvitation:toPlayer:connectionData:sessionToken:pushToken:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)initiateRelayRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRelayRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPlayersToInviteWithHandlerV2: /* Error: Ran out of types for this method. */;
- (unsigned short)getAcceptedGameInviteWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptGameInvite:connectionData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)invitePlayersForMatchRequest:onlineConnectionData:nearbyConnectionData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPlayersForMatchRequest:connectionData:connectedPeers:rematchID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadURLWithData:player:matchRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelGameInviteWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePlayersFromGameInviteV2:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelOutstandingMatchRequestWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getFlowRateForPlayerGroup:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getOverallFlowRateWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getCompatibilityMatrix:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)declineGameInvite:reason:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getInviteSessionTokenWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelRelayRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCacheWithNearbyProfileDictionary:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentNearbyInvite: /* Error: Ran out of types for this method. */;
- (unsigned short)nearbyInviteWasCancelled: /* Error: Ran out of types for this method. */;

@end
