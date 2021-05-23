/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface PLFileStats : NSObject

+ (id)logStartDate;
+ (id)logEndDate;
+ (long long)fileSizeAtPath:(id)arg1;
+ (id)tableCounts;
+ (id)select:(id)arg1 from:(id)arg2 where:(id)arg3;
+ (double)totalLogDuration;
+ (id)cpuTimeForProcess:(id)arg1;
+ (id)logStartDateFromTable:(id)arg1;
+ (id)logEndDateFromTable:(id)arg1;
+ (id)statsForFile:(id)arg1;
+ (double)totalLogDurationFromTable:(id)arg1 where:(id)arg2;

@end
