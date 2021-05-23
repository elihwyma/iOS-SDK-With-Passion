/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class HKQuantity, NSArray;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum

{
    NSArray *_associatedSampleUUIDs;
    HKQuantity *_heartRateThreshold;
}

@property (nonatomic, readonly) NSArray *associatedSampleUUIDs;
@property (nonatomic, readonly) HKQuantity *heartRateThreshold;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;

@end
