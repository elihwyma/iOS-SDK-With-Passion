/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrections : CIFilter

{
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSArray *inputCorrectionInfo;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSArray *inputCorrectionInfo;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;
- (void)setDefaults;
- (_Bool)_isIdentity;

@end
