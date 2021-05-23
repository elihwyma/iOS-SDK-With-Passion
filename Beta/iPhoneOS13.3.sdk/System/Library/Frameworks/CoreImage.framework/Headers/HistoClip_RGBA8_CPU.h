/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface HistoClip_RGBA8_CPU : CIFilter

{
    CIImage *inputImage;
    CIImage *inputCenterLeft;
    CIImage *inputCenterRight;
    CIVector *inputCenterExtentLeft;
    CIVector *inputCenterExtentRight;
    NSNumber *inputPercentileRepair;
    NSNumber *inputPercentileSpecular;
    NSNumber *inputPercentRepair;
    NSNumber *inputPercentSpecular;
    NSNumber *inputInterPeakMinRepair;
    NSNumber *inputAbortMaxCenterDist;
    NSNumber *inputMinDensity;
    NSNumber *inputMaxRelDensity;
    NSNumber *inputDensityRadius;
    NSNumber *inputMinInterDispersion;
    NSNumber *inputMaxInterDispersion;
    NSNumber *inputMinGobalLocalMeanDiff;
    CIVector *inputMinimum;
    CIVector *inputMaxArea;
    CIVector *inputMaxAreaRatio;
    CIVector *inputCenterOffsetLeft;
    CIVector *inputCenterOffsetRight;
    CIImage *inputDetectionLeft;
    CIImage *inputDetectionRight;
    NSNumber *inputTuning;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputCenterLeft;
@property (retain, nonatomic) CIImage *inputCenterRight;
@property (retain, nonatomic) CIVector *inputCenterExtentLeft;
@property (retain, nonatomic) CIVector *inputCenterExtentRight;
@property (retain, nonatomic) NSNumber *inputPercentileRepair;
@property (retain, nonatomic) NSNumber *inputPercentileSpecular;
@property (retain, nonatomic) NSNumber *inputPercentRepair;
@property (retain, nonatomic) NSNumber *inputPercentSpecular;
@property (retain, nonatomic) NSNumber *inputInterPeakMinRepair;
@property (retain, nonatomic) NSNumber *inputAbortMaxCenterDist;
@property (retain, nonatomic) NSNumber *inputMinDensity;
@property (retain, nonatomic) NSNumber *inputMaxRelDensity;
@property (retain, nonatomic) NSNumber *inputDensityRadius;
@property (retain, nonatomic) NSNumber *inputMinInterDispersion;
@property (retain, nonatomic) NSNumber *inputMaxInterDispersion;
@property (retain, nonatomic) NSNumber *inputMinGobalLocalMeanDiff;
@property (retain, nonatomic) CIVector *inputMinimum;
@property (retain, nonatomic) CIVector *inputMaxArea;
@property (retain, nonatomic) CIVector *inputMaxAreaRatio;
@property (retain, nonatomic) CIVector *inputCenterOffsetLeft;
@property (retain, nonatomic) CIVector *inputCenterOffsetRight;
@property (retain, nonatomic) CIImage *inputDetectionLeft;
@property (retain, nonatomic) CIImage *inputDetectionRight;
@property (retain, nonatomic) NSNumber *inputTuning;

- (id)outputImage;

@end
