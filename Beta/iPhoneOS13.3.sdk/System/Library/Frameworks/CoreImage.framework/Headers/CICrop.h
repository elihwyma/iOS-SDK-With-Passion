/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter

{
    CIImage *inputImage;
    CIVector *inputRectangle;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRectangle;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;

@end
