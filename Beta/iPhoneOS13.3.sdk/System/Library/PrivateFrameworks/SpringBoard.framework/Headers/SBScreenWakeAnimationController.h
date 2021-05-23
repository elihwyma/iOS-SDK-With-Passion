/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBFLockScreenDateView;

@protocol SBFScreenWakeAnimationTarget;

@interface SBScreenWakeAnimationController : NSObject

{
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalStatusBarAlpha;
    id <SBFScreenWakeAnimationTarget> _target;
    SBFLockScreenDateView *_realDateView;
    _Bool _preparingToAnimateWake;
    _Bool _animatingForWake;
    _Bool _animatingForSleep;
    _Bool _insideWakeCompletionBlock;
    _Bool _insideSleepCompletionBlock;
    int _animationToken;
    CDUnknownBlockType _wakeCompletionBlock;
    CDUnknownBlockType _sleepCompletionBlock;
    _Bool _animatingWallpaper;
    _Bool _animatingContent;
    _Bool _animatingBacklight;
    _Bool _ignoringInteractionEvents;
    _Bool _waitingForScreenUnblank;
    long long _lastBacklightChangeSource;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_temporaryDisabledReasons;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
+ (double)backlightFadeDurationForSource:(long long)arg1 isWake:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isWakeAnimationInProgress;
- (void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)isSleepAnimationInProgress;
- (void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanupAnimationWhenInterruptingWaking:(_Bool)arg1;
- (_Bool)interruptSleepAnimationIfNeeded;
- (void)_runCompletionHandlerForWake:(_Bool)arg1;
- (void)_setInteractionEventsIgnored:(_Bool)arg1;
- (void)_setLastBacklightChangeSource:(long long)arg1;
- (void)_setRelevantLockScreenViewsHidden:(_Bool)arg1;
- (void)_startWakeIfNecessary;
- (id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
- (void)_startWakeAnimationsForWaking:(_Bool)arg1 animationSettings:(id)arg2;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(_Bool)arg1;
- (void)sleepForSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (void)setScreenWakeTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;

@end
