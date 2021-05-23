/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, MLModel, NSNumber;

__attribute__((visibility("hidden")))
@interface CICoreMLModelFilter : CIFilter

{
    CIImage *inputImage;
    MLModel *inputModel;
    NSNumber *inputHeadIndex;
    NSNumber *inputSoftmaxNormalization;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) MLModel *inputModel;
@property (retain, nonatomic) NSNumber *inputHeadIndex;
@property (retain, nonatomic) NSNumber *inputSoftmaxNormalization;

+ (id)customAttributes;

- (id)outputImage;

@end
