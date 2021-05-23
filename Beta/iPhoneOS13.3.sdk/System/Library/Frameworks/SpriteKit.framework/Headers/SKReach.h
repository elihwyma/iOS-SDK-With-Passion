/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSMutableArray, SKNode;

__attribute__((visibility("hidden")))
@interface SKReach : SKAction

{
    SKNode *_ikRoot;
    struct CGPoint _goalPosition;
    NSMutableArray *_ikChain;
    double _velocity;
    _Bool _timeConstrained;
    double _zRotationSpeed;
}

+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)solveIKWithTarget:(id)arg1;

@end
