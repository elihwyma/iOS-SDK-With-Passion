/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface CIRAWGamutMapping : CIFilter

{
    CIImage *inputImage;
    NSDictionary *inputRAWDictionary;
}

- (id)outputImage;

@end
