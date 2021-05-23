/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class WFTemperature;

@interface WADayForecast : NSObject

{
    _Bool _isYesterday;
    WFTemperature *_high;
    WFTemperature *_low;
    unsigned long long _icon;
    unsigned long long _dayOfWeek;
    unsigned long long _dayNumber;
}

@property (copy, nonatomic) WFTemperature *high;
@property (copy, nonatomic) WFTemperature *low;
@property (nonatomic) unsigned long long icon;
@property (nonatomic) unsigned long long dayOfWeek;
@property (nonatomic) unsigned long long dayNumber;
@property (nonatomic) _Bool isYesterday;

+ (id)dayForecastForLocation:(id)arg1 conditions:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareDayNumberToDayForecast:(id)arg1;

@end
