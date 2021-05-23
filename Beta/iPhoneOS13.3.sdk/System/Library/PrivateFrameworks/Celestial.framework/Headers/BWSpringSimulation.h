/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWSpringSimulation : NSObject

{
    double _tension;
    double _friction;
    double _convergedSpeed;
    double _inputValue;
    double _outputValue;
    double _previousForce;
    _Bool _completed;
    int _updateCount;
}

@property (nonatomic) double input;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic, readonly) double output;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;
@property (nonatomic, readonly) int updateCount;

+ (void)initialize;

- (id)init;
- (void)update;
- (void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 convergedSpeed:(double)arg4;
- (void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3;

@end
