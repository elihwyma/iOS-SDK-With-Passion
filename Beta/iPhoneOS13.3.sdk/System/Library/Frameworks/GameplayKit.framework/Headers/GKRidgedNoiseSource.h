/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKRidgedNoiseSource : GKCoherentNoiseSource

{
    double m_weights[30];
}

+ (id)ridgedNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;

@end
