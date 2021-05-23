/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;
- (_Bool)_isIdentity;
- (id)_kernelNeg;
- (id)_kernelPos;

@end
