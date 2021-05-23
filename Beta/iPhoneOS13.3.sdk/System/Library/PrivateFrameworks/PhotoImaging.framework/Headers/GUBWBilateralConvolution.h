/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter

{
    CIImage *_inputImage;
    NSArray *_inputPoints;
    NSArray *_inputWeights;
    NSNumber *_inputEdgeDetail;
    NSNumber *_inputBorder;
}

@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSArray *inputWeights;
@property (retain) NSNumber *inputEdgeDetail;
@property (retain) NSNumber *inputBorder;

+ (id)BWBilateralKernels;
+ (id)bilateralLoop2Kernel;
+ (id)bilateralLoop5Kernel;
+ (id)bilateralLoop11Kernel;

- (id)outputImage;
- (struct CGRect)bilateralROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4;

@end
