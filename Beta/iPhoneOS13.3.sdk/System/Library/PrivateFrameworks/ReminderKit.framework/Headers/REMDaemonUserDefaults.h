/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMUserDefaults.h>

@class NSData, NSDate, NSDateComponents, NSNumber, NSString, REMObjectID;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (nonatomic, readonly) _Bool newAppShouldTakeoverEKReminderNotifications;
@property (nonatomic, readonly) _Bool dataaccessDaemonStopSyncingReminders;
@property (nonatomic, readonly) _Bool siriShouldRouteIntentsToNewRemindersApp;
@property (nonatomic) _Bool databaseMigrationTestModeEnabled;
@property (nonatomic) _Bool isDatabaseMigrated;
@property (nonatomic) _Bool databaseMigrationTimedOut;
@property (copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property (retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property (retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property (retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (nonatomic) _Bool cloudKitMigrationDisableCleanUp;
@property (retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (copy, nonatomic) NSNumber *spotlightIndexVersion;
@property (copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property (copy, nonatomic) NSDate *lastPresentAlarmDate;
@property (copy, nonatomic) NSDate *lastSyncPoll;
@property (copy, nonatomic) NSData *userInteractionsData;
@property (nonatomic) _Bool simulateMAIDAccount;
@property (nonatomic) _Bool showRemindersAsOverdue;
@property (nonatomic) _Bool enableWelcomeScreen;
@property (nonatomic) _Bool forceShowWelcomeScreen;
@property (retain, nonatomic) REMObjectID *preferredDefaultListID;
@property (retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property (nonatomic) _Bool disableAlarmEngineDataSourcePrefetching;

+ (id)todayNotificationFireTimeFromStorageNumber:(id)arg1;
+ (id)storageNumberForTodayNotificationTime:(id)arg1;

- (id)observePreferredDefaultListIDWithBlock:(CDUnknownBlockType)arg1;
- (id)observeShowRemindersAsOverdueWithBlock:(CDUnknownBlockType)arg1;
- (id)streamTodayNotificationFireTime:(CDUnknownBlockType)arg1;

@end
