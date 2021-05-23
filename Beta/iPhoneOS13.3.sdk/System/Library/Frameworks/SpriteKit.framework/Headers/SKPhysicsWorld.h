/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@protocol SKPhysicsContactDelegate;

@interface SKPhysicsWorld : NSObject

{
    double speed;
    id <SKPhysicsContactDelegate> _contactDelegate;
    struct CGVector _gravity;
}

@property (nonatomic) struct CGVector gravity;
@property (nonatomic) double speed;
@property (nonatomic) id <SKPhysicsContactDelegate> contactDelegate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fields;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (void)addBody:(id)arg1;
- (void)removeBody:(id)arg1;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (void)removeAllJoints;
- (id)bodies;
- (_Bool)hasBodies;
- (_Bool)hasFields;
- (void)removeAllBodies;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (MISSING_TYPE *)sampleFields: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sampleFieldsAt: /* Error: Ran out of types for this method. */;

@end
