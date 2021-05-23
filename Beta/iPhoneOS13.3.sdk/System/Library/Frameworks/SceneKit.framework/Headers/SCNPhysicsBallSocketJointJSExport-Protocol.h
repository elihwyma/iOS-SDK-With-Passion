/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsBallSocketJointJSExport <Swift>

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 anchorB;

+ (unsigned short)jointWithBodyA:anchorA:bodyB:anchorB: /* Error: Ran out of types for this method. */;
+ (unsigned short)jointWithBody:anchor: /* Error: Ran out of types for this method. */;

@end
