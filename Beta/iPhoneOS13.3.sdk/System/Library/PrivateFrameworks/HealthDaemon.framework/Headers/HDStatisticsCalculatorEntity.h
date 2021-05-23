/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDStatisticsCalculatorEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id *)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id *)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;

@end
