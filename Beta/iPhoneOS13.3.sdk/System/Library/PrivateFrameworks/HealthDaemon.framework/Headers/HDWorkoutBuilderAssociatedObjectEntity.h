/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (long long)associateObject:(id)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id *)arg4;

@end
