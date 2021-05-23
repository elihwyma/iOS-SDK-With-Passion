/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@class HKDevice, HKQuantity, HKSource, HKWorkout, HKWorkoutConfiguration, NSArray, NSDateInterval, NSDictionary, NSString, NSUUID;

@interface HDCreateWorkoutOperation : HDJournalableOperation

{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_identifier;
    NSDateInterval *_dateInterval;
    NSDictionary *_metadata;
    HKDevice *_device;
    HKSource *_source;
    NSString *_sourceVersion;
    NSArray *_events;
    NSDictionary *_statisticsCalculators;
    NSArray *_associatedSeries;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSArray *_quantityTypesIncludedWhilePaused;
    HKWorkout *_createdWorkout;
}

@property (copy, nonatomic, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) HKDevice *device;
@property (copy, nonatomic, readonly) HKSource *source;
@property (copy, nonatomic, readonly) NSString *sourceVersion;
@property (copy, nonatomic, readonly) NSArray *events;
@property (copy, nonatomic, readonly) NSDictionary *statisticsCalculators;
@property (copy, nonatomic, readonly) NSArray *associatedSeries;
@property (nonatomic, readonly) unsigned long long goalType;
@property (copy, nonatomic, readonly) HKQuantity *goal;
@property (copy, nonatomic, readonly) NSArray *quantityTypesIncludedWhilePaused;
@property (nonatomic, readonly) HKWorkout *createdWorkout;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithWorkoutConfiguration:(id)arg1 identifier:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 device:(id)arg5 source:(id)arg6 sourceVersion:(id)arg7 events:(id)arg8 statisticsCalculators:(id)arg9 associatedSeries:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 quantityTypesIncludedWhilePaused:(id)arg13;

@end
