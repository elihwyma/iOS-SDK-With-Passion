/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceBalance : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputOrigI;
    NSNumber *inputOrigQ;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOrigI;
@property (retain, nonatomic) NSNumber *inputOrigQ;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;
- (_Bool)_isIdentity;

@end
