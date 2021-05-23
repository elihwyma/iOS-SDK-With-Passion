/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)tableAliases;
+ (id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)_predicateForBundleID:(id)arg1;
+ (id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end
