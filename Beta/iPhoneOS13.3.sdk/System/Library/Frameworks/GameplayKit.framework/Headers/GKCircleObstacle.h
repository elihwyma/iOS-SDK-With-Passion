/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKObstacle.h>

@class MISSING_TYPE;

@interface GKCircleObstacle : GKObstacle

{
    struct SphericalObstacle _obstacle;
}

@property (nonatomic) float radius;
@property (nonatomic) MISSING_TYPE *position;

+ (id)obstacleWithRadius:(float)arg1;

- (id)init;
- (id).cxx_construct;
- (id)initWithRadius:(float)arg1;
- (struct Obstacle *)obstacle;

@end
