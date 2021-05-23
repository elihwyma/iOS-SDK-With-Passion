/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKObstacle.h>

@class MISSING_TYPE;

@interface GKPolygonObstacle : GKObstacle

{
    struct GKCPolygonObstacle *_cPolygonObstacle;
}

@property (nonatomic, readonly) unsigned long long vertexCount;

+ (_Bool)supportsSecureCoding;
+ (id)obstacleWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (MISSING_TYPE *)vertexAtIndex:(unsigned long long)arg1;
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (struct GKCPolygonObstacle *)cPolygonObstacle;
- (struct Obstacle *)obstacle;
- (void)setCPolygonObstacle:(struct GKCPolygonObstacle *)arg1;

@end
