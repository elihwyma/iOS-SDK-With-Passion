/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <WeatherFoundation/WFTemperature.h>

@interface WFTemperature (NWMComparison)

- (long long)nwm_compare:(id)arg1;
- (double)nwm_percentageBetweenLow:(id)arg1 high:(id)arg2;
- (long long)nwk_compare:(id)arg1;
- (double)nwk_percentageBetweenLow:(id)arg1 high:(id)arg2;

@end
