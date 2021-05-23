/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDFitnessFriendActivitySnapshotSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (_Bool)supportsSyncStore:(id)arg1;
+ (Class)healthEntityClass;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;

@end
