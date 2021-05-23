/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKClampNoiseModifier : GKNoiseModifier

{
    double _lowerBound;
    double _upperBound;
}

- (id)init;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
