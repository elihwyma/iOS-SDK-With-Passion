/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKMatchRequest, GKTurnBasedMatchmakerHostViewController, NSString, UIAlertController;

@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <Swift>

{
    _Bool _showExistingMatches;
    id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
    GKTurnBasedMatchmakerHostViewController *_remoteViewController;
    GKMatchRequest *_matchRequest;
    UIAlertController *_alertController;
}

@property (retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) _Bool showExistingMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)authenticationChanged:(id)arg1;
- (void)extensionDidFinishWithError:(id)arg1;
- (_Bool)shouldShowPlayForTurnBasedMatch;
- (_Bool)shouldShowQuitForTurnBasedMatch;
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(_Bool)arg3;
- (id)initWithMatchRequest:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)playerQuitMatch:(id)arg1;

@end
