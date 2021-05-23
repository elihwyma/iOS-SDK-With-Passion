/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

@class BKSAnimationFenceHandle, FBSScene, FBSSceneSettings, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSPointerArray, NSString, UIApplicationSceneClientSettings, UIApplicationSceneSettings, UISceneActivationConditions, UISceneSession, _UISceneLifecycleMonitor;

@protocol UISceneDelegate;

@interface UIScene : UIResponder

{
    UISceneSession *_session;
    id <UISceneDelegate> _delegate;
    NSString *_title;
    UISceneActivationConditions *_activationConditions;
    FBSScene *_scene;
    NSArray *_initialSettingsDiffActions;
    NSArray *_finalSettingsDiffActions;
    NSArray *_initialSceneBSActionHandlers;
    NSArray *_finalSceneBSActionHandlers;
    NSDictionary *_additionalSettingsDiffActions;
    NSArray *_flattenedDiffActions;
    NSDictionary *_additionalSceneBSActionHandlers;
    NSArray *_flattenedActionsHandlers;
    NSDictionary *_builtinComponents;
    NSDictionary *_registeredComponents;
    _UISceneLifecycleMonitor *_lifecycleMonitor;
    FBSSceneSettings *_overrideSettings;
    NSMutableDictionary *_postSettingsUpdateResponseBlocks;
    UIScene *_settingsScene;
    NSPointerArray *_inheritingScenes;
    NSString *_identifier;
    FBSSceneSettings *_oldSettings;
    struct {
        unsigned int delegateIsResponder:1;
        unsigned int delegateSupportsWillConnect:1;
        unsigned int delegateSupportsDidDisconnect:1;
        unsigned int delegateSupportsDidBecomeActive:1;
        unsigned int delegateSupportsWillResignActive:1;
        unsigned int delegateSupportsWillEnterForeground:1;
        unsigned int delegateSupportsDidEnterBackground:1;
        unsigned int isUIKitManaged:1;
        unsigned int isInternal:1;
        unsigned int hostsWindows:1;
        unsigned int hasInvalidated:1;
        unsigned int allowOverrideSettings:1;
        unsigned int isProcessingUpdateResponseBlocks:1;
        unsigned int readyForSuspend:1;
        unsigned int isMediaParticipant:1;
    } _sceneFlags;
    _Bool _respondingToLifecycleEvent;
    NSNumber *__cachedInterfaceOrientation;
}

@property (nonatomic, readonly) NSArray *_settingsDiffActions;
@property (nonatomic, readonly) NSArray *_sceneBSActionHandlers;
@property (nonatomic, readonly) NSArray *_windows;
@property (nonatomic, readonly) NSArray *_visibleWindows;
@property (nonatomic, readonly) NSArray *_allWindows;
@property (nonatomic, readonly) double _systemMinimumMargin;
@property (weak, nonatomic, setter=_setSettingsScene:) UIScene *_settingsScene;
@property (nonatomic, readonly) NSArray *_interitingScenes;
@property (nonatomic, readonly) FBSSceneSettings *_oldSettings;
@property (nonatomic, readonly) FBSSceneSettings *_effectiveSettings;
@property (nonatomic, readonly) FBSSceneSettings *_synthesizedSettings;
@property (nonatomic, readonly) UIApplicationSceneSettings *_effectiveUISettings;
@property (nonatomic, readonly) NSArray *_sceneComponents;
@property (nonatomic, readonly) _UISceneLifecycleMonitor *_lifecycleMonitor;
@property (nonatomic, readonly) _Bool _hasLifecycle;
@property (nonatomic, setter=_setIsRespondingToLifecycleEvent:) _Bool _respondingToLifecycleEvent;
@property (nonatomic, readonly, getter=_isActive) _Bool _active;
@property (nonatomic, readonly, getter=_suspendedEventsOnly) _Bool _suspendedEventsOnly;
@property (nonatomic, readonly, getter=_runningInTaskSwitcher) _Bool _runningInTaskSwitcher;
@property (nonatomic, readonly, getter=_suspendedUnderLock) _Bool _suspendedUnderLock;
@property (retain, nonatomic, getter=_cachedInterfaceOrientation, setter=_setCachedInterfaceOrientation:) NSNumber *_cachedInterfaceOrientation;
@property (nonatomic, readonly, getter=_isInternal) _Bool _internal;
@property (nonatomic, readonly, getter=_isUIKitManaged) _Bool _isUIKitManaged;
@property (nonatomic, readonly) _Bool _hostsWindows;
@property (nonatomic, readonly) _Bool _readyForSuspend;
@property (nonatomic, readonly) _Bool _eligableForSuspend;
@property (nonatomic, readonly) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property (nonatomic, readonly) _Bool _hasInvaidated;
@property (retain, nonatomic, setter=_setActivationConditions:) UISceneActivationConditions *_activationConditions;
@property (nonatomic, readonly, getter=_FBSScene) FBSScene *_FBSScene;
@property (nonatomic, setter=_setInvolvedInMediaPlayback:) _Bool _involvedInMediaPlayback;
@property (nonatomic, readonly) NSString *_identifier;
@property (nonatomic, readonly) BKSAnimationFenceHandle *_synchronizedDrawingFence;
@property (nonatomic, readonly) UISceneSession *session;
@property (retain, nonatomic) id <UISceneDelegate> delegate;
@property (nonatomic, readonly) long long activationState;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UISceneActivationConditions *activationConditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sceneForFBSScene:(id)arg1;
+ (_Bool)_hostsWindows;
+ (id)_sceneForFBSScene:(id)arg1 create:(_Bool)arg2 withSession:(id)arg3 connectionOptions:(id)arg4;
+ (Class)_implicitSceneFilterClass;
+ (id)_scenesIncludingInternal:(_Bool)arg1;
+ (id)_synchronizedDrawingFence;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (void *)_unsafeScenesIncludingInternal;
+ (long long)_activationStateFromSceneSettings:(id)arg1;
+ (id)_sceneForFBSScene:(id)arg1 usingPredicate:(id)arg2;
+ (void)_registerSceneComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (void)_enumerateAllWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)_mostActiveScene;
+ (id)_connectionOptionsForScene:(id)arg1 withSpecification:(id)arg2 transitionContext:(id)arg3 actions:(id)arg4 sceneSession:(id)arg5;
+ (id)_persistenceIdentifierForScene:(id)arg1;
+ (_Bool)_activeSettingsTransaction;
+ (void)_setActiveSettingsTransaction:(_Bool)arg1;
+ (void)_enqueuePostSettingUpdateTransactionBlock:(CDUnknownBlockType)arg1;

