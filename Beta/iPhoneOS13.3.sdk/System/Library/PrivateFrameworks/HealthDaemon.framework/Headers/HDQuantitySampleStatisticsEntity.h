/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDQuantitySampleStatisticsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (_Bool)setDiscreteQuantitySampleStatistics:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id *)arg4;

@end
