/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableSet, NSSet, NSString, SBActivationSettings, SBApplicationSceneView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBSceneHandle, UIView;

@protocol SBAppViewControllerDelegate, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBAppViewController : UIViewController <Swift>

{
    NSString *_identifier;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBDeviceApplicationSceneViewController *_deviceAppViewController;
    SBActivationSettings *_activationSettings;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    NSMutableSet *_activeTransitions;
    NSSet *_actionsToDeliver;
    long long _requestedMode;
    long long _currentMode;
    _Bool _sceneContentIsReady;
    _Bool _ignoresOcclusions;
    _Bool _invalidated;
    _Bool _automatesLifecycle;
    _Bool _placeholderContentEnabled;
    _Bool _wantsSecureRendering;
    id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
    id <SBAppViewControllerDelegate> _delegate;
    SBActivationSettings *_supplementalActivationSettings;
}

@property (weak, nonatomic) id <SBAppViewControllerDelegate> delegate;
@property (nonatomic) _Bool automatesLifecycle;
@property (nonatomic) long long requestedMode;
@property (nonatomic, readonly) long long currentMode;
@property (nonatomic, readonly) SBApplicationSceneView *appView;
@property (nonatomic) _Bool ignoresOcclusions;
@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (nonatomic) _Bool wantsSecureRendering;
@property (nonatomic) _Bool placeholderContentEnabled;
@property (retain, nonatomic) SBActivationSettings *supplementalActivationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (weak, nonatomic) id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;

- (void)dealloc;
- (void)invalidate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)newSnapshot;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_installedAppsDidChange:(id)arg1;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2;
- (void)_sendActions:(id)arg1;
- (void)_setCurrentMode:(long long)arg1;
- (void)_updateForAppearanceState:(int)arg1;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)arg1;
- (void)_activateApp;
- (void)_deactivateHostedApp;
- (void)_destroySceneViewController;
- (void)_createSceneViewController;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(_Bool)arg2;
- (id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(_Bool)arg2;

@end
