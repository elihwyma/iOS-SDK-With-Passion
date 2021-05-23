/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSDateComponents;

@interface _CDDateQuantizer : NSObject

{
    NSCalendar *_calendar;
    long long _dayStartHour;
    NSDate *_currentDay;
    NSDateComponents *_currentQuantizationOffsetComponents;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) long long dayStartHour;
@property (copy, nonatomic) NSDate *currentDay;
@property (copy, nonatomic) NSDateComponents *currentQuantizationOffsetComponents;

- (id)initWithCalendar:(id)arg1 dayStartHour:(long long)arg2;
- (id)quantizeDate:(id)arg1;

@end
