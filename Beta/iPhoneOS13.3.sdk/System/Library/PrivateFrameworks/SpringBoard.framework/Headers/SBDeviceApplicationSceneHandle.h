/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationSceneHandle.h>

@class NSData, NSDictionary, NSMutableSet, NSString, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneStatusBarStateProvider, SBModalAlertPresenter, _UIStatusBarData;

@protocol SBIdleTimerCoordinating;

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle

{
    long long _lastActivationSource;
    SBModalAlertPresenter *_modalAlertPresenter;
    int _statusBarStyleOverridesToSuppress;
    long long _whitePointAdaptivityStyle;
    NSMutableSet *_statusBarForcedHiddenReasons;
    _Bool _hasMainSceneBeenForegroundAtLeastOnce;
    _Bool _isEffectivelyForeground;
    unsigned long long _keyboardLayerMaskStyle;
    long long _statusBarParts;
    NSDictionary *_alertSuppressionContextsBySectionIdentifier;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    SBDeviceApplicationSceneStatusBarBreadcrumbProvider *_breadcrumbProvider;
    SBDeviceApplicationSceneStatusBarStateProvider *_statusBarStateProvider;
    struct CGRect _statusBarAvoidanceFrame;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic) long long lastActivationSource;
@property (nonatomic) _Bool hasMainSceneBeenForegroundAtLeastOnce;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic, readonly, getter=isEffectivelyForeground) _Bool effectivelyForeground;
@property (nonatomic, readonly, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property (nonatomic, readonly, getter=isShowingModalAlert) _Bool showingModalAlert;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) long long wallpaperStyle;
@property (nonatomic, readonly, getter=isTranslucent) _Bool translucent;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (nonatomic, readonly) SBDeviceApplicationSceneStatusBarStateProvider *statusBarStateProvider;
@property (copy, nonatomic, readonly) _UIStatusBarData *overlayStatusBarData;
@property (copy, nonatomic, readonly) NSString *sceneTitle;
@property (copy, nonatomic, readonly) NSData *activationConditionsData;
@property (nonatomic, readonly) long long activationBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_commonInit;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (double)statusBarAlpha;
- (long long)defaultStatusBarStyle;
- (double)statusBarHeightForOrientation:(long long)arg1;
- (long long)statusBarOrientation;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (long long)currentInterfaceOrientation;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (id)displayEdgeInfoForForLayoutEnvironment:(long long)arg1 classicMode:(long long)arg2 isInsetForHomeAffordance:(_Bool)arg3;
- (void)_populateSettingsWithDefaultStatusBarHeight:(id)arg1;
- (void)_noteMainSceneBackgroundStyleChanged;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)additionalActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1;
- (_Bool)defaultStatusBarHiddenForOrientation:(long long)arg1;
- (long long)defaultInterfaceOrientation;
- (_Bool)wantsDeviceOrientationEventsEnabled;
- (void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1;
- (long long)_resumingInterfaceOrientationForOrientation:(long long)arg1;
- (long long)_launchingInterfaceOrientationForOrientation:(long long)arg1;
- (long long)activationInterfaceOrientationForOrientation:(long long)arg1;
- (_Bool)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2;
- (id)currentEffectiveStatusBarStyleRequest;
- (long long)activationInterfaceOrientationForCurrentOrientation;
- (id)newSceneViewWithReferenceSize:(struct CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (long long)_statusBarStyleWithActivationSettings:(id)arg1;
- (_Bool)_overriddenStatusBarStyleForApp:(id)arg1 style:(out long long *)arg2;
- (id)_sceneDataStoreCreatingIfNecessary:(_Bool)arg1;
- (long long)currentStatusBarStyle;
- (int)effectiveStatusBarStyleOverrides;
- (id)_potentiallyJailedDisplayConfiguration;
- (_Bool)isStatusBarHiddenForActivation:(id)arg1 forOrientation:(long long)arg2;
- (double)defaultStatusBarAlpha;
- (_Bool)isCurrentStatusBarHiddenForOrientation:(long long)arg1;
- (id)_defaultStatusBarHeights;
- (_Bool)isAutoHideEnabledForHomeAffordance;
- (unsigned long long)_mainSceneSupportedInterfaceOrientations;
- (_Bool)_mainSceneSupportsInterfaceOrientation:(long long)arg1;
- (_Bool)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)arg1 isInsetForHomeAffordance:(_Bool)arg2 isFloating:(_Bool)arg3;
- (id)_sceneCornerRadiusConfigurationFromRequestContext:(id)arg1 forEntity:(id)arg2;
- (_Bool)isStatusBarForcedHiddenForOrientation:(long long)arg1;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (long long)_initialMainSceneCompabilityMode:(id)arg1;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (id)_generateIdleTimerBehavior;
- (void)saveSuspendSnapshot:(id)arg1;
- (id)mostRecentSceneSnapshotsForScale:(double)arg1 launchingOrientation:(long long)arg2;
- (id)effectiveStatusBarStyleRequestForActivation:(id)arg1;
- (_Bool)isStatusBarForceHidden;
- (void)setStatusBarForceHidden:(_Bool)arg1 forReason:(id)arg2 animationSettings:(id)arg3;
- (void)setKeyboardContextMaskStyle:(unsigned long long)arg1;
- (_Bool)isEdgeProtectEnabledForHomeGesture;
- (void)_noteSceneTitleChanged;
- (void)_noteActivationConditionsChanged;
- (void)_updateSceneHostingInfoForSnapshottingWithView:(id)arg1;
- (_Bool)isDeviceApplicationSceneHandle;
- (void)_updateIdleTimerForReason:(id)arg1;

@end
