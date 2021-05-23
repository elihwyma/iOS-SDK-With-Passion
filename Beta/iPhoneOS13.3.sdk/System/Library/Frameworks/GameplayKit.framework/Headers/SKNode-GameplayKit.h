/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <SpriteKit/SKNode.h>

@class GKEntity;

@interface SKNode (GameplayKit)

@property (weak, nonatomic) GKEntity *entity;

+ (id)obstaclesFromSpriteTextures:(id)arg1 accuracy:(float)arg2;
+ (id)obstaclesFromNodeBounds:(id)arg1;
+ (id)obstaclesFromNodePhysicsBodies:(id)arg1;

@end
