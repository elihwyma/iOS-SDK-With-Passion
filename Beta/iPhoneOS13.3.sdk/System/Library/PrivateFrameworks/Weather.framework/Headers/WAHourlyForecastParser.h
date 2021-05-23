/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@interface WAHourlyForecastParser : NSObject

+ (id)parseForecasts:(id)arg1 temperature:(id)arg2 currentTime:(unsigned long long)arg3 condition:(long long)arg4 sunrise:(unsigned long long)arg5 sunset:(unsigned long long)arg6;
+ (void)addSunEventIntoForecasts:(id)arg1 eventType:(unsigned long long)arg2 forecastDetail:(id)arg3 eventTime:(unsigned long long)arg4 currentTime:(unsigned long long)arg5;
+ (id)parseForecasts:(id)arg1 temperature:(id)arg2 hour:(long long)arg3 condition:(long long)arg4 sunrise:(unsigned long long)arg5 sunset:(unsigned long long)arg6;

@end
