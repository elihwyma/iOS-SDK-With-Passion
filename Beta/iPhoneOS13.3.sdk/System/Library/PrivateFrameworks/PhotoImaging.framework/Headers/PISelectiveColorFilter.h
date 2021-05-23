/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter

{
    CIImage *_inputImage;
    NSArray *_inputCorrections;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSArray *inputCorrections;

+ (id)convertFromIPT:(id)arg1;
+ (id)selectiveColorKernels;
+ (id)convertToIPT:(id)arg1;
+ (double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (void)iptFromLinearInto:(float *)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4;
+ (float)hueAngleFrom:(const float *)arg1;

- (id)outputImage;
- (id)hueSatLumTable;

@end
