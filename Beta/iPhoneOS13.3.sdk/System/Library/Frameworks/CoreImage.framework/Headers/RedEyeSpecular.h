/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeSpecular : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputSpecularMask;
    NSNumber *inputSpecularThreshold;
    NSNumber *inputSpecIntensity;
    NSNumber *inputDebugFlag;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) CIImage *inputSpecularMask;
@property (retain, nonatomic) NSNumber *inputSpecularThreshold;
@property (retain, nonatomic) NSNumber *inputSpecIntensity;
@property (retain, nonatomic) NSNumber *inputDebugFlag;

- (id)outputImage;

@end
