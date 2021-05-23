/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightRecovery : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

- (id)outputImage;

@end
