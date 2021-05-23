/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrection : CIFilter

{
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSDictionary *inputCorrectionInfo;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSDictionary *inputCorrectionInfo;

- (id)outputImage;
- (void)setDefaults;
- (_Bool)_isIdentity;

@end
