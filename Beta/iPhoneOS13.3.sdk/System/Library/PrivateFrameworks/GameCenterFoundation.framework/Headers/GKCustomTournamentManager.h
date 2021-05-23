/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject

{
    GKTournament *_tournament;
    GKPlayer *_creator;
}

@property (weak, nonatomic) GKTournament *tournament;
@property (retain, nonatomic) GKPlayer *creator;

- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
