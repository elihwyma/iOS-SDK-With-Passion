/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController

{
    _Bool _presentingRemoteViewController;
    _Bool _shouldPresentRemoteViewController;
    _Bool _isRequestingRemoteViewController;
    _Bool _gkIsDisappearing;
    GKGame *_game;
    GKRemoteViewServiceController *_remoteViewController;
    CDUnknownBlockType _remoteViewReadyHandler;
}

@property (retain, nonatomic) GKRemoteViewServiceController *remoteViewController;
@property (nonatomic) _Bool isRequestingRemoteViewController;
@property (nonatomic) _Bool gkIsDisappearing;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) _Bool shouldPresentRemoteViewController;
@property (nonatomic) _Bool presentingRemoteViewController;
@property (copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler;

- (id)init;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_presentingViewController;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)didReceiveMemoryWarning;
- (void)donePressed:(id)arg1;
- (void)resetRemoteViewController;
- (void)requestRemoteViewControllerIfNeeded;
- (void)presentRemoteViewControllerIfNeeded;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)didGetRemoteViewController;

@end
