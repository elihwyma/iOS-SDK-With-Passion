/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity

+ (int)nanoSyncObjectType;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_predicateForDateIntervalInSyncSession:(id)arg1;
+ (Class)_syncedSampleTypeClass;
+ (id)_predicateForSampleAgeInSyncSession:(id)arg1 sampleTypeClass:(Class)arg2;

@end
