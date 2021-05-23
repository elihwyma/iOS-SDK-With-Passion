/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (Schedule)

+ (id)dnds_dateIntervalForScheduleSettings:(id)arg1 date:(id)arg2 calendar:(id)arg3;
+ (id)dnds_dateIntervalUntilEndOfScheduleForScheduleSettings:(id)arg1 startDate:(id)arg2 calendar:(id)arg3;

- (unsigned long long)dnds_lifetimePhaseForDate:(id)arg1;

@end
