/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface HKUIMetricColors : NSObject

{
    UIColor *_keyColor;
    UIColor *_contextViewPrimaryTextColor;
    UIColor *_contextViewSecondaryTextColor;
    UIColor *_contextViewInfoButtonGlyphColor;
    UIColor *_contextViewInfoButtonBackgroundColor;
}

@property (retain, nonatomic) UIColor *keyColor;
@property (retain, nonatomic) UIColor *contextViewPrimaryTextColor;
@property (retain, nonatomic) UIColor *contextViewSecondaryTextColor;
@property (retain, nonatomic) UIColor *contextViewInfoButtonGlyphColor;
@property (retain, nonatomic) UIColor *contextViewInfoButtonBackgroundColor;

+ (id)medicationsClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)proceduresClinicalColors;
+ (id)immunizationsClinicalColors;
+ (id)allergiesClinicalColors;
+ (id)unknownCategoryClinicalColors;
+ (id)defaultContextViewColorsUsingColor:(id)arg1;
+ (id)sleepColors;
+ (id)workoutContextViewColors;
+ (id)metricColorsForHeartRateContext:(long long)arg1;
+ (id)vitalsColors;
+ (id)activityColors;
+ (id)bodyMeasurementColors;
+ (id)mindfulnessColors;
+ (id)reproductiveHealthColors;
+ (id)hearingHealthColors;
+ (id)respiratoryColors;
+ (id)otherColors;
+ (id)defaultClinicalColors;

@end
