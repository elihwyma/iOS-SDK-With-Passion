/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)propertyForSyncProvenance;
+ (id)tableAliases;
+ (_Bool)updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 error:(id *)arg3 updateHandler:(CDUnknownBlockType)arg4;
+ (_Bool)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
+ (_Bool)_updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4 updateHandler:(CDUnknownBlockType)arg5;
+ (_Bool)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(_Bool)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(_Bool *)arg2 profile:(id)arg3 error:(id *)arg4;

@end
