/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKConstantPowerNoiseModifier : GKNoiseModifier

{
    double _power;
}

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithConstantPower:(double)arg1;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
