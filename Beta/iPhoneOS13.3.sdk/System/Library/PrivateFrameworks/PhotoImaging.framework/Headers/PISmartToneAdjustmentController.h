/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartToneAdjustmentController : PIAdjustmentController

{
    struct {
        double exposure;
        double contrast;
        double brightness;
        double shadows;
        double highlights;
        double black;
        double rawHighlights;
        double localLight;
    } _smartSettings;
}

@property (nonatomic) double inputLight;
@property (nonatomic) double offsetBlack;
@property (nonatomic) double offsetBrightness;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetExposure;
@property (nonatomic) double offsetHighlights;
@property (nonatomic) double offsetLocalLight;
@property (nonatomic) double offsetShadows;
@property (copy, nonatomic) NSDictionary *statistics;
@property (nonatomic) long long sourceSelection;
@property (copy, nonatomic) NSDictionary *overcaptureStatistics;

+ (id)offsetContrastKey;
+ (id)attributeContrastKey;
+ (id)offsetLocalLightKey;
+ (id)attributeLocalLightKey;
+ (id)offsetBlackKey;
+ (id)attributeBlackPointKey;
+ (id)offsetShadowsKey;
+ (id)attributeShadowsKey;
+ (id)offsetHighlightsKey;
+ (id)attributeHighlightsKey;
+ (id)offsetExposureKey;
+ (id)attributeExposureKey;
+ (id)offsetBrightnessKey;
+ (id)attributeBrightnessKey;
+ (id)inputLightKey;
+ (id)sourceSelectionKey;
+ (id)overcaptureStatisticsKey;
+ (id)statisticsKey;
+ (id)inputRawHighlightsKey;
+ (id)inputLocalLightKey;
+ (id)inputBlackKey;
+ (id)inputHighlightsKey;
+ (id)inputShadowsKey;
+ (id)inputContrastKey;
+ (id)inputBrightnessKey;
+ (id)inputExposureKey;
+ (id)attributeLightMapKey;
+ (id)attributeLightMapWidthKey;
+ (id)attributeLightMapHeightKey;

- (double)inputBrightness;
- (void)setInputBrightness:(double)arg1;
- (double)inputContrast;
- (void)setInputContrast:(double)arg1;
- (double)inputLocalLight;
- (double)inputExposure;
- (void)setInputExposure:(double)arg1;
- (double)inputShadows;
- (void)setInputShadows:(double)arg1;
- (double)inputHighlights;
- (void)setInputHighlights:(double)arg1;
- (double)inputBlack;
- (void)setInputBlack:(double)arg1;
- (double)inputRawHighlights;
- (void)setInputRawHighlights:(double)arg1;
- (void)setInputLocalLight:(double)arg1;
- (id)initWithAdjustment:(id)arg1;
- (void)_updateSettingsWithInputLight:(double)arg1;
- (id)computedSettings;

@end
