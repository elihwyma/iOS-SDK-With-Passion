/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class CKRecordID, IMDCKDatabaseManager, IMDRecordZoneManager, NSDate, NSError, NSNumber, NSObject;

@protocol OS_dispatch_queue;

@interface IMDCKExitManager

{
    _Bool _fetchedExitDateOnLaunch;
    NSDate *_exitRecordDate;
    NSError *_errorFetchingExitDate;
    CKRecordID *_exitRecordID;
    NSNumber *_saltZoneCreatedOverride;
    NSNumber *_subscriptionCreatedOverride;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    IMDCKDatabaseManager *_databaseManager;
}

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) _Bool fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)arg1;
- (void)submitCloudKitMetricWithOperationGroupName:(id)arg1 useManatee:(_Bool)arg2;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 useManatee:(_Bool)arg2 analyticDictionary:(id)arg3;
- (void)writeExitRecordWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2;
- (void)_setUpSubscription;
- (void)_fetchExitRecordDateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_saltZoneCreated;
- (_Bool)_subscriptionCreated;
- (id)exitConfiguration;
- (void)_evalToggleiCloudSettingsSwitch;
- (long long)derivedQualityOfService;
- (void)writeSyncCompletedRecordWithDate:(id)arg1 useManatee:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 useManatee:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_analyticZoneCreated;
- (void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 useManatee:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_sharedCKUtilities;
- (void)_scheduleMetricOperation:(id)arg1 useManate:(_Bool)arg2;
- (_Bool)_canSubmitCloudKitMetric;
- (id)_modifiedOpGroupName:(id)arg1 useManatee:(_Bool)arg2;
- (id)syncCompleteRecordID;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 useManatee:(_Bool)arg3 ignoreZoneNotFoundError:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_canSubmitCloudKitAnalytic;
- (id)analyticZoneRecordID;
- (void)handleNotificationForSubscriptionID:(id)arg1;
- (void)exitRecordDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteExitRecordWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;

@end
