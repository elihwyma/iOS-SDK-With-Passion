/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource

{
    int _seed;
    double _frequency;
    long long _octaveCount;
    double _lacunarity;
}

@property (nonatomic) double frequency;
@property (nonatomic) long long octaveCount;
@property (nonatomic) double lacunarity;
@property (nonatomic) int seed;

- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;

@end
