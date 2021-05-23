/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKCodableQuantitySeriesDatum.h>

@interface HKCodableQuantitySeriesDatum (HDQuantitySampleEntity)

+ (id)datumWithTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3;
+ (id)datumWithValue:(double)arg1 timeInterval:(double)arg2;
+ (id)datumWithStartTime:(double)arg1 value:(double)arg2 endTime:(double)arg3;

@end
