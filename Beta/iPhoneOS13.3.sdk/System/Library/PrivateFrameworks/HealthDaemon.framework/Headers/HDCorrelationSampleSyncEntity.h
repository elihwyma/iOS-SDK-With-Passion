/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDCorrelationSampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)_objectWithCodable:(id)arg1;

@end
