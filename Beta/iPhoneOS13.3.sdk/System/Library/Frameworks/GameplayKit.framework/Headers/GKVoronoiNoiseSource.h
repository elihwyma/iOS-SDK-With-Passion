/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseSource.h>

@interface GKVoronoiNoiseSource : GKNoiseSource

{
    _Bool _distanceEnabled;
    int _seed;
    double _frequency;
    double _displacement;
}

@property (nonatomic) double frequency;
@property (nonatomic) double displacement;
@property (nonatomic, getter=isDistanceEnabled) _Bool distanceEnabled;
@property (nonatomic) int seed;

+ (id)voronoiNoiseWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(_Bool)arg3 seed:(int)arg4;

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (id)initWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(_Bool)arg3 seed:(int)arg4;

@end
