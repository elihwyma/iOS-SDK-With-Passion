/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIVector *inputPoint2;
    CIVector *inputPoint3;
    CIVector *inputPoint4;
    CIImage *_curveImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) CIVector *inputPoint0;
@property (copy, nonatomic) CIVector *inputPoint1;
@property (copy, nonatomic) CIVector *inputPoint2;
@property (copy, nonatomic) CIVector *inputPoint3;
@property (copy, nonatomic) CIVector *inputPoint4;

+ (id)customAttributes;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;
+ (void)splineCurveTable:(double *)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint *)arg4;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(_Bool)arg2;

- (void)dealloc;
- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;
- (_Bool)_isIdentity;
- (id)_kernel16;

@end
