/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSCalendar, NSString;

@interface WFWeatherDataServiceParserV1 : NSObject

{
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)parseAlmanacFromData:(id)arg1;
- (id)dailyAlmanacDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parsePollenFromData:(id)arg1;
- (id)pollenDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (id)parseMetaDataFromData:(id)arg1;
- (id)parseWeatherComponentsFromData:(id)arg1;
- (id)parseHourlyForecastFromData:(id)arg1;
- (id)hourlyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseHourlyHistoryFromData:(id)arg1;
- (id)hourlyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseForecastDataFromDict:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)currentObservationsDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseCurrentObservationsFromData:(id)arg1;
- (id)dailyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseDailyHistoryFromData:(id)arg1;
- (id)dailyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseDailyForecastFromData:(id)arg1;
- (id)airQualityDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (id)parseAirQualityFromData:(id)arg1 locale:(id)arg2;
- (id)nowLinksDictFromData:(id)arg1 types:(unsigned long long)arg2;
- (void)parseNowLinksFromData:(id)arg1 intoConditions:(id)arg2;
- (void)parseWeatherComponentsFromData:(id)arg1 intoConditions:(id)arg2;
- (id)parsePollutants:(id)arg1;

@end
