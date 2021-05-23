/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSDictionary, NSSet;

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration

{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    NSDictionary *_filtersBySampleType;
    NSSet *_eventTypesToCollect;
}

@property (copy, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, readonly) NSSet *sampleTypesToCollect;
@property (copy, readonly) NSDictionary *filtersBySampleType;
@property (copy, readonly) NSSet *eventTypesToCollect;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4;

@end
