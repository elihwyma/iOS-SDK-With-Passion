/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter

{
    CIColor *inputColor;
}

@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
