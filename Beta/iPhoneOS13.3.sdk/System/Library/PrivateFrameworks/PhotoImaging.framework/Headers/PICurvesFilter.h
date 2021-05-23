/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PICurvesFilter : CIFilter

{
    CIImage *_inputImage;
    CIImage *_inputTableImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

+ (id)curvesKernel;

- (id)outputImage;

@end
