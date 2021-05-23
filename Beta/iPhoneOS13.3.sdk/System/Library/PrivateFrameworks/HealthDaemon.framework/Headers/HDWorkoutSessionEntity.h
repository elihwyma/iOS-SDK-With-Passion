/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutSessionEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)privateSubEntities;
+ (id)lookupSessionWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)createSessionWithIdentifier:(id)arg1 source:(id)arg2 configuration:(id)arg3 state:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)sessionsForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sessionsExcludingIdentifiers:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sessionIdentifierForRecoveryInProfile:(id)arg1 error:(id *)arg2;

- (id)stateWithTransaction:(id)arg1 error:(id *)arg2;
- (id)workoutEventsInTransaction:(id)arg1 error:(id *)arg2;
- (id)startDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)endDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)updateLatestActivityDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)workoutConfigurationWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)hasFailedInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setHasFailed:(_Bool)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)clientBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setClientBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)clientApplicationIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setClientApplicationIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)sourceWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setSource:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)associatedBuilderWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setAssociatedBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setState:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)requestedTargetStateWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setRequestedTargetState:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)finishWithTransaction:(id)arg1 error:(id *)arg2;
- (id)latestActivityDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)updateLatestActivityDateWithTransaction:(id)arg1 error:(id *)arg2;

@end
