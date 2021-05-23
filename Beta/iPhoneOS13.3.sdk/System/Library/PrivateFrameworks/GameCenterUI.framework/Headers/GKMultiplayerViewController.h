/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewController.h>

@class GKDashboardMultiplayerPickerViewController, GKDispatchGroup, GKGame, GKMatchRequest, GKMessageComposeViewController, GKMultiplayerButtonFooterView, GKMultiplayerButtonHeaderView, GKMultiplayerDataSource, NSDictionary, NSString, NSURL;

@protocol GKDashboardNearbyBrowserDelegate;

@interface GKMultiplayerViewController : GKCollectionViewController

{
    _Bool _showCancelButton;
    _Bool _didAcceptGameInvite;
    _Bool _didStartForcedAutomatch;
    _Bool _addButtonEnabled;
    _Bool _needsFloatIn;
    GKMatchRequest *_matchRequest;
    GKMatchRequest *_originalMatchRequest;
    NSString *_defaultInvitationMessage;
    GKGame *_game;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    NSURL *_shareURL;
    GKMessageComposeViewController *_inviteController;
    NSDictionary *_playerNamesToPlayers;
    GKMultiplayerButtonHeaderView *_buttonHeaderView;
    GKMultiplayerButtonFooterView *_buttonFooterView;
    GKDashboardMultiplayerPickerViewController *_picker;
    long long _invitationType;
    GKDispatchGroup *_urlPreloadGroup;
}

@property (retain, nonatomic) GKMessageComposeViewController *inviteController;
@property (retain, nonatomic) NSDictionary *playerNamesToPlayers;
@property (retain, nonatomic) GKMultiplayerButtonHeaderView *buttonHeaderView;
@property (retain, nonatomic) GKMultiplayerButtonFooterView *buttonFooterView;
@property (nonatomic) _Bool needsFloatIn;
@property (retain, nonatomic) GKDashboardMultiplayerPickerViewController *picker;
@property (nonatomic) long long invitationType;
@property (retain, nonatomic) GKDispatchGroup *urlPreloadGroup;
@property (copy, nonatomic, readonly) GKMatchRequest *matchRequest;
@property (copy, nonatomic, readonly) GKMatchRequest *originalMatchRequest;
@property (copy, nonatomic) NSString *defaultInvitationMessage;
@property (nonatomic) _Bool showCancelButton;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) _Bool didAcceptGameInvite;
@property (nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (retain, nonatomic) NSURL *shareURL;
@property (nonatomic) _Bool didStartForcedAutomatch;
@property (nonatomic, readonly) GKMultiplayerDataSource *multiplayerDataSource;
@property (nonatomic) _Bool addButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)share;
- (void)removePlayer:(id)arg1;
- (void)playButtonPressed;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)configureDataSource;
- (void)didEnterLoadedState;
- (void)shareButtonPressed;
- (void)multiplayerPlayerCountViewController:(id)arg1 didSelectValue:(long long)arg2;
- (id)initWithMatchRequest:(id)arg1;
- (void)updateVisibleRemoveButtons;
- (void)updateButtonViewsWithStatus:(id)arg1;
- (void)playNow;
- (void)invitePlayers:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (_Bool)canStartForcedAutomatch;
- (void)willPresentPlayerPicker:(id)arg1;
- (void)willQueryGKIDs;
- (void)loadShareURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)willShare;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)removedPlayer:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)playersToInvite:(id)arg1;
- (void)determineInvitationType;
- (void)setupCancelButton;
- (void)configureSubviewsForIOS;
- (void)preloadShareURL;
- (_Bool)allowPlayerCountSelection;
- (void)didSelectPlayerCountHeader:(id)arg1;
- (void)configureConstraintsForSubviews;
- (void)animateBubblesInIfNeeded;
- (void)showCollectionView;
- (void)cancelButtonPressed;
- (void)updateUIActionsEnabled:(_Bool)arg1;
- (long long)maxAvailablePlayers;
- (void)inviteButtonPressed;
- (void)handleServiceUnavailable:(id)arg1;
- (void)didFinishPickingPlayers:(id)arg1;
- (void)invitePlayers:(id)arg1 contactPlayers:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 message:(id)arg3 contactPlayers:(id)arg4 friendPlayers:(id)arg5;
- (void)messageComposeViewController:(id)arg1 willPresentPlayerPicker:(id)arg2;
- (void)addAutomatchPlayer;
- (void)removeAutomatchPlayer;

@end
