/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter

{
    CIImage *_inputImage;
    double _temperature;
    double _tint;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;

- (id)outputImage;
- (void)setInputVectorsForFilter:(id)arg1;

@end
