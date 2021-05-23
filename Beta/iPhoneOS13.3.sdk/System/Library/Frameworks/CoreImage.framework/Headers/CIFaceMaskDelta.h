/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceMaskDelta : CIFilter

{
    CIVector *inputImageSize;
    CIImage *inputParameterImage;
    CIVector *inputFacesCenterX;
    CIVector *inputFacesCenterY;
    CIVector *inputFacesChinX;
    CIVector *inputFacesChinY;
    CIVector *inputFacesLeftEyeX;
    CIVector *inputFacesLeftEyeY;
    CIVector *inputFacesRightEyeX;
    CIVector *inputFacesRightEyeY;
    CIVector *inputK0;
    CIVector *inputK1;
    CIVector *inputK2;
    CIVector *inputK3;
    NSDictionary *inputTuningParameters;
    NSNumber *inputDistanceAdd;
    NSNumber *inputAdditiveMaxBlur;
    NSNumber *inputSubtractiveMaxBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputMaxBlur;
    CIVector *inputFocusRect;
    NSNumber *inputSubjectDistanceMinimumFocusDistance;
    NSNumber *inputSubjectDistanceMaximumFocusDistance;
    NSNumber *inputSubjectDistanceScalingFactor;
    NSNumber *inputSubjectDistanceOffset;
}

@property (retain, nonatomic) CIVector *inputImageSize;
@property (retain, nonatomic) CIImage *inputParameterImage;
@property (copy, nonatomic) CIVector *inputFacesCenterX;
@property (copy, nonatomic) CIVector *inputFacesCenterY;
@property (copy, nonatomic) CIVector *inputFacesChinX;
@property (copy, nonatomic) CIVector *inputFacesChinY;
@property (copy, nonatomic) CIVector *inputFacesLeftEyeX;
@property (copy, nonatomic) CIVector *inputFacesLeftEyeY;
@property (copy, nonatomic) CIVector *inputFacesRightEyeX;
@property (copy, nonatomic) CIVector *inputFacesRightEyeY;
@property (copy, nonatomic) CIVector *inputK0;
@property (copy, nonatomic) CIVector *inputK1;
@property (copy, nonatomic) CIVector *inputK2;
@property (copy, nonatomic) CIVector *inputK3;
@property (copy, nonatomic) NSNumber *inputDistanceAdd;
@property (copy, nonatomic) NSNumber *inputAdditiveMaxBlur;
@property (copy, nonatomic) NSNumber *inputSubtractiveMaxBlur;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMinimumFocusDistance;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMaximumFocusDistance;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceScalingFactor;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceOffset;
@property (copy, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSDictionary *inputTuningParameters;

- (id)outputImage;
- (_Bool)_isValidFace:(unsigned int)arg1;
- (unsigned int)findMostProminentFace;
- (double)_landmarksToDist:(unsigned int)arg1 minimumDistance:(float)arg2 maximumDistance:(float)arg3 scalingFactor:(float)arg4 offset:(float)arg5;
- (float)distanceToAdd;

@end
