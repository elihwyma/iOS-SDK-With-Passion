/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKPotrace : NSObject

{
    struct CGPath *_cachedPath;
    struct potrace_bitmap_s *_potraceBitmap;
    struct potrace_param_s *_potraceParameters;
}

@property int turdsize;
@property int turnpolicy;
@property double alphamax;
@property int opticurve;
@property double opttolerance;

+ (struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg1;

- (void)dealloc;
- (struct CGPath *)CGPath;
- (void)_clearPathIfNecessary;
- (void)_generatePath;
- (id)initWithCGImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 whiteIsInside:(_Bool)arg3;

@end
