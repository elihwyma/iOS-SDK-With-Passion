/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightShadowAdjust : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputShadowAmount;
    NSNumber *inputHighlightAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;
- (int)_defaultVersion;
- (void)setDefaults;
- (int)_maxVersion;
- (_Bool)_isIdentity;
- (id)_kernelSnoB_v0;
- (id)_kernelSHnoB_v0;
- (id)_kernelSH_v0;
- (id)_kernelSHnoB_v1;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v2;
- (id)_kernelSH_v2;

@end
