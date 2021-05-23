/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKTerraceNoiseModifier : GKNoiseModifier

{
    double *_controlPoints;
    int _count;
    _Bool _inverted;
}

- (id)init;
- (void)dealloc;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithPeakInputValues:(id)arg1 terracesInverted:(_Bool)arg2;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
