/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

__attribute__((visibility("hidden")))
@interface GKTurbulenceNoiseModifier : GKNoiseModifier

{
    double _power;
    double _frequency;
    double _roughness;
    int _seed;
    GKPerlinNoiseSource *_perlin[3];
}

- (id)init;
- (void)dealloc;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
