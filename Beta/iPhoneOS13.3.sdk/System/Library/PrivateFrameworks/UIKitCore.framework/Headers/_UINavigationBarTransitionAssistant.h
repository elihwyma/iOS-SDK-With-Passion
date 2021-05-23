/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UINavigationBar;

@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionAssistant : NSObject

{
    long long _animationCount;
    NSMutableArray *_animationIDs;
    _Bool _interruptable;
    _Bool _interactive;
    _Bool _needsLifetimeExtended;
    _Bool _cancelledTransition;
    _Bool _cancelledCleanUp;
    _Bool _shouldHideBackButtonDuringTransition;
    _Bool _shouldUpdatePromptAfterTransition;
    int _transition;
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
    UINavigationBar *_navigationBar;
    id <_UINavigationBarDelegatePrivate> _delegate;
    double _duration;
}

@property (weak, nonatomic, readonly) id <UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (weak, nonatomic, readonly) UINavigationBar *navigationBar;
@property (weak, nonatomic, readonly) id <_UINavigationBarDelegatePrivate> delegate;
@property (nonatomic, readonly) int transition;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool interruptable;
@property (nonatomic, readonly) _Bool interactive;
@property (nonatomic) _Bool needsLifetimeExtended;
@property (nonatomic, readonly) _Bool shouldAnimateAlongside;
@property (nonatomic, readonly) _Bool shouldCrossfade;
@property (nonatomic, readonly) _Bool cancelledTransition;
@property (nonatomic, readonly) _Bool cancelledCleanUp;
@property (nonatomic) _Bool shouldHideBackButtonDuringTransition;
@property (nonatomic) _Bool shouldUpdatePromptAfterTransition;
@property (nonatomic, readonly) NSArray *animationIDs;

+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;
+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;

- (void)_startTrackingAnimations;
- (void)_finishTrackingAnimations;
- (void)updateInteractiveTransitionPercent:(double)arg1;
- (void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishTrackingInteractiveTransition;
- (void)startInteractiveTransition;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;
- (void)_getTransitionCoordinator;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;
- (void)_getInteractive;
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(_Bool)arg3;
- (void)cancelCleanUp;
- (void)incrementAnimationCount;
- (void)decrementAnimationCount;

@end
