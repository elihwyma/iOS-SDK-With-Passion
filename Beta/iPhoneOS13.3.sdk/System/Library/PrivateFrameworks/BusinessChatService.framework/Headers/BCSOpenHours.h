/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject

{
    NSDictionary *_timeRanges;
    NSTimeZone *_localTimeZone;
}

@property (nonatomic, readonly) NSDictionary *timeRanges;
@property (nonatomic, readonly) NSTimeZone *localTimeZone;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2;
- (_Bool)isOpenAtDate:(id)arg1 timeZone:(id)arg2;
- (long long)_weekdayOrdinalFromDate:(id)arg1 timeZone:(id)arg2;
- (_Bool)_validTimeRange:(id)arg1;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 timeZone:(id)arg2;
- (id)_dateWhenOpenNextAfterDate:(id)arg1 timeZone:(id)arg2;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1 timeZone:(id)arg2;
- (id)_weekdayStringFromWeekdayIndex:(int)arg1;
- (_Bool)isOpenAtDate:(id)arg1;
- (id)dateWhenOpenNextAfterDate:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1;
- (long long)_weekdayIndexFromWeekdayString:(id)arg1;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1;
- (void)_printOpenHoursForTheWeek;
- (id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2;
- (id)initWithOpenHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithJSONObj:(id)arg1 timeZone:(id)arg2;

@end
