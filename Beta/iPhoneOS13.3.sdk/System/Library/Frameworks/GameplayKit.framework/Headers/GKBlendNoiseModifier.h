/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKBlendNoiseModifier : GKNoiseModifier

{
    double _lowerBound;
    double _upperBound;
    double _blendDistance;
}

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
