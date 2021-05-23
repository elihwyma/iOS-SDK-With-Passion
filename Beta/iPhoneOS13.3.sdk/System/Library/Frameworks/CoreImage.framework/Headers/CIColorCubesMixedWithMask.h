/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCubesMixedWithMask : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMaskImage;
    NSNumber *inputCubeDimension;
    NSData *inputCube0Data;
    NSData *inputCube1Data;
    id inputColorSpace;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCube0Data;
@property (copy, nonatomic) NSData *inputCube1Data;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_checkInputs;

@end
