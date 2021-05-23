/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory

{
    double _damping;
    double _mass;
    double _stiffness;
    double _velocity;
}

@property (nonatomic) double damping;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double velocity;

+ (void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(CDUnknownBlockType)arg5 options:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;

- (double)durationForEpsilon:(double)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_newSpringAnimationForKeyPath:(id)arg1;

@end
