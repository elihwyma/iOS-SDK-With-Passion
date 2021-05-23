/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)privateSubEntities;
+ (_Bool)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateSharesWithProfile:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;

@end
