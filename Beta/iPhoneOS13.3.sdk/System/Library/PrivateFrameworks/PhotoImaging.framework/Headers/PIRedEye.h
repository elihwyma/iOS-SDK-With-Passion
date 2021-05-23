/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter

{
    CIImage *_inputImage;
    CIImage *_inputDestinationImage;
    NSArray *_inputCorrectionInfo;
    NSString *_inputCameraModel;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDestinationImage;
@property (retain, nonatomic) NSArray *inputCorrectionInfo;
@property (retain, nonatomic) NSString *inputCameraModel;

- (id)outputImage;

@end
