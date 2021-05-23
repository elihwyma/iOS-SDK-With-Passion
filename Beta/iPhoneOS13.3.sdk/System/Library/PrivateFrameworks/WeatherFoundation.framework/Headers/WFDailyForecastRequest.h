/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest

{
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithService:(id)arg1;

@end
