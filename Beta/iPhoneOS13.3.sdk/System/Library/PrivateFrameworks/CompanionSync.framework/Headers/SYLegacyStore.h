/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYStore.h>

@class NMSMessageCenter, NSError, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, NSUUID, SYPersistentStore, SYRetryTimer, SYVectorClock;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SYLegacyStore : SYStore

{
    unsigned long long _batchCounter;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    _Bool _tracksChanges;
    NSMutableDictionary *_sendSignals;
    SYRetryTimer *_syncRetryTimer;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    NSError *_overflowRetryError;
    _Bool _deferredFullSync;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _encryptPayloads;
    _Bool _alwaysWins;
    _Bool _registeredNotificationHandlers;
    _Bool _fullSyncWasRequestedBySlave;
    long long _priority;
    SYPersistentStore *_persistentStore;
    NSString *_service;
    NSString *_databaseFileName;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFString *_loggingFacility;
    NSUUID *_pairedDeviceID;
    NMSMessageCenter *_messageCenter;
    SYVectorClock *_vectorClock;
    CDUnknownBlockType _nextBatchStep;
}

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *databaseFileName;
@property (nonatomic) long long priority;
@property (nonatomic) _Bool encryptPayloads;
@property (nonatomic) _Bool alwaysWins;
@property (retain, nonatomic) SYPersistentStore *persistentStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct __CFString *loggingFacility;
@property (retain, nonatomic) NSUUID *pairedDeviceID;
@property (nonatomic) _Bool registeredNotificationHandlers;
@property (retain, nonatomic) NMSMessageCenter *messageCenter;
@property (retain, nonatomic) SYVectorClock *vectorClock;
@property (nonatomic) _Bool fullSyncWasRequestedBySlave;
@property (copy, nonatomic) CDUnknownBlockType nextBatchStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fullSyncActivityDictionary;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (id)initWithBundleIdentifier:(id)arg1;
- (double)timeToLive;
- (id)initWithService:(id)arg1;
- (_Bool)isPaired;
- (void)setupDatabase;
- (_Bool)tracksChanges;
- (void)setTracksChanges:(_Bool)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)_prefsChanged;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (_Bool)inFullSync;
- (_Bool)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (_Bool)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (_Bool)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)_transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4 reportError:(CDUnknownBlockType)arg5;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (void)setDeliveryQOS:(unsigned int)arg1;
- (_Bool)hasCompletedFullSync;
- (long long)maxBytesInFlight;
- (void)setMaxBytesInFlight:(long long)arg1;
- (_Bool)inDeltaSync;
- (void)willBeginDeltaSync;
- (void)didEndDeltaSync;
- (void)setupPairingNotifications;
- (id)_getPairedDeviceID;
- (void)_setupMessageCenter_LOCKED;
- (void)_listenForPrefsChangeNotifications;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (_Bool)_isUsingGenericCache;
- (_Bool)_isPairedWithDevice:(id)arg1;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (void)_postVersionRejectedForMessageID:(id)arg1;
- (id)newMessageHeader;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (id)_pathForMessageCenterCache;
- (_Bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (void)_recordLastSeqNo:(id)arg1;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleChangeMessage:(id)arg1;
- (void)performFullSyncToCurrentDBVersion;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (void)_retrySync;
- (void)_handleIDSOverflowWithError:(id)arg1;
- (void)performFullSyncIfNecessaryAskingDelegate:(_Bool)arg1;
- (void)_vectorClockUpdated;
- (void)remoteStoreRequestFullSync;
- (_Bool)_shouldIgnoreSyncID:(id)arg1;
- (void)_syncEndedWithSyncID:(id)arg1;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (void)processBatchSyncStart;
- (_Bool)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id *)arg3;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (_Bool)_shouldSkipNonSyncMessages;
- (void)performFullSync;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;
- (_Bool)_allowDeltaSyncWithContext:(id)arg1 error:(id *)arg2;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4 reportError:(CDUnknownBlockType)arg5;
- (void)_handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4 reportError:(CDUnknownBlockType)arg5 notifyingTransaction:(id)arg6;
- (void)logChanges:(id)arg1;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)performFullSyncIfNecessary;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(CDUnknownBlockType)arg3;
- (_Bool)performBatchedSyncToCurrentDBVersion;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)_getPairingStorePath;
- (id)_batchChunkUnackedIndices;
- (void)setupMessageCenter;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (_Bool)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned long long)arg3 offsetAmount:(unsigned long long *)arg4;
- (id)newFullSyncContext;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_restartBatchSyncWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(CDUnknownBlockType)arg3;

@end
