/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@class NSString;

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)_objectWithCodable:(id)arg1;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (Class)_syncedSampleTypeClass;

@end
