/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDocumentEnhancer : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;

@end
