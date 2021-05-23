/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFDrawerSpringInfo : NSObject

{
    double _mass;
    double _stiffness;
    double _damping;
    double _initialVelocity;
    double _undershootTime;
    double _overshootTime;
    double _settlingTime;
}

@property (readonly) double mass;
@property (readonly) double stiffness;
@property (readonly) double damping;
@property (readonly) double initialVelocity;
@property (readonly) double undershootTime;
@property (readonly) double overshootTime;
@property (readonly) double settlingTime;

- (id)description;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4;
- (double)valueAtTime:(double)arg1;

@end
