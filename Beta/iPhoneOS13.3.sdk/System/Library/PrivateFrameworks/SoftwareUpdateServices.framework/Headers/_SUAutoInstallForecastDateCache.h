/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, SUAutoInstallForecast;

@interface _SUAutoInstallForecastDateCache : NSObject

{
    long long _scheduleType;
    SUAutoInstallForecast *_weak_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    _Bool _parsed;
}

@property (nonatomic, readonly) long long scheduleType;
@property (nonatomic, readonly) NSDate *roundedStartTime;
@property (nonatomic, readonly) NSDate *roundedEndTime;
@property (nonatomic, readonly) NSCalendar *calendar;

- (void)dealloc;
- (id)description;
- (void)_parseForecast;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (id)initWithForecast:(id)arg1;

@end
