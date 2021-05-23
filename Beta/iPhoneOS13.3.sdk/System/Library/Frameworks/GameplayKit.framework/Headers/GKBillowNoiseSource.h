/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKBillowNoiseSource : GKCoherentNoiseSource

{
    double _persistence;
}

@property (nonatomic) double persistence;

+ (id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

@end
