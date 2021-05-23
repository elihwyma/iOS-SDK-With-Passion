/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheapBilateral : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSource;
    NSNumber *inputSigmaSpace;
    NSNumber *inputSigmaRange;
}

@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) NSNumber *inputSigmaSpace;
@property (retain, nonatomic) NSNumber *inputSigmaRange;

+ (id)customAttributes;

- (id)outputImage;

@end
