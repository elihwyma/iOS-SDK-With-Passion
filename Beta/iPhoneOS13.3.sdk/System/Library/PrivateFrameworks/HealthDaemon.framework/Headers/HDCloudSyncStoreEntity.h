/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDCloudSyncStoreEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)persistedMostRecentLastSyncDateForProfile:(id)arg1 error:(id *)arg2;
+ (id)_propertiesForEntity;
+ (_Bool)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(_Bool)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)persistedStateForStoreUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)persistedStoreUUIDsForProfile:(id)arg1 error:(id *)arg2;

@end
