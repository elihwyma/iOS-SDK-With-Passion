/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthEffectMakeBlurMap : CIFilter

{
    CIImage *inputImage;
    CIImage *inputShiftmapImage;
    CIImage *inputMatteImage;
    CIImage *inputHairImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePosition;
    CIVector *inputRightEyePosition;
    CIVector *inputChinPosition;
    CIVector *inputFaceMidPoint;
    CIVector *inputFocusRect;
    NSNumber *inputScale;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSDictionary *tuningParameters;
    float simulatedAperture;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputShiftmapImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputHairImage;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain) CIVector *inputLeftEyePosition;
@property (retain) CIVector *inputRightEyePosition;
@property (retain) CIVector *inputChinPosition;
@property (retain) CIVector *inputFaceMidPoint;
@property (retain, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)outputImage;
- (id)calibrationData;
- (struct CGSize)originalShiftMapSize;
- (float)intrinsicMatrixFocalLength;
- (id)upsampledShiftMap:(id)arg1;
- (id)smoothShiftMapV2:(id)arg1;
- (id)lensModelParams:(id)arg1;
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;
- (_Bool)needToRunFaceMask;
- (id)faceMaskParams:(id)arg1 useNormalizedCoords:(_Bool)arg2;
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;
- (id)refineShiftMapV3WithMainImage:(id)arg1 shiftmap:(id)arg2 lensModel:(id)arg3;
- (id)faceMaskDelta:(id)arg1 extent:(struct CGRect)arg2 parameters:(id)arg3 distanceToAdd:(float *)arg4;
- (id)blurMapV2:(id)arg1;
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;
- (id)blurMapV4:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3 hairImage:(id)arg4;

@end
