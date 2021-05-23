/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSDate, NSString, UIColor;

@interface WFWeatherConditions (NWMLocalizedWind)

@property (nonatomic, readonly) NSString *nwm_localizedWindDirectionAbbreviation;
@property (nonatomic, readonly) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property (nonatomic, readonly) NSString *nwm_localizedWindDirection;
@property (nonatomic, readonly) NSString *nwm_localizedWindspeedWithUnit;
@property (nonatomic, readonly) NSString *nwm_localizedWindspeedWithoutUnit;
@property (nonatomic, readonly) NSString *nwm_localizedDescription;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionKey;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionShort;
@property (nonatomic, readonly) unsigned long long nwc_ultravioletIndexCategory;
@property (nonatomic, readonly) UIColor *nwc_ultravioletIndexCategoryColor;
@property (nonatomic, readonly) NSString *nwc_ultravioletIndexRiskDescription;
@property (nonatomic, readonly) NSDate *nwc_date;
@property (nonatomic, readonly) NSDate *nwc_expirationDate;
@property (nonatomic, readonly) NSString *nwm_localizedUltravioletIndexRiskDescription;
@property (nonatomic, readonly) unsigned long long nwm_ultravioletIndexCategory;

+ (id)nwm_localizedNoDataRounded;
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;
+ (id)nwm_localizedNoData;
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;
+ (id)_localizedWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)_defaultWindSpeedWithUnit:(double)arg1;
+ (id)nwm_localizedWindpeedUnit;
+ (id)_nwc_prefixForFamily:(long long)arg1;
+ (id)nwm_localizedDescriptionKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)_nwm_shortSuffixedKey:(id)arg1;
+ (id)nwm_localizedDescriptionForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionShortForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;

- (id)nwc_conditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_conditionImageProviderForComplicationFamily:(long long)arg1;
- (id)_localizedWindDirectionAbbreviation:(_Bool)arg1;
- (id)nwm_windDirectionKey;
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;
- (unsigned long long)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;
- (id)nwc_daytimeConditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_nighttimeConditionImageForComplicationFamily:(long long)arg1;
- (unsigned long long)_nwc_code;
- (unsigned long long)nw_timeOfDay;

@end
