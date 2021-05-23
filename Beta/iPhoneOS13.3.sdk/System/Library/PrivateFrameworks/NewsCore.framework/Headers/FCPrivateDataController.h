/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, FCCloudContext, FCCommandQueue, FCKeyValueStore, FCPushNotificationCenter, NSArray, NSHashTable, NSString;

@interface FCPrivateDataController : NSObject

{
    _Bool _waitingForFirstSync;
    _Bool _preparedForUse;
    _Bool _syncingEnabled;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
    FCCloudContext *_context;
    NSHashTable *_observers;
    FCKeyValueStore *_localStore;
}

@property (nonatomic, readonly, getter=isSyncingEnabled) _Bool syncingEnabled;
@property (retain, nonatomic) FCPushNotificationCenter *pushNotificationCenter;
@property (copy, nonatomic) NSString *storeDirectory;
@property (retain, nonatomic) FCCommandQueue *commandQueue;
@property (nonatomic, getter=hasBeenPreparedForUse) _Bool preparedForUse;
@property (getter=isWaitingForFirstSync) _Bool waitingForFirstSync;
@property (retain, nonatomic) NSArray *syncManagers;
@property (nonatomic) unsigned long long changeCount;
@property (retain, nonatomic) FCAsyncSerialQueue *syncQueue;
@property (retain, nonatomic) NSHashTable *stateObservers;
@property (nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled;
@property (nonatomic, readonly) FCCloudContext *context;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)desiredKeys;
+ (_Bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)internalLocalStoreKeys;
+ (_Bool)requiresPushNotificationSupport;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (id)localStoreMigrator;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyObservers;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)markAsDirty;
- (_Bool)canHelpPruneZoneName:(id)arg1;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (id)jsonEncodableObject;
- (void)recordSyncManagerNotifyObservers:(id)arg1;
- (void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_qualityOfServiceForNextSync;
- (void)handleSyncCompletion;
- (void)_serialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncWithCondition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_markAsDirtyAndNotifyObservers:(_Bool)arg1;
- (id)_newSyncState;
- (long long)_qualityOfServiceForFirstSync:(_Bool)arg1;
- (id)_allKnownRecordIDsForSyncManager:(id)arg1;
- (void)_handleSyncDidResetLocalDataForSyncManager:(id)arg1;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1;
- (void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)zoneSyncManagerNotifyObservers:(id)arg1;
- (long long)commandQueue:(id)arg1 qualityOfServiceForCommand:(id)arg2;
- (void)syncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStateObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (_Bool)isBackedByAnyRecordZoneIDsInSet:(id)arg1;
- (void)handleResetWithReplacementRecords:(id)arg1;
- (void)_possiblySimulateCrashWithMessage:(id)arg1;
- (void)enableSyncing;
- (void)disableSyncing;
- (void)createLocalStore;
- (void)mergeLocalStoreWithCloud;
- (void)prepareForUse;
- (void)assertReadyForUse;

@end
