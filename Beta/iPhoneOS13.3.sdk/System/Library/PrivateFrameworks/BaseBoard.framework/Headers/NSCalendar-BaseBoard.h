/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (BaseBoard)

- (unsigned long long)bs_dayPeriodForDate:(id)arg1 inLocale:(id)arg2;
- (id)_dateOnlyComponentsForDate:(id)arg1;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (_Bool)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (_Bool)date:(id)arg1 isSameYearAsDate:(id)arg2;

@end
