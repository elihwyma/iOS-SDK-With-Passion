/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMCloudKitSyncProgress, IMCloudKitSyncState, IMEventNotificationManager, IMWeakReferenceCollection, NSTimer;

@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject

{
    id <IMCloudKitEventHandlerAccountInfoProvider> _accountInfoProvider;
    double _progressPollingInterval;
    IMWeakReferenceCollection *_eventHandlers;
    IMEventNotificationManager *_notificationManager;
    NSTimer *_fetchStatsTimer;
    IMCloudKitSyncState *_previousState;
    IMCloudKitSyncProgress *_progressToSend;
}

@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property (retain) IMEventNotificationManager *notificationManager;
@property (weak) NSTimer *fetchStatsTimer;
@property (retain) IMCloudKitSyncState *previousState;
@property (retain) IMCloudKitSyncProgress *progressToSend;
@property (weak) id <IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider;
@property _Bool didPromptForCloudKitSync;
@property double progressPollingInterval;
@property (readonly) IMCloudKitSyncState *syncState;

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)logHandle;

- (id)init;
- (id)logHandle;
- (void)addEventHandler:(id)arg1;
- (void)fetchSyncState;
- (void)removeEventHandler:(id)arg1;
- (void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRampStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCloudKitSyncEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cloudKitHooks;
- (void)_syncStateDidChange:(id)arg1;
- (_Bool)accountHasiMessageEnabled;
- (void)visitEventHandlers:(CDUnknownBlockType)arg1;
- (id)syncStateWithDictionary:(id)arg1;
- (void)_sendSyncStateChangedEventToEventListeners:(id)arg1;
- (void)_updateProgressWithState:(id)arg1;
- (void)startInitialSync;
- (void)performAdditionalStorageRequiredCheck;
- (void)fetchSyncStateStatistics;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (void)_fetchSyncStateStatistics:(CDUnknownBlockType)arg1;
- (void)_cancelStatsFetchingTimer;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (double)progressBroadcastDelay;
- (void)_sendProgressToEventListenersDeferred;
- (void)_sendProgressToEventListeners:(id)arg1;
- (_Bool)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgressToEventListeners;
- (void)fetchSyncStateAfterFetchingAccountStatus;
- (void)fetchSyncStateAfterClearingErrors;
- (void)setCloudKitSyncEnabled:(_Bool)arg1;
- (void)startPeriodicSync;
- (void)disableAllSyncEnabledCloudKitDevices;
- (void)fetchSyncStateStatisticsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncDebuggingInfo:(id)arg1;

@end
