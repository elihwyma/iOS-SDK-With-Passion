/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFHourlyForecastRequest : WFAggregateForecastRequest

{
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

- (id)description;
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithService:(id)arg1;

@end
