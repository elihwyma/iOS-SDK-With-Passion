/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsHingeJointJSExport <Swift>

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 axisA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 axisB;
@property (nonatomic) struct SCNVector3 anchorB;

+ (unsigned short)jointWithBodyA:axisA:anchorA:bodyB:axisB:anchorB: /* Error: Ran out of types for this method. */;
+ (unsigned short)jointWithBody:axis:anchor: /* Error: Ran out of types for this method. */;

@end
