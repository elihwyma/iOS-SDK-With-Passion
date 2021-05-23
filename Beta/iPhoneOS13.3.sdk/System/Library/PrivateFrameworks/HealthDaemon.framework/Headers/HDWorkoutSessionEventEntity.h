/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDWorkoutEventEntity.h>

@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)workoutEventClass;
+ (id)workoutEventsWithWorkoutSession:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
