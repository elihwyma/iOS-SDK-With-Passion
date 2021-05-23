/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@class NSMutableDictionary, SCNNode;

@interface SCNIKConstraint : SCNConstraint

{
    SCNNode *_chainRootNode;
    struct SCNVector3 _ikTarget;
    NSMutableDictionary *_jointsPerNode;
}

@property (nonatomic, readonly) SCNNode *chainRootNode;
@property (nonatomic) struct SCNVector3 targetPosition;

+ (_Bool)supportsSecureCoding;
+ (id)inverseKinematicsConstraintWithChainRootNode:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChainRootNode:(id)arg1;
- (void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2;
- (double)maxAllowedRotationAngleForJoint:(id)arg1;
- (void)setChainRootNode:(id)arg1;
- (id)jointForNode:(id)arg1;
- (void)_customEncodingOfSCNIKConstraint:(id)arg1;
- (void)_customDecodingOfSCNIKConstraint:(id)arg1;
- (void)_didDecodeSCNIKConstraint:(id)arg1;

@end
