/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode;

@protocol SCNIKConstraintJSExport <Swift>

@property (nonatomic, readonly) SCNNode *chainRootNode;
@property (nonatomic) struct SCNVector3 targetPosition;

+ (unsigned short)inverseKinematicsConstraintWithChainRootNode: /* Error: Ran out of types for this method. */;

- (unsigned short)initWithChainRootNode: /* Error: Ran out of types for this method. */;
- (unsigned short)setMaxAllowedRotationAngle:forJoint: /* Error: Ran out of types for this method. */;
- (unsigned short)maxAllowedRotationAngleForJoint: /* Error: Ran out of types for this method. */;

@end
