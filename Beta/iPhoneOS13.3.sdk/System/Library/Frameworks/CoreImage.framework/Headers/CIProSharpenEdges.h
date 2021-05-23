/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIEdgesPrep;
- (id)_CIFindEdges;
- (id)_CIConvertRGBtoY;
- (id)_CIBlur1;
- (id)_CIBlur2;
- (id)_CIBlur4;
- (id)_CISharpenCombineEdges;

@end
