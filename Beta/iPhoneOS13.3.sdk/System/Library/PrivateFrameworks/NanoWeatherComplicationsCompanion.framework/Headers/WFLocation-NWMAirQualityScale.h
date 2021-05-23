/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <WeatherFoundation/WFLocation.h>

@interface WFLocation (NWMAirQualityScale)

@property (nonatomic, readonly) _Bool nwm_isAQICountry;
@property (nonatomic, readonly) _Bool nwm_isDAQICountry;
@property (nonatomic, readonly) _Bool nwm_isUBACountry;

+ (id)nwm_attributedDisplayNameWithLocationGlyph:(id)arg1 inFont:(id)arg2;

@end