- (void)_invalidate;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_shortDescription;
- (id)nextResponder;
- (id)_currentOpenApplicationEndpoint;
- (void)_updateUIClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)_refreshActivationConditions;
- (void)_calculateFlattenedDiffActions;
- (void)_calculateFlattenedActionsHandlers;
- (void)_registerSceneComponent:(id)arg1 forKey:(id)arg2;
- (_Bool)_connected;
- (_Bool)_shouldAllowFencing;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 stopped:(_Bool *)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)_prepareForSuspend;
- (struct CGRect)_referenceBounds;
- (void)_computeMetricsForWindows:(id)arg1 animated:(_Bool)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)_initializeSceneComponents;
- (void)_readySceneForConnection;
- (void)_makeKeyAndVisibleIfNeeded;
- (void)_removeInheritingScene:(id)arg1;
- (void)_addInheritingScene:(id)arg1;
- (void)_guardedSetOverrideSettings:(id)arg1;
- (void)_enableOverrideSettingsForActions:(CDUnknownBlockType)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 fromTransitionContext:(id)arg3;
- (void)_emitSceneSettingsUpdateResponseForCompletion:(CDUnknownBlockType)arg1 afterSceneUpdateWork:(CDUnknownBlockType)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_registerSettingsDiffActionArray:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSettingsDiffActionArrayForKey:(id)arg1;
- (void)_registerSceneActionsHandlerArray:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSceneActionsHandlerArray:(id)arg1;
- (void)_unregisterSceneComponentForKey:(id)arg1;
- (id)_sceneComponentForKey:(id)arg1;
- (void)_updateUIClientSettingsWithUITransitionBlock:(CDUnknownBlockType)arg1;
- (void)_updateUIClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)_compatibilityModeZoomDidChange;
- (_Bool)_windowIsFront:(id)arg1;
- (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;
- (void)_computeMetrics:(_Bool)arg1;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (void)__captureWindow:(id)arg1;
- (void)__releaseWindow:(id)arg1;
- (_Bool)_needsMakeKeyAndVisible;
- (void)_prepareForResume;
- (void)_enqueuePostSettingsUpdateResponseBlock:(CDUnknownBlockType)arg1 inPhase:(id)arg2;
- (id)_fixupInheritedSettings:(id)arg1;
- (id)_fixupInheritedClientSettings:(id)arg1;
- (void)_applyOverrideSettings:(id)arg1 forActions:(CDUnknownBlockType)arg2;
- (void)_performSystemSnapshotWithActions:(CDUnknownBlockType)arg1;

@end
