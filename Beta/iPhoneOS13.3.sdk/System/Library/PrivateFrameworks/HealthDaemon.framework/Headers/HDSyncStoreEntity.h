/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncStoreEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2;
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;

- (long long)syncProvenance;

@end
