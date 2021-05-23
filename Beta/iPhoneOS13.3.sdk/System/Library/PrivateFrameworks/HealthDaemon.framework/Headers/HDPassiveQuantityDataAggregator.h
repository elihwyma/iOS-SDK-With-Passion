/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDPassiveDataAggregator.h>

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

{
    HKQuantityType *_quantityType;
}

@property (copy, nonatomic, readonly) HKQuantityType *quantityType;

- (id)objectType;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;

@end
