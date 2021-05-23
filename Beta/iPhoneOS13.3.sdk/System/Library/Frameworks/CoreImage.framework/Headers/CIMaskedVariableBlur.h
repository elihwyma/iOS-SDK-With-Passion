/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMaskedVariableBlur : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMask;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMask;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernelD2;
- (id)downTwo:(id)arg1;
- (id)upCubic:(id)arg1 scale:(float)arg2;
- (id)_kernelCombine;

@end
