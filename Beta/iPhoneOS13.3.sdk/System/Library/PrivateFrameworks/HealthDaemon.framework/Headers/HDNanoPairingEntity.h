/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@class NSString, NSUUID;

@interface HDNanoPairingEntity : HDHealthEntity

{
    _Bool _restoreComplete;
    NSUUID *_nanoRegistryUUID;
    NSUUID *_persistentUUID;
    NSUUID *_healthDatabaseUUID;
    NSString *_defaultSourceBundleIdentifier;
    NSString *_deviceIdentifier;
    long long _syncProvenance;
    HDNanoPairingEntity *_entity;
}

@property (retain, nonatomic) HDNanoPairingEntity *entity;
@property (copy, nonatomic) NSUUID *nanoRegistryUUID;
@property (nonatomic) long long syncProvenance;
@property (copy, nonatomic) NSUUID *persistentUUID;
@property (copy, nonatomic) NSUUID *healthDatabaseUUID;
@property (copy, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic, getter=isRestoreComplete) _Bool restoreComplete;

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)sourceEntityForRegistryUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_predicateWithRegistryUUID:(id)arg1;
+ (id)_nanoPairingEntitiesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;

- (id)description;
- (id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthDatabaseUUID:(id)arg3 sourceBundleIdentifier:(id)arg4 deviceIdentifier:(id)arg5 syncStoreEntity:(id)arg6 restoreComplete:(_Bool)arg7 database:(id)arg8 error:(id *)arg9;
- (_Bool)saveWithHealthDatabase:(id)arg1 error:(id *)arg2;

@end
