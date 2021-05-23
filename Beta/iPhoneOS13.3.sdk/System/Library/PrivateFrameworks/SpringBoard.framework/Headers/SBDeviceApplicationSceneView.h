/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationSceneView.h>

@class NSString, SBApplicationSceneViewStatusBarDescriptor, SBDeviceApplicationSceneClassicAccessoryView, SBDeviceApplicationSceneHandle, SBFHomeGrabberSettings, SBHomeGrabberRotationView, SBHomeGrabberView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, UIView, _UIDirectionalRotationView;

@protocol SBApplicationSceneBackgroundView, UISceneLayerTarget, UIScenePresentation;

@interface SBDeviceApplicationSceneView : SBApplicationSceneView

{
    id <UISceneLayerTarget> _statusBarLayerTarget;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    SBApplicationSceneViewStatusBarDescriptor *_statusBarDescriptor;
    _UIDirectionalRotationView *_hostCounterRotationView;
    SBHomeGrabberRotationView *_grabberRotationView;
    SBFHomeGrabberSettings *_grabberSettings;
    long long _lastStableOverlayOrientation;
    SBDeviceApplicationSceneClassicAccessoryView *_classicAccessoryView;
    UIView *_classicWrapperView;
    UIView *_classicPositioningView;
    UIView<UIScenePresentation> *_wrappedHostView;
    _Bool _active;
    _Bool _visible;
    _Bool _counterRotationViewTransformUpdatesPaused;
    double _statusBarAlpha;
    UIView *_appOverlayView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool counterRotationViewTransformUpdatesPaused;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (retain, nonatomic) UIView *appOverlayView;
@property (nonatomic) _Bool forcesStatusBarHidden;
@property (retain, nonatomic) SBApplicationSceneViewStatusBarDescriptor *statusBarDescriptor;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;

- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (void)_refresh;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (void)_layoutLiveHostView:(id)arg1;
- (void)_invalidateSceneLiveHostView:(id)arg1;
- (id)_transitionViewForHostView;
- (void)_configureSceneLiveHostView:(id)arg1;
- (_Bool)_representsTranslucentContent;
- (void)_updateReferenceSize:(struct CGSize)arg1 andOrientation:(long long)arg2;
- (void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1;
- (long long)_wallpaperStyle;
- (id)deviceApplicationSceneView;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1;
- (void)tearDownHomeGrabberView;
- (void)_updateStatusBarVisibilityForHostView;
- (_Bool)_sceneDrivesOwnRotation;
- (void)_createHostCounterRotationViewIfNecessary;
- (void)_tearDownHostCounterRotationViewIfNecessary;
- (void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
- (void)_maybeStartTrackingRotationForOverlay;
- (void)createClassicAccesoryViewIfNecessary;
- (void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1;
- (struct CGRect)_effectiveSceneBounds;
- (void)teardownClassicAccesoryViewIfNecessary;

@end
