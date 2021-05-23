/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartColorFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputVibrancy;
    NSNumber *inputContrast;
    NSNumber *inputCast;
    NSNumber *inputUseCube;
    id inputUseCubeColorSpace;
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputVibrancy;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputCast;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernelV_lt1;
- (id)_kernelV_gt1;
- (id)_kernelCPos;
- (id)_kernelCNeg;
- (id)_kernelCast;

@end
