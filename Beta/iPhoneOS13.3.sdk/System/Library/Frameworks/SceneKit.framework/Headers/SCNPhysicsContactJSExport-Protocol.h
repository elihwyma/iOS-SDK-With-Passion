/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode;

@protocol SCNPhysicsContactJSExport <Swift>

@property (nonatomic, readonly) SCNNode *nodeA;
@property (nonatomic, readonly) SCNNode *nodeB;
@property (nonatomic, readonly) struct SCNVector3 contactPoint;
@property (nonatomic, readonly) struct SCNVector3 contactNormal;
@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) double penetrationDistance;

@end
