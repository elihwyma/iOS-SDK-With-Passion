/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)arg1;

@end
