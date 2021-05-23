/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKMultiplayerViewController.h>

@class GKInvite;

@protocol GKMultiplayerP2PViewControllerDelegate;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController

{
    _Bool _hosted;
    id <GKMultiplayerP2PViewControllerDelegate> _delegateWeak;
    long long _mode;
    GKInvite *_acceptedInvite;
    double _inviteeConnectionTimeStamp;
}

@property (nonatomic) long long mode;
@property (copy, nonatomic) GKInvite *acceptedInvite;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property (nonatomic, getter=isHosted) _Bool hosted;
@property (nonatomic) id <GKMultiplayerP2PViewControllerDelegate> delegate;

- (void)dealloc;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationWillEnterForeground;
- (void)configureDataSource;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)cancelAlertWithoutDelegateCallback;
- (void)cancelPendingInvites;
- (_Bool)havePendingPlayers;
- (void)startGame;
- (void)sendStatusUpdate;
- (void)playerConnected:(id)arg1;
- (void)playerDisconnected:(id)arg1;
- (void)processStatusUpdateMessageFromBytes:(const char *)arg1 withLength:(unsigned int)arg2;
- (void)playNow;
- (void)showInviterDisconnectedAlert;
- (void)showAutomatchingErrorAlert;
- (_Bool)haveInvitedPlayers;
- (void)invitePlayers:(id)arg1;
- (id)initWithAcceptedInvite:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)inviterCancelled;
- (_Bool)canStartForcedAutomatch;
- (void)willPresentPlayerPicker:(id)arg1;
- (void)willQueryGKIDs;
- (void)loadShareURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)willShare;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)removedPlayer:(id)arg1;

@end
