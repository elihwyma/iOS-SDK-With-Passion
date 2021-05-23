/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDWorkoutEventEntity.h>

@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
