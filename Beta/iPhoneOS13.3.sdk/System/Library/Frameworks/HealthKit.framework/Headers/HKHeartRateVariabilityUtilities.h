/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKHeartRateVariabilityUtilities : NSObject

+ (id)_hrvType;
+ (void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_sequenceType;
+ (void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1;

@end
