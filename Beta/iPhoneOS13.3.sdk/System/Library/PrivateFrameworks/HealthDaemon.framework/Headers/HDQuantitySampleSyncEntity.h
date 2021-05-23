/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDQuantitySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)arg1;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (Class)_syncedSampleTypeClass;

@end
