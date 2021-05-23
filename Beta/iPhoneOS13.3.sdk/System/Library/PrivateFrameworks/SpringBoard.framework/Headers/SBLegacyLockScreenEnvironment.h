/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBLockScreenViewControllerBase, UIViewController;

@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBFScreenWakeAnimationTarget, SBIdleTimerProviding, SBLockScreenApplicationLaunching, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning;

@interface SBLegacyLockScreenEnvironment : NSObject <Swift>

{
    SBLockScreenViewControllerBase *_lockScreenViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) id <SBAutoUnlockRule> autoUnlockRule;
@property (nonatomic, readonly) id <SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property (nonatomic, readonly) id <SBButtonEventsHandler> buttonEventsHandler;
@property (nonatomic, readonly) id <SBApplicationHosting> applicationHoster;
@property (nonatomic, readonly) id <SBIdleTimerProviding> idleTimerProvider;
@property (nonatomic, readonly) id <SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property (nonatomic, readonly) id <SBLockScreenApplicationLaunching> applicationLauncher;
@property (nonatomic, readonly) id <SBLockScreenBacklightControlling> backlightController;
@property (nonatomic, readonly) id <SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property (nonatomic, readonly) id <SBLockScreenBlockedStateObserving> blockedStateObserver;
@property (nonatomic, readonly) id <SBLockScreenButtonObserving> buttonObserver;
@property (nonatomic, readonly) id <SBLockScreenCallHandling> callController;
@property (nonatomic, readonly) id <SBLockScreenContentStateProviding> contentStateProvider;
@property (nonatomic, readonly) id <SBLockScreenCustomActionStoring> customActionStore;
@property (nonatomic, readonly) id <SBLockScreenIdleTimerControlling> idleTimerController;
@property (nonatomic, readonly) id <SBLockScreenLockingAndUnlocking> lockController;
@property (nonatomic, readonly) id <SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property (nonatomic, readonly) id <SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property (nonatomic, readonly) id <SBLockScreenPluginPresenting> pluginPresenter;
@property (nonatomic, readonly) id <SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property (nonatomic, readonly) id <SBLockScreenStatusBarTransitioning> statusBarTransitionController;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithLockScreenViewController:(id)arg1;

@end
