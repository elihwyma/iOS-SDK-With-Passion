/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject

{
    float _percentPrecipitation;
    unsigned long long _eventType;
    NSString *_time;
    long long _hourIndex;
    WFTemperature *_temperature;
    NSString *_forecastDetail;
    long long _conditionCode;
}

@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *time;
@property (nonatomic) long long hourIndex;
@property (retain, nonatomic) WFTemperature *temperature;
@property (copy, nonatomic) NSString *forecastDetail;
@property (nonatomic) long long conditionCode;
@property (nonatomic) float percentPrecipitation;

+ (long long)TimeValueFromString:(id)arg1;
+ (id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
