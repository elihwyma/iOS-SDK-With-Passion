/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCubeData;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (_Bool)_checkInputs;
- (id)cubeImage;
- (id)_kernelOpaque;

@end
