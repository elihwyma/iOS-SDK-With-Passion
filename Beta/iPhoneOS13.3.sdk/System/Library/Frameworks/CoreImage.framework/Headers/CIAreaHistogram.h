/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaHistogram : CIFilter

{
    CIImage *inputImage;
    CIVector *inputExtent;
    NSNumber *inputScale;
    NSNumber *inputCount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputCount;

+ (id)customAttributes;

- (id)outputImage;
- (struct IRect)_netExtent;
- (_Bool)_inputsAreOK;
- (id)outputImageNonMPS;
- (id)outputData;

@end
