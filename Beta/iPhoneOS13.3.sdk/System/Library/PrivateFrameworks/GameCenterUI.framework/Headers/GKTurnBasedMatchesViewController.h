/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewController.h>

@class GKGame, GKMatchRequest, GKTurnBasedInviteViewController, GKTurnBasedMatchesDataSource, NSString;

@protocol GKTurnBasedMatchesViewControllerDelegate, UIStateRestoring;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController

{
    _Bool _showExistingMatches;
    _Bool _showPlay;
    _Bool _showQuit;
    GKGame *_game;
    GKMatchRequest *_matchRequest;
    GKCollectionViewController *_masterViewController;
    id <GKTurnBasedMatchesViewControllerDelegate> _delegate;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    long long _maxMatchesSeen;
    NSString *_matchIDWaitingForTurnEvent;
    GKTurnBasedInviteViewController *_inviteController;
}

@property (retain, nonatomic) GKTurnBasedMatchesDataSource *matchesDataSource;
@property (nonatomic) long long maxMatchesSeen;
@property (retain, nonatomic) NSString *matchIDWaitingForTurnEvent;
@property (retain, nonatomic) GKTurnBasedInviteViewController *inviteController;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (weak, nonatomic) GKCollectionViewController *masterViewController;
@property (weak, nonatomic) id <GKTurnBasedMatchesViewControllerDelegate> delegate;
@property (nonatomic) _Bool showExistingMatches;
@property (nonatomic) _Bool showPlay;
@property (nonatomic) _Bool showQuit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UIStateRestoring> restorationParent;
@property (nonatomic, readonly) Class objectRestorationClass;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)didEnterNoContentState;
- (void)configureDataSource;
- (void)turnBasedMatchesDataSource:(id)arg1 didQuitMatch:(id)arg2;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)initWithMatchRequest:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelButtonPressed;
- (void)configureViewFactories;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1;
- (_Bool)isInGame;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)configureHeader:(id)arg1 indexPath:(id)arg2;
- (void)addPressed;
- (void)detailPressedForMatch:(id)arg1;
- (void)showInviteControllerAnimated:(_Bool)arg1;
- (void)acceptInviteForMatch:(id)arg1;
- (void)showMatch:(id)arg1;
- (void)showDetailForMatch:(id)arg1;
- (void)dismissDetailViewControllerAnimated:(_Bool)arg1;
- (void)launchGameAndShowMatch:(id)arg1;
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;
- (void)dismissDetailViewControllerInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNavigationControllerInPopover:(id)arg1 fromCell:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;

@end
