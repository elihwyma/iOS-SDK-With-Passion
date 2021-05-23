/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScene.h>

@class FBSDisplayConfigurationRequest, FBSScene, NSArray, NSPointerArray, NSString, UIAlertControllerStackManager, UIInputResponderController, UISceneSizeRestrictions, UIScreen, UIScreenshotService, UIStatusBarManager, UITraitCollection, UIWindow, _UIBannerManager, _UICanvasDefinition, _UIContextBinder, _UISystemAppearanceManager;

@protocol UICoordinateSpace, _UIDisplayInfoProviding, _UISceneMetricsCalculating;

@interface UIWindowScene : UIScene

{
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    _UIContextBinder *_contextBinder;
    NSPointerArray *_keyWindowHistory;
    _Bool _isPerformingSystemSnapshot;
    id <_UIDisplayInfoProviding> _displayEdgeInfoProvider;
    id <UICoordinateSpace> _coordinateSpace;
    _Bool _shouldDisableTouchCancellationOnRotation;
    _Bool _windowWasInitializedWithDefaultStoryboard;
    _Bool _didMakeKeyAndVisible;
    id <_UISceneMetricsCalculating> _metricsCalculator;
    _Bool __isKeyWindowScene;
    long long _screenRequestedOverscanCompensation;
    long long _avkitRequestedOverscanCompensation;
}

@property (nonatomic, readonly) UIAlertControllerStackManager *_alertControllerStackManager;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isKeyCanvas) _Bool keyCanvas;
@property (nonatomic, readonly) _UICanvasDefinition *_definition;
@property (nonatomic, readonly, getter=_scene) FBSScene *scene;
@property (nonatomic, readonly) UIStatusBarManager *statusBarManager;
@property (nonatomic, readonly) _UISystemAppearanceManager *_systemAppearanceManager;
@property (nonatomic, readonly) UIInputResponderController *inputResponderController;
@property (nonatomic, readonly) UIScreenshotService *screenshotService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_bannerManager) _UIBannerManager *_bannerManager;
@property (nonatomic, readonly) _UIContextBinder *_contextBinder;
@property (nonatomic, readonly) UIWindow *_keyWindow;
@property (nonatomic, readonly) _Bool _canReceiveDeviceOrientationEvents;
@property (nonatomic, readonly) struct UIEdgeInsets _peripheryInsets;
@property (nonatomic, readonly) id <_UIDisplayInfoProviding> _displayInfoProvider;
@property (retain, nonatomic, getter=_displayConfigurationRequest, setter=_setDisplayConfigurationRequest:) FBSDisplayConfigurationRequest *_displayConfigurationRequest;
@property (nonatomic, getter=_screenRequestedDisplayNativePixelSize, setter=_setScreenRequestedDisplayNativePixelSize:) struct CGSize _screenRequestedDisplayNativePixelSize;
@property (nonatomic, getter=_screenRequestedOverscanCompensation, setter=_setScreenRequestedOverscanCompensation:) long long _screenRequestedOverscanCompensation;
@property (nonatomic, getter=_avkitRequestedOverscanCompensation, setter=_setAVKitRequestedOverscanCompensation:) long long _avkitRequestedOverscanCompensation;
@property (nonatomic) _Bool _isKeyWindowScene;
@property (nonatomic, setter=_setBackgroundStyle:) long long _backgroundStyle;
@property (nonatomic, getter=_keepContextAssociationInBackground, setter=_setKeepContextAssociationInBackground:) _Bool keepContextAssociationInBackground;
@property (nonatomic, readonly) _Bool _isPerformingSystemSnapshot;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) UISceneSizeRestrictions *sizeRestrictions;
@property (nonatomic, readonly) NSArray *windows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScreen *_screen;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic, readonly) id <UICoordinateSpace> _coordinateSpace;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;

+ (void)initialize;
+ (_Bool)_hostsWindows;
+ (id)_canvasForScene:(id)arg1;
+ (void)_registerComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (id)_placeholderWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;
+ (_Bool)_shouldRestoreKeyWindowSceneOnActivation;
+ (id)_findNewKeyWindowSceneOnScreen:(id)arg1;
+ (void)_setShouldRestoreKeyWindowSceneOnActivation:(_Bool)arg1;
+ (id)_keyWindowScene;
+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;
+ (id)_keyboardWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;
+ (void)_updateVisibleSceneAndWindowOrderWithTest:(CDUnknownBlockType)arg1;

- (void)_invalidate;
- (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 stopped:(_Bool *)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)_prepareForSuspend;
- (id)_allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
- (struct CGRect)_referenceBounds;
- (id)_allWindows;
- (void)_computeMetricsForWindows:(id)arg1 animated:(_Bool)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)_readySceneForConnection;
- (void)_makeKeyAndVisibleIfNeeded;
- (_Bool)_windowIsFront:(id)arg1;
- (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
- (id)_visibleWindows;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_computeMetrics:(_Bool)arg1;
- (double)_systemMinimumMargin;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (_Bool)_needsMakeKeyAndVisible;
- (void)_prepareForResume;
- (id)_fallbackTraitCollection;
- (id)canvasToolbar;
- (void)_registerSettingsDiffActions:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSettingsDiffActionsForKey:(id)arg1;
- (void)_registerSceneActionsHandler:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSceneActionsHandler:(id)arg1;
- (void)_registerComponent:(id)arg1 forKey:(id)arg2;
- (void)_unregisterComponentForKey:(id)arg1;
- (id)_componentForKey:(id)arg1;
- (_Bool)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (unsigned long long)_currentlySupportedInterfaceOrientations;
- (void)_invalidateScreen;
- (void)_attachWindow:(id)arg1;
- (void)_detachWindow:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_updateTraitCollection;
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;
- (id)_screenshotServiceIfPresent;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_applySnapshotSettings:(id)arg1 forActions:(CDUnknownBlockType)arg2;
- (_Bool)_windowsIgnoreSceneClientOrientation;
- (void)_recycleAttachmentForWindow:(id)arg1;
- (void)_setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;
- (void)_loadWindowWithStoryboardIfNeeded:(id)arg1;
- (id)_windowSceneDelegate;
- (id)_inheritingWindowsIncludingInvisible:(_Bool)arg1;
- (long long)_resolvedOverscanCompensation;
- (void)_setSystemVolumeHUDEnabled:(_Bool)arg1;
- (void)_setShouldDisableTouchCancellationOnRotation:(_Bool)arg1;
- (id)_disableTouchCancellationOnRotation;
- (void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1;

@end
