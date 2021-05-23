/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject

{
    double _duration;
    _Bool _needsDurationUpdate;
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
@property (retain, nonatomic) CAMediaTimingFunction *timing;

+ (double)defaultDuration;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;
+ (id)defaultTimingFunction;

- (id)init;
- (void)dealloc;
- (id)_timingFunctionForAnimation;
- (id)springAnimationWithKeyPath:(id)arg1;
- (id)initWithVelocity:(double)arg1;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (void)_updateDurationIfNecessary;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;

@end
