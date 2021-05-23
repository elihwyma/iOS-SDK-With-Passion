/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIApplicationSceneSettings, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneLifecycleMultiplexer : NSObject

{
    UIScene *_uiSceneOfRecord;
    UIApplicationSceneSettings *_transitionalLifecycleState;
    struct {
        unsigned int completedLaunch:1;
        unsigned int activatedOnce:1;
    } _multiplexerFlags;
}

@property (nonatomic, readonly) _Bool activatedOnce;
@property (nonatomic, readonly) _Bool lifecycleWantsUnnecessaryDelayForSceneDelivery;
@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) _Bool suspendedEventsOnly;
@property (nonatomic, readonly) _Bool suspendedUnderLock;
@property (nonatomic, readonly) _Bool runningInTaskSwitcher;

+ (id)sharedInstance;
+ (id)mostActiveScene;
+ (id)mostActiveSceneWithTest:(CDUnknownBlockType)arg1;
+ (id)mostActiveWindowSceneOnScreen:(id)arg1;
+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;

- (_Bool)isTrackingScene:(id)arg1;
- (void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3;
- (id)initForAppSingleton:(id)arg1;
- (void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(_Bool)arg3 withTransitionStore:(CDStruct_d58a15aa)arg4;
- (void)_globalTestRelatedActivationActionsForFirstActivation:(_Bool)arg1 foreground:(_Bool)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4;
- (void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2;
- (void)_scheduleFirstCommit;
- (_Bool)_prepareForClientSuspensionWithScene:(id)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3;
- (void)noteApplicationLaunchCompleted;
- (void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2;
- (void)collectBackingStores;

@end
