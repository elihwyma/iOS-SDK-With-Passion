/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableDateComponents : PBCodable <Swift>

{
    long long _day;
    long long _era;
    long long _hour;
    long long _minute;
    long long _month;
    long long _nanosecond;
    long long _quarter;
    long long _second;
    long long _weekOfMonth;
    long long _weekOfYear;
    long long _weekday;
    long long _weekdayOrdinal;
    long long _year;
    long long _yearForWeekOfYear;
    NSString *_calendar;
    NSString *_timeZone;
    struct {
        unsigned int day:1;
        unsigned int era:1;
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int month:1;
        unsigned int nanosecond:1;
        unsigned int quarter:1;
        unsigned int second:1;
        unsigned int weekOfMonth:1;
        unsigned int weekOfYear:1;
        unsigned int weekday:1;
        unsigned int weekdayOrdinal:1;
        unsigned int year:1;
        unsigned int yearForWeekOfYear:1;
    } _has;
}

@property (nonatomic) _Bool hasEra;
@property (nonatomic) long long era;
@property (nonatomic) _Bool hasYear;
@property (nonatomic) long long year;
@property (nonatomic) _Bool hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) _Bool hasDay;
@property (nonatomic) long long day;
@property (nonatomic) _Bool hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) _Bool hasMinute;
@property (nonatomic) long long minute;
@property (nonatomic) _Bool hasSecond;
@property (nonatomic) long long second;
@property (nonatomic) _Bool hasWeekday;
@property (nonatomic) long long weekday;
@property (nonatomic) _Bool hasWeekdayOrdinal;
@property (nonatomic) long long weekdayOrdinal;
@property (nonatomic) _Bool hasQuarter;
@property (nonatomic) long long quarter;
@property (nonatomic) _Bool hasWeekOfMonth;
@property (nonatomic) long long weekOfMonth;
@property (nonatomic) _Bool hasWeekOfYear;
@property (nonatomic) long long weekOfYear;
@property (nonatomic) _Bool hasYearForWeekOfYear;
@property (nonatomic) long long yearForWeekOfYear;
@property (nonatomic) _Bool hasNanosecond;
@property (nonatomic) long long nanosecond;
@property (nonatomic, readonly) _Bool hasCalendar;
@property (retain, nonatomic) NSString *calendar;
@property (nonatomic, readonly) _Bool hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
