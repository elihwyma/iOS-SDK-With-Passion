/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurV2 : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    CIImage *inputMatteImage;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScale;
    NSNumber *inputAperture;
    NSDictionary *inputTuningParameters;
    NSString *inputShape;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputBlurmapImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)sensorSize;
- (double)effectiveScale;

@end
