/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSDateInterval, NSDictionary, NSError, NSUUID;

@protocol HKPersistableWorkoutEvent

@property (copy, nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) long long workoutEventType;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSDictionary *metadata;

- (unsigned short)initWithWorkoutEventType:sessionUUID:dateInterval:metadata:error: /* Error: Ran out of types for this method. */;

@end
