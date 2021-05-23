/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKCurveNoiseModifier : GKNoiseModifier

{
    double *_parameters;
    double *_controlPoints;
    int _count;
}

- (id)init;
- (void)dealloc;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithControlPoints:(id)arg1;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
