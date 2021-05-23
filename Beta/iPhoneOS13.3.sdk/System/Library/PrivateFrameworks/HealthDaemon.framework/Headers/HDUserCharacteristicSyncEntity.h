/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@class NSString;

@interface HDUserCharacteristicSyncEntity : HDKeyValueSyncEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)category;
+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2;

@end
