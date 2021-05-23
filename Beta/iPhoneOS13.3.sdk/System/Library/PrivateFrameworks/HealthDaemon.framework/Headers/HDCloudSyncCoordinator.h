/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, APSConnection, HDAsynchronousTaskTree, HDDaemon, HDPeriodicActivity, HDProfile, HKObserverSet, NSDate, NSMutableArray, NSProgress, NSString;

@protocol OS_dispatch_queue;

@interface HDCloudSyncCoordinator : NSObject

{
    HDDaemon *_daemon;
    _Bool _queue_syncInProgress;
    _Bool _queue_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_queue_lastSuccessfulPullDate;
    NSDate *_queue_lastSuccessfulPushDate;
    HDAsynchronousTaskTree *_activeTaskGroup;
    NSMutableArray *_pendingTaskGroups;
    ACAccountStore *_accountStore;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSProgress *_activeTaskProgress;
    NSMutableArray *_pendingTasksProgress;
    NSMutableArray *_progressCompletionBlocks;
    HKObserverSet *_observers;
    _Bool _hasRestoreCompleted;
    _Bool _cloudSyncEnabled;
    _Bool _cloudSyncValueLoaded;
    APSConnection *_apsConnection;
    HDProfile *_unitTest_primaryProfileOverride;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDPeriodicActivity *periodicActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)_setupCloudSyncSupportIfRequired;
- (void)_queue_setupCloudSyncSupportIfRequired;
- (void)_queue_enableCloudSyncSupport;
- (void)_queue_disableCloudSyncSupport;
- (void)_queue_setupPeriodicActivity;
- (void)_queue_checkLastSyncDate;
- (_Bool)_queue_canPerformCloudSyncWithError:(id *)arg1;
- (void)_queue_setStartDateForRestoreEventSyncComplete;
- (id)_queue_syncProfilesWithIdentifiers:(id)arg1 withOptions:(unsigned long long)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_queue_resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_unitTest_shouldSyncProfile:(id)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setHealthAccountDataclassEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCloudSyncProgressCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_triggerSyncForAccountChange;
- (_Bool)_queue_hasTooManyPendingTaskGroupsWithError:(id *)arg1;
- (id)readErrorRequiringUserActionOnCloudSyncError:(id *)arg1;
- (_Bool)persistErrorRequiringUserActionOnCloudSync:(id)arg1;
- (id)hasErrorRequiringUserActionOnCloudSyncTaskTree:(id)arg1;
- (_Bool)_queue_isDeviceInManateeUnavailableCFUState;
- (void)_updateCachedLastSyncDatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2;
- (void)_queue_startNextTaskGroup;
- (id)_syncProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (id)_resetProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (id)_queue_getPersistedAccountInfo;
- (id)_fetchDescriptionForProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)disableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (id)syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldPerformLastSyncDateCheckInternalSetting;
- (id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id *)arg1;
- (void)_prepareAllProfilesForSync;
- (void)_updateAggdKeysForPeriodicSyncError:(id)arg1;
- (void)_persistPeriodicSyncError:(id)arg1;
- (void)_resetPersistedPeriodicSyncErrors;
- (void)_queue_generateRestoreEventMergeComplete;
- (id)_primaryProfile;
- (void)databaseJournalMergeDidCompleteForProfile:(id)arg1;
- (id)resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canPerformCloudSyncWithError:(id *)arg1;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (id)activeTaskProgress;
- (_Bool)isDeviceInManateeUnavailableCFUState;
- (_Bool)persistRestoreCompletionDate:(id)arg1 withError:(id *)arg2;
- (id)readRestoreCompletionDateWithError:(id *)arg1;
- (void)unitTest_setPrimaryProfileOverride:(id)arg1;
- (void)unitTest_performPeriodicSyncWithCompletion:(CDUnknownBlockType)arg1;

@end
