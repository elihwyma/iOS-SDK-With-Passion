/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <CoreImage/CIFilter.h>

@class NSArray, NSNumber;

@interface NUBrushMaskGenerator : CIFilter

{
    NSNumber *_inputRadius;
    NSNumber *_inputSoftness;
    NSNumber *_inputOpacity;
    NSArray *_inputPoints;
    NSNumber *_inputTiled;
    NSNumber *_inputClosed;
    NSNumber *_inputPressureMode;
}

@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSoftness;
@property (retain, nonatomic) NSNumber *inputOpacity;
@property (retain, nonatomic) NSArray *inputPoints;
@property (retain, nonatomic) NSNumber *inputTiled;
@property (retain, nonatomic) NSNumber *inputClosed;
@property (retain, nonatomic) NSNumber *inputPressureMode;

- (id)outputImage;
- (void)setDefaults;
- (id)_applyOpacity:(double)arg1 toMask:(id)arg2;

@end
