/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV3 : NSObject

{
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (void)_parseCommonComponents:(id)arg1 intoConditions:(id)arg2;
- (id)_parseForecastedConditions:(id)arg1 individualForecastProcessingBlock:(CDUnknownBlockType)arg2 uniqueParsingBlock:(CDUnknownBlockType)arg3;
- (id)_parseCurrentConditions:(id)arg1;
- (void)_parseWebLinks:(id)arg1 intoWeatherConditions:(id)arg2;
- (id)_parseLastTwentyFourHoursOfObservations:(id)arg1;
- (id)_parseHourlyForecastedConditions:(id)arg1;
- (id)_parseDailyForecastedConditions:(id)arg1;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
- (id)_parseDailyPollenForecastedConditions:(id)arg1;
- (id)_parsePollutants:(id)arg1;

@end
