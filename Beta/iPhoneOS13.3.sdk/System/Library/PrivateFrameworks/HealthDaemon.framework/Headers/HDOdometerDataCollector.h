/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector

{
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (_Bool)canResumeCollectionFromLastSensorDatum;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1 collectedDistanceType:(id)arg2;

@end
