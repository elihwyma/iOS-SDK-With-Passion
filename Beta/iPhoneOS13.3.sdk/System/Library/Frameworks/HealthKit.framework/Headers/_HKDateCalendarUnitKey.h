/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface _HKDateCalendarUnitKey : NSObject <Swift>

{
    NSDate *_date;
    NSCalendar *_calendar;
    unsigned long long _calendarUnit;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) unsigned long long calendarUnit;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3;

@end
