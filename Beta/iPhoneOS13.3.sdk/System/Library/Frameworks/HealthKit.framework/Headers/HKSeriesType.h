/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSampleType.h>

@interface HKSeriesType : HKSampleType

+ (id)workoutRouteType;
+ (id)heartbeatSeriesType;
+ (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;

- (Class)dataObjectClass;

@end
