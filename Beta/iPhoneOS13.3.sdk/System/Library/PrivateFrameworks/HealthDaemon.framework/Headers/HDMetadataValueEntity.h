/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_predicateForEntityWithObjectID:(id)arg1;

@end
