/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode;

@interface SCNPhysicsContact : NSObject

{
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    struct SCNVector3 _contactPoint;
    struct SCNVector3 _contactNormal;
    double _collisionImpulse;
    double _distance;
    double _fraction;
    long long _updateCount;
}

@property (nonatomic, readonly) SCNNode *nodeA;
@property (nonatomic, readonly) SCNNode *nodeB;
@property (nonatomic, readonly) struct SCNVector3 contactPoint;
@property (nonatomic, readonly) struct SCNVector3 contactNormal;
@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) double penetrationDistance;
@property (nonatomic, readonly) double sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2;

- (void)dealloc;
- (id)description;
- (void)_setupWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2 point:(const struct btManifoldPoint *)arg3;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3)arg3 collisionImpulse:(struct SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;
- (void)_prepareUpdate;
- (_Bool)_shouldPostUpdate;

@end
