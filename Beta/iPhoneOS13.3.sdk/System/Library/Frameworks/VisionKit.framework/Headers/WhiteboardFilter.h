/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface WhiteboardFilter : CIFilter

{
    CIImage *_inputImage;
    NSNumber *_stride;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *stride;

+ (id)customAttributes;

- (id)outputImage;
- (id)whiteboardFilterKernel;

@end
