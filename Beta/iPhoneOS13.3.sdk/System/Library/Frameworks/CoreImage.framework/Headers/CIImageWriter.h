/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIImageWriter : CIFilter

{
    CIImage *inputImage;
    NSString *inputFilename;
    NSNumber *inputShouldDumpInputValues;
    CIFilter *inputOriginalFilter;
}

@property (retain) CIImage *inputImage;
@property (retain) NSString *inputFilename;
@property (retain) NSNumber *inputShouldDumpInputValues;
@property (retain) CIFilter *inputOriginalFilter;

+ (id)customAttributes;

- (id)outputImage;

@end
