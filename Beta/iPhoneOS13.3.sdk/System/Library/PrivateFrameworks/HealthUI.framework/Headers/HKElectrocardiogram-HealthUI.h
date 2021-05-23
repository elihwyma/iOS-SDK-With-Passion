/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKElectrocardiogram.h>

@class NSString, UIColor;

@interface HKElectrocardiogram (HealthUI)

@property (nonatomic, readonly) _Bool hk_isClassificationSupported;
@property (nonatomic, readonly) _Bool hk_isPossibleAtrialFibrillation;
@property (nonatomic, readonly) _Bool hk_hasPositiveSymptoms;
@property (nonatomic, readonly) _Bool hk_isSymptomsNotSet;
@property (nonatomic, readonly) _Bool hk_isSymptomsNoSymptoms;
@property (nonatomic, readonly) UIColor *hk_cardHeaderColor;
@property (nonatomic, readonly) UIColor *hk_cardBackgroundColor;
@property (nonatomic, readonly) UIColor *hk_classificationTextColor;
@property (nonatomic, readonly) UIColor *hk_timeStampTextColor;
@property (nonatomic, readonly) NSString *hk_timeStampCompositingFilter;
@property (nonatomic, readonly) UIColor *hk_BPMTextColor;
@property (nonatomic, readonly) _Bool hk_isBPMTextBold;
@property (nonatomic, readonly) UIColor *hk_numSymptomsTextColor;
@property (nonatomic, readonly) NSString *hk_localizedAverageBPM;
@property (nonatomic, readonly) NSString *hk_localizedDuration;
@property (nonatomic, readonly) NSString *hk_localizedNumSymptoms;
@property (nonatomic, readonly) NSString *hk_localizedUppercaseNumSymptoms;

+ (id)hk_defaultCardHeaderColor;
+ (id)hk_defaultClassificationTextColor;
+ (id)hk_defaultTimeStampTextColor;
+ (id)hk_defaultTimeStampCompositingFilter;
+ (id)hk_defaultBPMTextColor;
+ (id)hk_defaultNumSymptomsTextColor;
+ (id)hk_abnormalCardHeaderColor;
+ (id)hk_defaultCardBackgroundColor;
+ (id)hk_abnormalClassificationTextColor;
+ (id)hk_abnormalTimeStampTextColor;
+ (id)hk_abnormalTimeStampCompositingFilter;
+ (id)hk_abnormalBPMTextColor;
+ (id)hk_positiveNumSymptomsTextColor;
+ (id)hk_onboardingCardHeaderColor;
+ (id)hk_onboardingCardBackgroundColor;

- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 minimumValueInMillivolts:(float)arg3 maximumValueInMillivolts:(float)arg4;
- (id)hk_waveformPathsWithNumberOfValues:(long long)arg1 fitToWidth:(double)arg2 pointsPerMillivolt:(double)arg3 minimumValueInMillivolts:(float)arg4 maximumValueInMillivolts:(float)arg5;
- (id)_hk_waveformPathsWithNumberOfValues:(long long)arg1 transform:(struct CGAffineTransform)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(_Bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)_hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(_Bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4 minimumValueInMillivolts:(float)arg5 maximumValueInMillivolts:(float)arg6;
- (_Bool)_hk_classificationHasAbnormalHeaderColorAndStyle;
- (_Bool)_hk_classificationHasAbnormalBPMFontColorAndStyle;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4;

@end
