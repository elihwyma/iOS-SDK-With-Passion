/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)_syncedSampleTypeClass;

@end
