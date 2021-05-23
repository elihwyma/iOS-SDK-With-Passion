/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBilateralConvolution : CIFilter

{
    CIImage *_inputImage;
    NSArray *_inputPoints;
    NSArray *_inputWeights;
    NSNumber *_inputEdgeDetail;
    NSNumber *_inputVersion;
}

@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSArray *inputWeights;
@property (retain) NSNumber *inputEdgeDetail;
@property (retain) NSNumber *inputVersion;

+ (id)bilateralKernels;
+ (id)RGBToLabKernels;
+ (id)bilateralAdd1Kernel;
+ (id)bilateralAdd2Kernel;
+ (id)bilateralAdd3Kernel;
+ (id)bilateralAdd4Kernel;
+ (id)bilateralAdd5Kernel;
+ (id)bilateralAdd6Kernel;
+ (id)bilateralAdd7Kernel;
+ (id)bilateralAdd8Kernel;
+ (id)bilateralAdd9Kernel;
+ (id)bilateralFinalizeKernel;
+ (id)RGBToLabKernel;
+ (id)LabToRGBKernel;

- (id)outputImage;
- (unsigned long long)samplesPerPass;
- (struct CGRect)boundsForPointArray:(id)arg1;
- (struct CGRect)enlargedBounds:(struct CGRect)arg1 withPoints:(id)arg2;
- (struct CGRect)bilateralAddROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5;

@end
