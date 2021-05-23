/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRoundedRectangleGenerator : CIFilter

{
    CIVector *inputExtent;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
