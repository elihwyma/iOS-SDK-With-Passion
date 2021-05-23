/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect : CIFilter

{
    CIImage *inputImage;
    CIImage *inputDisparityImage;
    CIImage *inputMatteImage;
    CIImage *inputHairImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePositions;
    CIVector *inputRightEyePositions;
    CIVector *inputChinPositions;
    CIVector *inputNosePositions;
    CIVector *inputFocusRect;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScaleFactor;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSString *inputShape;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputHairImage;
@property (retain, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSNumber *inputLumaNoiseScale;
@property (retain) CIVector *inputLeftEyePositions;
@property (retain) CIVector *inputRightEyePositions;
@property (retain) CIVector *inputChinPositions;
@property (retain) CIVector *inputNosePositions;
@property (retain, nonatomic) CIVector *inputFocusRect;
@property (retain, nonatomic) NSNumber *inputScaleFactor;
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSString *inputShape;

+ (id)customAttributes;
+ (int)getDraftMode:(id)arg1;
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg1;
+ (struct CGImageMetadata *)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata *)arg2;
+ (struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg1 tuningParameters:(id)arg2;
+ (struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)outputImage;
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;

@end
