/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSAutoupdatingCurrentCalendar : NSObject

+ (void)initialize;
+ (id)calendar;
+ (id)timezone;
+ (_Bool)isWeekendDate:(id)arg1;
+ (_Bool)dateIntervalIntersectsWeekend:(id)arg1;
+ (_Bool)closestWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 afterDate:(id)arg3;
+ (_Bool)rangeOfWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;
+ (_Bool)nextWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;

@end
