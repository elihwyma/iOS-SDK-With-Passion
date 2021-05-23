/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@interface CUIKApplicationIconUtilities : NSObject

+ (long long)iconDateNameFormatTypeForDateBasedOnDistanceFromNow:(id)arg1 calendar:(id)arg2;
+ (id)dateFormatterWithCalendar:(id)arg1;
+ (_Bool)_isWithinPreviousWeek:(id)arg1 calendar:(id)arg2;
+ (_Bool)_isWithinNextWeek:(id)arg1 calendar:(id)arg2;
+ (_Bool)_isDate:(id)arg1 withinPreviousWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (_Bool)_isDate:(id)arg1 withinNextWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (long long)dateNameFormatType:(int)arg1;

@end
