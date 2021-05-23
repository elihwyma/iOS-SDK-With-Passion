/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation

{
    CDUnknownBlockType _applier;
    CDUnknownBlockType _viewApplier;
    double _value;
    double _velocity;
    double _unitSize;
    double _friction;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _multiplier;
    NSMutableArray *_activeValues;
    void *_stepFunction;
}

@property (nonatomic) double value;
@property (nonatomic) double velocity;
@property (nonatomic) double friction;
@property (copy, nonatomic) NSArray *activeValues;

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)_multiplier;
- (void)_setMultiplier:(double)arg1;
- (_Bool)_animateForInterval:(double)arg1;
- (id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3;
- (void)_stopAnimation;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setDecelerationFactor:(double)arg1;
- (void)addActiveValue:(id)arg1;
- (void)_updateStepFunction;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (double)settlingDuration;
- (void)removeActiveValue:(id)arg1;
- (void)_setVelocity:(double)arg1;

@end
