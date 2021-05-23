/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <Foundation/NSObject.h>

@class MTAlarm, NSArray, NSCalendar, NSDate, NSDateInterval;

@interface MTUIBedtimeGraphData : NSObject

{
    _Bool _useTrailingWeek;
    NSDateInterval *_firstSleepAlarmInterval;
    NSArray *_allColumnData;
    MTAlarm *_sleepAlarm;
    NSCalendar *_calendar;
}

@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *allColumnData;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) _Bool useTrailingWeek;
@property (nonatomic, readonly) NSDate *earliestStartOnFirstDay;
@property (nonatomic, readonly) NSDate *latestEndOnFirstDay;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) NSDateInterval *firstSleepAlarmInterval;

- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2;
- (id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 useTrailingWeek:(_Bool)arg3;
- (id)sleepAlarmIntervalForDay:(long long)arg1;
- (long long)_earliestDay;

@end
