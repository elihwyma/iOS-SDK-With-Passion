/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAMeshTransform.h>

__attribute__((visibility("hidden")))
@interface CAMeshInterpolator : CAMeshTransform

{
    struct Interpolator *_interp;
}

- (void)dealloc;
- (id)meshTransformForLayer:(id)arg1;

@end
