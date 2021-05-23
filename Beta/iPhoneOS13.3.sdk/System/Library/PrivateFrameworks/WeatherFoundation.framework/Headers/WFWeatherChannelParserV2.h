/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSCalendar, NSString;

__attribute__((visibility("hidden")))
@interface WFWeatherChannelParserV2 : NSObject

{
    NSCalendar *_calendar;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
+ (id)componentsForCurrentForecast;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForDailyForecasts;

- (id)init;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (id)parseDailyForecasts:(id)arg1 date:(id)arg2;
- (id)parseHourlyForecasts:(id)arg1 date:(id)arg2;
- (id)parseCurrentCondition:(id)arg1 high:(id)arg2 low:(id)arg3;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (unsigned long long)_pressureTrendFromWeatherChannelCode:(id)arg1;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;

@end
