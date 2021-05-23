/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWRamp : NSObject

{
    _Bool _isRamping;
    float _currentValue;
    int _currentIteration;
    float _startValue;
    float _targetValue;
    int _durationInIterations;
    int _shape;
    _Bool _isRampingUp;
    float _exponentialConvergenceFraction;
    float _exponentialSnapFraction;
}

@property (nonatomic, readonly) _Bool isRamping;
@property (nonatomic, readonly) float currentValue;
@property (nonatomic, readonly) _Bool isRampingUp;

+ (void)initialize;

- (id)init;
- (float)updateRampForNexIteration;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 exponentialConvergenceFraction:(float)arg5;

@end
