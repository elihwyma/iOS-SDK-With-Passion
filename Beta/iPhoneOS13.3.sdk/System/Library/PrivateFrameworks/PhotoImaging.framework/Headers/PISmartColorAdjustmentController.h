/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartColorAdjustmentController : PIAdjustmentController

{
    struct {
        double p75;
        double p98;
        double autoValue;
        double g98;
    } _stats;
    CDStruct_7982ab34 _smartSettings;
}

@property (nonatomic) double inputColor;
@property (nonatomic) double offsetSaturation;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetCast;
@property (copy, nonatomic) NSDictionary *statistics;

+ (id)offsetCastKey;
+ (id)attributeCastKey;
+ (id)offsetSaturationKey;
+ (id)attributeVibrancyKey;
+ (id)offsetContrastKey;
+ (id)attributeContrastKey;
+ (id)inputColorKey;
+ (id)statisticsKey;
+ (id)inputContrastKey;
+ (id)inputCastKey;
+ (id)inputSaturationKey;

- (double)inputSaturation;
- (void)setInputSaturation:(double)arg1;
- (double)inputContrast;
- (void)setInputContrast:(double)arg1;
- (double)inputCast;
- (void)setInputCast:(double)arg1;
- (id)initWithAdjustment:(id)arg1;
- (id)computedSettings;
- (void)_updateSettingsWithInputColor:(double)arg1;

@end
