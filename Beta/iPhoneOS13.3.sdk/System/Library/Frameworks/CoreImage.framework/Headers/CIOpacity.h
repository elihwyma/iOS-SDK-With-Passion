/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIOpacity : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputOpacity;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)outputImage;

@end
