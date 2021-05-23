/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIBilateralFilter : CIFilter

{
    CIImage *_inputImage;
    NSNumber *_inputRadius;
    NSNumber *_inputEdgeDetail;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputRadius;
@property (retain) NSNumber *inputEdgeDetail;

+ (id)customAttributes;

- (id)outputImage;

@end
