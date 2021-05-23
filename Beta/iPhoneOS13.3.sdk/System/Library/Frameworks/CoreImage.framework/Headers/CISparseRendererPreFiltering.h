/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRendererPreFiltering : CIFilter

{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputApertureScaling;
    NSNumber *inputScale;
}

@property (retain) CIImage *inputImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (copy) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)_kernel:(_Bool)arg1;
- (id)outputImage:(id)arg1 horizontal:(_Bool)arg2 width:(double)arg3;
- (void)dumpImage:(id)arg1 extent:(struct CGRect)arg2 prefixFilename:(id)arg3;

@end
