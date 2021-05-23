/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIInverseFakeBoost : CIFilter

{
    double _inputBoost;
    CIImage *_inputImage;
}

@property double inputBoost;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (id)outputImage;

@end
