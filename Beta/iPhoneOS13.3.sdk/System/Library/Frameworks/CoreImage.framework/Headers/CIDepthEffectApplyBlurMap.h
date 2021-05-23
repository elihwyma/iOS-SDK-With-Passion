/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthEffectApplyBlurMap : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBlurMap;
    CIImage *inputMatteImage;
    NSNumber *inputAperture;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScale;
    id inputAuxDataMetadata;
    NSString *inputShape;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurMap;
@property (retain) CIImage *inputMatteImage;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;

@end
