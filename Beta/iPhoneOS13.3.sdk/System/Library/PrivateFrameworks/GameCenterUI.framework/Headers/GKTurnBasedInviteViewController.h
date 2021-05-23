/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKMultiplayerViewController.h>

@class GKTurnBasedMatch, NSMutableDictionary;

@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController

{
    _Bool _deletePreloadedMatch;
    id <GKTurnBasedInviteViewControllerDelegate> _delegateWeak;
    NSMutableDictionary *_inviteMessageDictionary;
    long long _mode;
    GKTurnBasedMatch *_match;
}

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) _Bool deletePreloadedMatch;
@property (nonatomic, readonly, getter=isLoadingOrRemovingPreloadedMatch) _Bool loadingOrRemovingPreloadedMatch;
@property (nonatomic) id <GKTurnBasedInviteViewControllerDelegate> delegate;

- (void)dealloc;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)playNow;
- (void)invitePlayers:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (_Bool)canStartForcedAutomatch;
- (void)willQueryGKIDs;
- (void)loadShareURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)willShare;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)cleanupStateForCancelOrErrorWithHandler:(CDUnknownBlockType)arg1;
- (void)finishWithMatchID:(id)arg1;
- (void)createGameWithPlayersToInvite:(id)arg1 forSharing:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end
