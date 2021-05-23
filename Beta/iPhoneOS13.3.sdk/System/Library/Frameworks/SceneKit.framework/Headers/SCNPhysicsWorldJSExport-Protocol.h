/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray;

@protocol SCNPhysicsContactDelegate;

@protocol SCNPhysicsWorldJSExport <Swift>

@property (nonatomic) struct SCNVector3 gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;
@property id <SCNPhysicsContactDelegate> contactDelegate;
@property (nonatomic, readonly) NSArray *allBehaviors;

- (unsigned short)removeBehavior: /* Error: Ran out of types for this method. */;
- (unsigned short)addBehavior: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllBehaviors;
- (unsigned short)rayTestWithSegmentFromPoint:toPoint:options: /* Error: Ran out of types for this method. */;
- (unsigned short)contactTestBetweenBody:andBody:options: /* Error: Ran out of types for this method. */;
- (unsigned short)contactTestWithBody:options: /* Error: Ran out of types for this method. */;
- (unsigned short)convexSweepTestWithShape:fromTransform:toTransform:options: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCollisionPairs;

@end
