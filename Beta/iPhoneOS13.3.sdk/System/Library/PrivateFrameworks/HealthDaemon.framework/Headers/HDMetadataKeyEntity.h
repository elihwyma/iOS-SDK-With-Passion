/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)_entityForKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_keyForPersistentID:(id)arg1 database:(id)arg2;

@end
