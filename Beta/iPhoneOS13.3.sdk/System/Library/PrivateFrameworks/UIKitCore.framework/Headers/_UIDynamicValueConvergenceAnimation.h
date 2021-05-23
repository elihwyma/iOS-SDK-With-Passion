/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDynamicAnimation.h>

__attribute__((visibility("hidden")))
@interface _UIDynamicValueConvergenceAnimation : _UIDynamicAnimation

{
    CDUnknownBlockType _applier;
    double _value;
    double _targetValue;
    double _convergenceRate;
    double _minimumDifference;
}

@property (nonatomic) double value;
@property (nonatomic) double targetValue;
@property (nonatomic) double convergenceRate;
@property (nonatomic) double minimumDifference;

- (_Bool)_animateForInterval:(double)arg1;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4;

@end
