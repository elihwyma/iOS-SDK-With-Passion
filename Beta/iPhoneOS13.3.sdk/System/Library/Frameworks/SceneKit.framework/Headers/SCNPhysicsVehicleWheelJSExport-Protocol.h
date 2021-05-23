/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode;

@protocol SCNPhysicsVehicleWheelJSExport <Swift>

@property (readonly) SCNNode *node;
@property double suspensionStiffness;
@property double suspensionCompression;
@property double suspensionDamping;
@property double maximumSuspensionTravel;
@property double frictionSlip;
@property double maximumSuspensionForce;
@property struct SCNVector3 connectionPosition;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 axle;
@property double radius;
@property double suspensionRestLength;

+ (unsigned short)wheelWithNode: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;

@end
