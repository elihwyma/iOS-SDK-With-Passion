/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <WeatherFoundation/WFAirQualityConditions.h>

@class NSString, UIColor;

@interface WFAirQualityConditions (NWMColor)

@property (nonatomic, readonly) UIColor *nwm_color;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionLong;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionShort;

+ (id)nwm_allIndicesOfAirQualityScaleForLocation:(id)arg1;
+ (unsigned long long)nwm_maxIndexAirQualityScaleForLocation:(id)arg1;
+ (id)nwm_shortDescriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2;
+ (id)_nwm_descriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2 withExtension:(id)arg3;
+ (id)_nwm_v2AirQualityConditionsDescriptionKeyForCategory:(unsigned long long)arg1 atLocation:(id)arg2;
+ (id)nwm_longDescriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2;
+ (id)nwm_titleForAirQualityConditions:(id)arg1 atLocation:(id)arg2;

@end
