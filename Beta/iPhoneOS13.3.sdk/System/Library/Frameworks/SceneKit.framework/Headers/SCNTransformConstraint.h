/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@interface SCNTransformConstraint : SCNConstraint

+ (_Bool)supportsSecureCoding;
+ (id)transformConstraintInWorldSpace:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)positionConstraintInWorldSpace:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)orientationConstraintInWorldSpace:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTransformInWorld:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initPositionInWorld:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initOrientationInWorldSpace:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
