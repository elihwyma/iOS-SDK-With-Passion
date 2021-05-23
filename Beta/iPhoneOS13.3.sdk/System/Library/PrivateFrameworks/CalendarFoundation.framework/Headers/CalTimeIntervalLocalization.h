/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalTimeIntervalLocalization : NSObject

+ (id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(_Bool)arg2;
+ (id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(_Bool)arg2;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 abbreviate:(_Bool)arg5;
+ (id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 dayDuration:(id *)arg5 hourDuration:(id *)arg6 minuteDuration:(id *)arg7 secondDuration:(id *)arg8 abbreviate:(_Bool)arg9;
+ (id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2;

@end
