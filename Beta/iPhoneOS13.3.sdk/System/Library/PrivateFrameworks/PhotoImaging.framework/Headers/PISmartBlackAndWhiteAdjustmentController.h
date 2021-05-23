/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (nonatomic) double strength;
@property (nonatomic) double neutral;
@property (nonatomic) double tone;
@property (nonatomic) double grain;
@property (nonatomic) double hue;

+ (id)grainKey;
+ (id)attributeGrainKey;
+ (id)hueKey;
+ (id)attributeHueKey;
+ (id)toneKey;
+ (id)attributeToneKey;
+ (id)neutralKey;
+ (id)attributeNeutralGammaKey;
+ (id)strengthKey;
+ (id)attributeStrengthKey;
+ (id)inputStrengthKey;
+ (id)inputNeutralGammaKey;
+ (id)inputToneKey;
+ (id)inputGrainKey;
+ (id)inputHueKey;
+ (id)inputSeedKey;

@end
