/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint

{
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    _Bool _keepTargetDirection;
    struct SCNVector3 _targetDirection;
    float _maximumDirectionAngle;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;

+ (_Bool)supportsSecureCoding;
+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct SCNVector3)targetDirection;
- (void)setTargetDirection:(struct SCNVector3)arg1;
- (void)_customEncodingOfSCNDistanceConstraint:(id)arg1;
- (void)_customDecodingOfSCNDistanceConstraint:(id)arg1;
- (_Bool)keepTargetDirection;
- (void)setKeepTargetDirection:(_Bool)arg1;

@end
