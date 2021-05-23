/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeChannel : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputChannel;
    NSNumber *inputParam1;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
}

- (id)outputImage;
- (id)filterNameForChannel:(int)arg1;
- (id)parameterNamesForChannel:(int)arg1;

@end
