/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAlarmEventEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)checkConstraints;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (_Bool)enumerateAllAlarmEventsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
+ (id)_alarmEventFromAllPropertiesRow:(struct HDSQLiteRow *)arg1;
+ (id)insertOrReplaceAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteAlarmEvent:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
+ (_Bool)enumerateAllAlarmEventsWithTransaction:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
+ (_Bool)insertOrReplaceAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteAlarmEvents:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteAllAlarmEventsWithClientIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

- (id)alarmEventWithTransaction:(id)arg1 error:(id *)arg2;

@end
