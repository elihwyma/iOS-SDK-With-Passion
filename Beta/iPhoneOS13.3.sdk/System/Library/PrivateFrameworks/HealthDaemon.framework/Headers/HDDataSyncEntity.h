/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDDataSyncEntity : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncEntityIdentifier;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)arg1;
+ (_Bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)objectsFromCodableObjectsInCollection:(id)arg1;
+ (id)_provenanceFromCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)_objectWithCodable:(id)arg1;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;

@end
