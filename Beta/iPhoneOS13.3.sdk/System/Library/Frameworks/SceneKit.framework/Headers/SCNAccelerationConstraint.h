/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@interface SCNAccelerationConstraint : SCNConstraint

{
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}

@property (nonatomic) double maximumLinearAcceleration;
@property (nonatomic) double maximumLinearVelocity;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double damping;

+ (_Bool)supportsSecureCoding;
+ (id)accelerationConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
