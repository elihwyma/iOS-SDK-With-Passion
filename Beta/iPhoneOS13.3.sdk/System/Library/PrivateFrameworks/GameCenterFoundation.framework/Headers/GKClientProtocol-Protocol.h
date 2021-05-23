/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKClientProtocol <Swift>

- (unsigned short)beginNetworkActivity;
- (unsigned short)endNetworkActivity;
- (unsigned short)resetNetworkActivity;
- (unsigned short)setBadgeCount:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshContentsForDataType:userInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)friendRequestSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)session:player:didChangeConnectionState: /* Error: Ran out of types for this method. */;
- (unsigned short)session:player:didSaveData: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didReceiveData:fromPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didReceiveMessage:withData:fromPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelGameInvite: /* Error: Ran out of types for this method. */;
- (unsigned short)relayPushNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)receivedChallengeSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)completedChallengeSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)challengeReceived: /* Error: Ran out of types for this method. */;
- (unsigned short)challengeCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)setPreferencesValues: /* Error: Ran out of types for this method. */;
- (unsigned short)setCurrentGame:serverEnvironment:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticatedPlayersDidChange:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)completedOptimisticAuthenticationWithResponse:error: /* Error: Ran out of types for this method. */;
- (unsigned short)respondedToNearbyInvite: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptMultiplayerGameInvite;
- (unsigned short)acceptInviteWithNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)declineInviteWithNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)didConnectToParticipantWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)didDisconnectFromParticipantWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveData:reliably:forRecipients:fromSender: /* Error: Ran out of types for this method. */;
- (unsigned short)localPlayerAcceptedCustomTournamentInvite;
- (unsigned short)session:addedPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)session:removedPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTurnBasedData;
- (unsigned short)scoreSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)achievementSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)setLogBits: /* Error: Ran out of types for this method. */;

@end
