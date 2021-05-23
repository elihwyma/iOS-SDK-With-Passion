/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKTurnBasedService <Swift>

- (unsigned short)createTurnBasedGameForMatchRequest:individualMessages:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNextTurnBasedEventWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getTurnBasedMatchesAndCompatibleBundleID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDetailsForTurnBasedMatchIDs:includeGameData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptInviteForTurnBasedMatch:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)declineInviteForTurnBasedMatch:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTurnBasedMatch:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadURLWithTBGMatch:player:matchRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)reserveShareParticipantSlots:minPlayerCount:maxPlayerCount:andInvitePlayers:withMessage:forMatch:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)submitTurnForTurnBasedMatch:nextParticipantIndexes:turnTimeout:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)resignFromTurnBasedGame:outcome:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)completeTurnBasedMatch:scores:achievements:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveDataForTurnBasedMatch:resolvedExchangeIDs:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendExchangeToParticipants:data:message:timeout:match:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendReminderToParticipants:message:match:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelExchange:withMessage:match:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)replyToExchange:withMessage:data:match:handler: /* Error: Ran out of types for this method. */;

@end
