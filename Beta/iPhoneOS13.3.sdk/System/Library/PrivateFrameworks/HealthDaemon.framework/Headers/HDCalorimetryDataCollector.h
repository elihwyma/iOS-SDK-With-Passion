/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (_Bool)isNatalimeterAvailable;
+ (_Bool)supportsCollectionForProfile:(id)arg1;

- (id)persistentIdentifier;
- (id)initWithProfile:(id)arg1;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;

@end
