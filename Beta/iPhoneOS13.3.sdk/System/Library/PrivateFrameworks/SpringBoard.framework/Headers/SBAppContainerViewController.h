/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLayoutElementViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBApplicationSceneHandle, SBSceneHandle, UIApplicationSceneSettingsDiffInspector, UIView, UIViewController, _SBAppContainerStatusBarStateProxy;

@protocol SBApplicationSceneStatusBarDescribing, SBApplicationSceneViewControlling, SBApplicationSceneViewControllingStatusBarDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBScenePlaceholderContentContext;

@interface SBAppContainerViewController : SBLayoutElementViewController <Swift>

{
    SBApplicationSceneHandle *_applicationSceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController;
    long long _requestedDisplayMode;
    _SBAppContainerStatusBarStateProxy *_statusBarObserverProxy;
    id <SBDeviceApplicationSceneStatusBarStateObserver> _statusBarDelegate;
}

@property (nonatomic, readonly) UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController;
@property (weak, nonatomic) id <SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;
@property (nonatomic, readonly) id <SBApplicationSceneStatusBarDescribing> statusBarDescriber;
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

- (void)invalidate;
- (void)prepareForReuse;
- (id)newSnapshot;
- (void)_clearState;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)setContentWrapperInterfaceOrientation:(long long)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (id)_deviceApplicationSceneHandle;
- (id)_applicationSceneViewControllerForSceneHandle:(id)arg1;
- (void)_configureViewController:(id)arg1;
- (void)_updateDisplayLayoutElementForSceneExistence:(id)arg1;
- (void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1;

@end
