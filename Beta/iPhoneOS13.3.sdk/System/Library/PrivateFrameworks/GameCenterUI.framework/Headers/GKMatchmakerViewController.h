/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

@class GKInvite, GKMatch, GKMatchRequest, GKMatchmakerHostViewController, NSMutableArray, NSString, UIAlertController;

@protocol GKMatchmakerViewControllerDelegate;

@interface GKMatchmakerViewController : UINavigationController

{
    _Bool _hosted;
    id <GKMatchmakerViewControllerDelegate> matchmakerDelegate;
    GKMatchRequest *_matchRequest;
    GKMatchmakerHostViewController *_remoteViewController;
    GKInvite *_acceptedInvite;
    GKMatch *_match;
    NSMutableArray *_hostedPlayers;
    UIAlertController *_alertController;
}

@property (retain, nonatomic) GKMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (retain, nonatomic) GKMatch *match;
@property (retain, nonatomic) NSMutableArray *hostedPlayers;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (nonatomic) id <GKMatchmakerViewControllerDelegate> matchmakerDelegate;
@property (nonatomic, getter=isHosted) _Bool hosted;
@property (copy, nonatomic) NSString *defaultInvitationMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)sendData:(id)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)authenticationChanged:(id)arg1;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)playersToInvite:(id)arg1;
- (void)setupNotifications;
- (void)inviterCancelledNotification:(id)arg1;
- (void)createMatchForAcceptedInvite;
- (void)setHostedPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)finishWithMatch;
- (void)finishWithPlayers;
- (void)invitedPlayer:(id)arg1 responded:(long long)arg2;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithInvite:(id)arg1;
- (void)setHostedPlayer:(id)arg1 didConnect:(_Bool)arg2;
- (void)addPlayersToMatch:(id)arg1;
- (void)setHostedPlayerReady:(id)arg1;
- (void)cancelMatching;
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setShareInvitees:(id)arg1;
- (void)startMatchingWithRequest:(id)arg1;
- (void)setBrowsingForNearbyPlayers:(_Bool)arg1;

@end
