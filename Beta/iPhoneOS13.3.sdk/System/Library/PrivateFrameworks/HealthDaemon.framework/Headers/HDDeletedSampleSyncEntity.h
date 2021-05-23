/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@class NSString;

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)arg1;
+ (_Bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;

@end
