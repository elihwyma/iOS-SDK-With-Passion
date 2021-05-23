/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, GKHostedViewController, NSMutableDictionary, NSString, UIColor;

@interface GKRemoteViewServiceController : _UIRemoteViewController <Swift>

{
    _Bool _didSetRemoteGame;
    _Bool _viewDidAppear;
    GKGame *_game;
    NSMutableDictionary *_dirtyProperties;
    GKHostedViewController *_managingViewController;
    UIColor *_previousStatusBarColor;
    CDUnknownBlockType _blockToPerformAfterViewDidAppear;
}

@property (retain, nonatomic) NSMutableDictionary *dirtyProperties;
@property (weak, nonatomic) GKHostedViewController *managingViewController;
@property (retain, nonatomic) UIColor *previousStatusBarColor;
@property (copy, nonatomic) CDUnknownBlockType blockToPerformAfterViewDidAppear;
@property (nonatomic) _Bool didSetRemoteGame;
@property (nonatomic) _Bool viewDidAppear;
@property (nonatomic, readonly) _Bool serviceNeedsCurrentGame;
@property (nonatomic, readonly) _Bool serviceNeedsLocalPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;

- (void)dealloc;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)observedKeyPaths;
- (_Bool)serviceNeedsFriendCode;
- (void)nudge;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (void)setupRemoteView;
- (long long)_desiredStatusBarStyle;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (_Bool)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsFinishing;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (void)remoteViewControllerIsCanceling;
- (_Bool)_dismissSelfAfterGettingShouldCancel;
- (void)messageFromExtension:(id)arg1;
- (void)readyToPresentInController:(id)arg1;

@end
