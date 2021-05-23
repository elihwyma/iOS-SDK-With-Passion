/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayer;

@protocol GKCustomTournamentDelegate

@property (nonatomic, readonly) GKPlayer *creator;

- (unsigned short)addInvitees:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeInvitees:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addCreator:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCreator:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptInvitationWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)declineInvitationWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
