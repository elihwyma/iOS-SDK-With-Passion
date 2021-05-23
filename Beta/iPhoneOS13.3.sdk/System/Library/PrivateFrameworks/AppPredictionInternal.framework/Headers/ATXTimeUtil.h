/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXTimeUtil : NSObject

+ (id)todayWithTimeZone:(id)arg1;
+ (id)nextStartOfDayAfter:(id)arg1 timeZone:(id)arg2;
+ (id)yesterdayWithTimeZone:(id)arg1;
+ (id)getDayFromTime:(id)arg1 timeZone:(id)arg2;
+ (id)getTimeFromDate:(id)arg1;
+ (_Bool)time:(id)arg1 isBetweenStartTime:(id)arg2 andEndTime:(id)arg3;

@end
