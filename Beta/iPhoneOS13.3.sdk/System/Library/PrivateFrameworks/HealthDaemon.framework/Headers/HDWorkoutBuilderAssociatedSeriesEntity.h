/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id *)arg2;

@end
