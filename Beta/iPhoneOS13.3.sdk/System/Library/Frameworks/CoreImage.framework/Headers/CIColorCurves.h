/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSData;

__attribute__((visibility("hidden")))
@interface CIColorCurves : CIFilter

{
    CIImage *inputImage;
    NSData *inputCurvesData;
    CIVector *inputCurvesDomain;
    id inputColorSpace;
    CIImage *_curvesImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSData *inputCurvesData;
@property (retain, nonatomic) CIVector *inputCurvesDomain;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (_Bool)_checkInputs;
- (id)curvesImage;

@end
