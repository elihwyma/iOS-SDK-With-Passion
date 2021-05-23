/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedPupilLocalizer : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIterations;
    NSNumber *inputScale;
    NSNumber *inputDecay;
    NSNumber *inputGamma;
    NSNumber *inputClip;
    NSNumber *inputLocalizationRadius;
    CIVector *inputExtent;
    NSNumber *inputDebug;
    CIVector *inputAxisLong;
    CIVector *inputAxisShort;
    CIVector *inputPupilCenter;
    NSNumber *inputSearchAxisLong;
    NSNumber *inputSearchAxisShort;
}

@property (retain, nonatomic) NSNumber *inputIterations;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputDecay;
@property (retain, nonatomic) NSNumber *inputGamma;
@property (retain, nonatomic) NSNumber *inputClip;
@property (retain, nonatomic) NSNumber *inputLocalizationRadius;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputDebug;
@property (retain, nonatomic) CIVector *inputAxisLong;
@property (retain, nonatomic) CIVector *inputAxisShort;
@property (retain, nonatomic) CIVector *inputPupilCenter;
@property (retain, nonatomic) NSNumber *inputSearchAxisLong;
@property (retain, nonatomic) NSNumber *inputSearchAxisShort;

- (id)outputImage;

@end
