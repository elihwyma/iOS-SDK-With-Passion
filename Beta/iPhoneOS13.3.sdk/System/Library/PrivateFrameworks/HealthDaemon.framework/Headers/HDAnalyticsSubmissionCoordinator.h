/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon;

@interface HDAnalyticsSubmissionCoordinator : NSObject

{
    HDDaemon *_daemon;
}

- (id)initWithDaemon:(id)arg1;
- (void)submitEvent:(id)arg1;
- (void)database_reportUnprotectedDatabaseIdentifier:(id)arg1 doesNotMatchProtectedDatabaseIdentifier:(id)arg2;
- (void)database_reportSQLiteCorruptionWithResultCode:(int)arg1 type:(long long)arg2 profile:(id)arg3;
- (void)database_reportHFDCorruptionWithFailureType:(long long)arg1 profile:(id)arg2;
- (void)sendEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)cloudSync_reportOwnershipChangeForMissingManateeIdentityDuringPush;
- (void)cloudSync_reportMissingManateeIdentityDuringFetchInContainer:(id)arg1 zoneName:(id)arg2 databaseScope:(long long)arg3;
- (_Bool)_database_shouldSendReportForKey:(id)arg1 profile:(id)arg2;

@end
