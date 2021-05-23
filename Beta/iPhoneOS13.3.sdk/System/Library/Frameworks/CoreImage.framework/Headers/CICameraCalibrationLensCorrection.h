/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICameraCalibrationLensCorrection : CIFilter

{
    CIImage *inputImage;
    AVCameraCalibrationData *inputAVCameraCalibrationData;
    NSNumber *inputUseInverseLookUpTable;
}

+ (id)customAttributes;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)outputImage;
- (struct CGPoint)ReferenceensDistortionPointForPoint:(struct CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint)arg3 imageSize:(struct CGSize)arg4;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;

@end
