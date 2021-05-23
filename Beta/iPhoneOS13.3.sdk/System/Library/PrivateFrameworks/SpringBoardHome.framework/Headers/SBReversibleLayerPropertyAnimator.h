/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class BSAnimationSettings, CALayer, NSMutableArray, NSString;

@interface SBReversibleLayerPropertyAnimator : NSObject

{
    _Bool _started;
    _Bool _invalidated;
    _Bool _reversedWithNewSettings;
    CALayer *_layer;
    NSString *_keyPath;
    double _initialValue;
    double _targetValue;
    BSAnimationSettings *_currentAnimationSettings;
    CDUnknownBlockType _completion;
    unsigned long long _reversalCount;
    unsigned long long _outstandingCAAnimationCompletionCount;
    NSString *_forwardAnimationKey;
    NSString *_forwardOffsetAnimationKey;
    NSMutableArray *_reversalAnimationKeys;
}

@property (nonatomic) _Bool invalidated;
@property (copy, nonatomic) BSAnimationSettings *currentAnimationSettings;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, getter=hasStarted) _Bool started;
@property (nonatomic, readonly, getter=isGoingForward) _Bool goingForward;
@property (nonatomic) unsigned long long reversalCount;
@property (nonatomic, getter=hasReversedWithNewSettings) _Bool reversedWithNewSettings;
@property (nonatomic) unsigned long long outstandingCAAnimationCompletionCount;
@property (copy, nonatomic) NSString *forwardAnimationKey;
@property (copy, nonatomic) NSString *forwardOffsetAnimationKey;
@property (retain, nonatomic) NSMutableArray *reversalAnimationKeys;
@property (nonatomic, readonly) CALayer *layer;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) double initialValue;
@property (nonatomic, readonly) double targetValue;
@property (nonatomic, readonly, getter=hasReversed) _Bool reversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)reverse;
- (void)_fireCompletionIfNecessary;
- (void)_animateFromRelativeValue:(double)arg1 toRelativeValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (void)_animateFromValue:(double)arg1 toValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (void)_reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;
- (double)_percentCompleteForAnimation:(id)arg1 time:(double)arg2;
- (id)_animationWithSettings:(id)arg1;
- (double)_inputPercentCompleteForAnimation:(id)arg1 outputPercentComplete:(double)arg2 precision:(double)arg3;
- (id)_additiveAnimationForKeyPath:(id)arg1 withSettings:(id)arg2 beginTime:(id)arg3 fromRelativeValue:(double)arg4 toRelativeValue:(double)arg5;
- (double)_outputPercentCompleteForAnimation:(id)arg1 inputPercentComplete:(double)arg2;
- (id)initWithLayer:(id)arg1 keyPath:(id)arg2 initialValue:(double)arg3 targetValue:(double)arg4;
- (void)animateWithSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;

@end
