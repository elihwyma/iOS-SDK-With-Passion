/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDNanoUserDefaultsSyncEntity.h>

@class NSString;

@interface HDProtectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)category;
+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (id)_didReceiveKeysAndValuesNotificationName;

@end
