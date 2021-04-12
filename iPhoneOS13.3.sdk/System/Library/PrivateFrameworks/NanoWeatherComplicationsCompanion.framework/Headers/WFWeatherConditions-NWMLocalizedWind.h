//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSDate, NSString, UIColor;

@interface WFWeatherConditions (NWMLocalizedWind)
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;
+ (id)_localizedWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)_defaultWindSpeedWithUnit:(double)arg1;
+ (id)nwm_localizedWindpeedUnit;
+ (id)_nwc_prefixForFamily:(long long)arg1;
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;
+ (id)_nwm_shortSuffixedKey:(id)arg1;
+ (id)nwm_localizedNoDataRounded;
+ (id)nwm_localizedNoData;
+ (id)nwm_localizedDescriptionShortForConditionCode:(NSUInteger)arg1 timeOfDay:(NSUInteger)arg2;
+ (id)nwm_localizedDescriptionKeyForConditionCode:(NSUInteger)arg1 timeOfDay:(NSUInteger)arg2;
+ (id)nwm_localizedDescriptionForConditionCode:(NSUInteger)arg1 timeOfDay:(NSUInteger)arg2;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;
- (id)_localizedWindDirectionAbbreviation:(BOOL)arg1;
- (NSUInteger)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;
- (id)nwm_windDirectionKey;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithoutUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirection;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviation;
- (NSUInteger)_nwc_code;
- (id)nwc_nighttimeConditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_daytimeConditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_conditionImageProviderForComplicationFamily:(long long)arg1;
- (id)nwc_conditionImageForComplicationFamily:(long long)arg1;
- (NSUInteger)nw_timeOfDay;
@property(readonly, nonatomic) NSString *nwm_localizedDescriptionShort;
@property(readonly, nonatomic) NSString *nwm_localizedDescriptionKey;
@property(readonly, nonatomic) NSString *nwm_localizedDescription;
@property(readonly, nonatomic) NSString *nwc_ultravioletIndexRiskDescription;
@property(readonly, nonatomic) UIColor *nwc_ultravioletIndexCategoryColor;
@property(readonly, nonatomic) NSUInteger nwc_ultravioletIndexCategory;
@property(readonly, nonatomic) NSDate *nwc_expirationDate;
@property(readonly, nonatomic) NSDate *nwc_date;
@property(readonly, nonatomic) NSUInteger nwm_ultravioletIndexCategory;
@property(readonly, nonatomic) NSString *nwm_localizedUltravioletIndexRiskDescription;
@end

