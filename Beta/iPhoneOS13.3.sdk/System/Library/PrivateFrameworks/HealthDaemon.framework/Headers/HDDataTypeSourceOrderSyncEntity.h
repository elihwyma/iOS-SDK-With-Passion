/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDDataTypeSourceOrderSyncEntity : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sourceOrderSyncPredicateForSession:(id)arg1;

@end
