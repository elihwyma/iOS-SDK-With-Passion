/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModifyBlurmap : CIFilter

{
    CIImage *inputImage;
    CIImage *inputPersonAlpha;
    CIImage *inputHairAlpha;
    CIImage *inputFaceMaskDeltaImage;
    NSNumber *inputScale;
    NSNumber *inputDistanceAdd;
    NSNumber *inputSmoothstepMin;
    NSNumber *inputSmoothstepMax;
    NSNumber *inputMaxBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputRelativeApertureScalingStrength;
    NSNumber *inputPersonDistance;
    NSNumber *inputPersonThreshold;
    CIVector *inputPersonAdditive;
    CIVector *inputPersonSubtractive;
    NSNumber *inputPersonMaxBlur;
    NSNumber *inputHairDistance;
    NSNumber *inputHairThreshold;
    CIVector *inputHairAdditive;
    CIVector *inputHairSubtractive;
    NSNumber *inputHairMaxBlur;
    NSNumber *inputProtectBodyStrength;
    CIVector *inputLeftEyeX;
    CIVector *inputLeftEyeY;
    CIVector *inputRightEyeX;
    CIVector *inputRightEyeY;
    CIVector *inputFaceMidPointX;
    CIVector *inputFaceMidPointY;
    NSNumber *inputEyeProtectionMaxFaces;
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin;
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax;
    NSNumber *inputEyeProtectionOvalDimsDistanceScale;
    NSNumber *inputEyeProtectionOvalDimsDistanceOffset;
    NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal;
    NSNumber *inputEyeProtectionOvalDimsRadiusVertical;
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin;
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax;
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMin;
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMax;
    NSNumber *inputEyeProtectionPreventStrength;
    NSNumber *inputEyeProtectionSubtractiveMaxBlur;
    NSNumber *inputEyeProtectionSubtractiveApertureScaling;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPersonAlpha;
@property (retain) CIImage *inputHairAlpha;
@property (retain) CIImage *inputFaceMaskDeltaImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputDistanceAdd;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputRelativeApertureScalingStrength;
@property (retain) NSNumber *inputSmoothstepMin;
@property (retain) NSNumber *inputSmoothstepMax;
@property (retain) NSNumber *inputMaxBlur;
@property (retain) NSNumber *inputPersonDistance;
@property (retain) NSNumber *inputPersonThreshold;
@property (retain) CIVector *inputPersonAdditive;
@property (retain) CIVector *inputPersonSubtractive;
@property (retain) NSNumber *inputPersonMaxBlur;
@property (retain) NSNumber *inputHairDistance;
@property (retain) NSNumber *inputHairThreshold;
@property (retain) CIVector *inputHairAdditive;
@property (retain) CIVector *inputHairSubtractive;
@property (retain) NSNumber *inputHairMaxBlur;
@property (retain) NSNumber *inputProtectBodyStrength;
@property (retain) CIVector *inputLeftEyeX;
@property (retain) CIVector *inputLeftEyeY;
@property (retain) CIVector *inputRightEyeX;
@property (retain) CIVector *inputRightEyeY;
@property (retain) CIVector *inputFaceMidPointX;
@property (retain) CIVector *inputFaceMidPointY;
@property (retain) NSNumber *inputEyeProtectionMaxFaces;
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceScale;
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceOffset;
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal;
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusVertical;
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionPreventStrength;
@property (retain) NSNumber *inputEyeProtectionSubtractiveMaxBlur;
@property (retain) NSNumber *inputEyeProtectionSubtractiveApertureScaling;

+ (id)customAttributes;

- (id)outputImage;

@end
