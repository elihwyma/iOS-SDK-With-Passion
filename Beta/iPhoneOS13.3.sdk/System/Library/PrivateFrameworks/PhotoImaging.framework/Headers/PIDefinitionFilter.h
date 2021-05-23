/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter

{
    CIImage *_inputImage;
    CIImage *_inputBlurImage;
    NSNumber *_inputIntensity;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) NSNumber *inputIntensity;

+ (id)definitionKernel;

- (id)outputImage;

@end
