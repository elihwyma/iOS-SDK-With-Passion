/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDashBoardViewExternalControllerBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSSet, NSString, SBAppViewController, SBApplicationSceneHandle, SBApplicationSceneView, SBFAuthenticationAssertion, SBMainDisplaySceneLayoutStatusBarView, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneDeactivationAssertion, _SBDashBoardHostedAppStatusBarStateProxy;

@protocol BSInvalidatable, SBApplicationSceneStatusBarDescribing, SBDashBoardHostedAppViewControllerDelegate, SBScenePlaceholderContentContext;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <Swift>

{
    id <SBDashBoardHostedAppViewControllerDelegate> _delegate;
    SBAppViewController *_appViewController;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    NSString *_cachedBasicPublicDescription;
    _Bool _invalidated;
    _Bool _wantsIdleTimerDisabled;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    _SBDashBoardHostedAppStatusBarStateProxy *_statusBarObserverProxy;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    _Bool _intentToTransitionFromSecureAppToFull;
    _Bool _interfaceOrientationLocked;
}

@property (nonatomic, readonly) id <SBApplicationSceneStatusBarDescribing> statusBarDescriber;
@property (weak, nonatomic) id <SBDashBoardHostedAppViewControllerDelegate> delegate;
@property (nonatomic, readonly) SBApplicationSceneHandle *applicationSceneHandle;
@property (nonatomic, readonly) SBApplicationSceneView *appView;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (nonatomic) _Bool intentToTransitionFromSecureAppToFull;
@property (nonatomic) _Bool placeholderContentEnabled;
@property (nonatomic) _Bool interfaceOrientationLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (long long)presentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)statusBarOrientation;
- (long long)presentationType;
- (id)appearanceIdentifier;
- (id)_appViewController;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)displayLayoutElementIdentifier;
- (void)configureDisplayLayoutElement:(id)arg1;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (id)initWithApplicationSceneEntity:(id)arg1;
- (void)setSupplementalActivationSettings:(id)arg1;
- (id)statusBarDescribers;
- (id)statusBarDescriberForStatusBarPart:(id)arg1;
- (_Bool)allowsConfiguringIndividualStatusBarParts;
- (long long)contentInterfaceOrientation;
- (id)_deviceApplicationSceneHandle;
- (void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2;
- (void)_setMode:(long long)arg1 fromClient:(_Bool)arg2 forReason:(id)arg3;
- (void)_setResignActiveAssertionEnabled:(_Bool)arg1;
- (void)_addStatusBarViewIfNeeded;
- (void)_updateStatusBarContainerOrientation;
- (void)_beginShowingStatusBarView;
- (void)_endShowingStatusBarView;
- (long long)containerInterfaceOrientation;
- (void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (void)appViewControllerWillActivateApplication:(id)arg1;
- (void)appViewControllerDidDeactivateApplication:(id)arg1;
- (_Bool)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1;

@end
