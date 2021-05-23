/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (PLExtensions)

- (id)pl_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
- (id)pl_startOfNextDayForDate:(id)arg1;
- (id)pl_endOfPreviousDayForDate:(id)arg1;
- (id)pl_endOfDayForDate:(id)arg1;
- (id)pl_endOfWeekForDate:(id)arg1;
- (id)pl_startOfWeekForDate:(id)arg1;
- (id)pl_startOfMonthForDate:(id)arg1;

@end
