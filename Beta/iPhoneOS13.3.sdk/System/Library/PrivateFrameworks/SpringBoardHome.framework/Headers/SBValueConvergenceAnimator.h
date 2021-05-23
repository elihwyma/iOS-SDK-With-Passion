/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBValueConvergenceAnimator : NSObject

{
    double _previousForce;
    double _diff;
    _Bool _finishesOnValueConvergence;
    double _currentValue;
    double _targetValue;
    CDUnknownBlockType _convergenceFunction;
    CDUnknownBlockType _applier;
    CDUnknownBlockType _completion;
    long long _frameInterval;
    double _startTime;
    double _lastFireTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastFireTime;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic) double currentValue;
@property (nonatomic) double targetValue;
@property (nonatomic) _Bool finishesOnValueConvergence;
@property (copy, nonatomic) CDUnknownBlockType convergenceFunction;
@property (copy, nonatomic) CDUnknownBlockType applier;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) long long frameInterval;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (_Bool)isRunning;
- (void)_reset;
- (void)setConvergenceFunctionWithConstant:(long long)arg1;
- (void)_invokeApplier;
- (void)_invokeCompletionWithFinished:(_Bool)arg1;
- (void)_convergeValue;

@end
