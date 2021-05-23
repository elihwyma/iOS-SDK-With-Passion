/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, _SYSharedServiceDB;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface SYPersistentStore : NSObject

{
    NSString *_path;
    struct __CFString *_loggingFacility;
    double _timeToLiveCache;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _changeTrackingEnabled;
    NSString *_peerID;
    NSMutableDictionary *_peerSeqnoSets;
    NSMutableSet *_ignoringMessageIDs;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_getInFullSync;
    struct sqlite3_stmt *_getChangeCount;
    struct sqlite3_stmt *_getNextExpireTime;
    struct sqlite3_stmt *_purgeExpiredChanges;
    struct sqlite3_stmt *_insertChange;
    struct sqlite3_stmt *_getFullsyncSent;
    struct sqlite3_stmt *_setFullsyncSent;
    struct sqlite3_stmt *_logSyncComplete;
    struct sqlite3_stmt *_getChangeIDsSinceVersion;
    struct sqlite3_stmt *_getLocalVersion;
    struct sqlite3_stmt *_getOldestVersion;
    struct sqlite3_stmt *_setVectorClock;
    struct sqlite3_stmt *_setPeerSeqNo;
    struct sqlite3_stmt *_getPeerSeqNo;
    struct sqlite3_stmt *_setPeerSeqNoSet;
    struct sqlite3_stmt *_enterFullSync;
    struct sqlite3_stmt *_exitFullSync;
    struct sqlite3_stmt *_getIgnoringSyncID;
    struct sqlite3_stmt *_getCurrentSyncID;
    struct sqlite3_stmt *_getCurrentSyncStartTime;
    struct sqlite3_stmt *_getLastEndedSyncID;
    struct sqlite3_stmt *_getWaitingForSyncID;
    struct sqlite3_stmt *_setWaitingForSyncID;
    struct sqlite3_stmt *_setAllSentForSyncID;
    struct sqlite3_stmt *_getAllSentForCurrentSync;
    struct sqlite3_stmt *_getLastSyncError;
    struct sqlite3_stmt *_setSyncUserInfo;
    struct sqlite3_stmt *_getSyncUserInfo;
    struct sqlite3_stmt *_setSyncIDSOptions;
    struct sqlite3_stmt *_getSyncIDSOptions;
    _Bool _cachedVersionStale;
    double _unfinishedSyncTimeout;
    NSSet *_cachedChangedSyncIDs;
    unsigned long long _cachedChangedSyncIDsVersion;
    _SYSharedServiceDB *_sharedDB;
}

@property (retain, nonatomic) NSSet *cachedChangedSyncIDs;
@property (nonatomic) unsigned long long cachedChangedSyncIDsVersion;
@property (nonatomic) _Bool cachedVersionStale;
@property (retain, nonatomic) _SYSharedServiceDB *sharedDB;
@property (nonatomic, getter=isPerformingDeltaSync) _Bool performingDeltaSync;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) double timeToLive;
@property (nonatomic, readonly) unsigned long long changeCount;
@property (nonatomic, readonly) NSString *peerID;
@property (retain, nonatomic) NSString *vectorClockJSON;
@property (copy, nonatomic) NSDate *overflowResyncTime;
@property (copy, nonatomic) NSDate *lastMessageReceived;
@property (nonatomic) double unfinishedSyncTimeout;
@property (nonatomic, readonly) _Bool canStartNewSyncSession;
@property (nonatomic, readonly) _Bool currentSyncSendComplete;
@property (nonatomic, readonly) _Bool lastSyncFailed;
@property (nonatomic, readonly) NSError *lastSyncError;
@property (nonatomic, readonly) NSString *currentFullSyncID;
@property (nonatomic, readonly) _Bool inFullSync;
@property (nonatomic, readonly) NSString *lastSyncEndID;
@property (copy, nonatomic) NSString *waitingForSyncEndID;
@property (copy, nonatomic) NSDictionary *fullSyncUserInfo;
@property (copy, nonatomic) NSDictionary *fullSyncIDSOptions;
@property (nonatomic) _Bool completedSync;
@property (nonatomic, readonly) double durationOfLastFullSync;
@property (nonatomic, readonly) unsigned long long currentLocalVersion;
@property (nonatomic, readonly) unsigned long long lastSeenRemoteVersion;

+ (id)sharedPersistentStoreForService:(id)arg1;
+ (_Bool)_tableEmpty:(id)arg1 db:(struct sqlite3 *)arg2;
+ (id)_loadOrCreatePeerIDForDB:(struct sqlite3 *)arg1;

- (id)init;
- (void)dealloc;
- (void)setPeerID:(id)arg1;
- (void)_prepareStatements;
- (_Bool)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2;
- (void)resetSequenceNumbersForPeer:(id)arg1;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (_Bool)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 error:(id *)arg3;
- (void)clearAllChanges;
- (void)exitFullSyncWithID:(id)arg1 error:(id)arg2;
- (id)initWithPath:(id)arg1 loggingFacility:(const struct __CFString *)arg2 changeTrackingEnabled:(_Bool)arg3;
- (void)enterFullSyncWithID:(id)arg1 ignoring:(_Bool)arg2;
- (_Bool)reassignCurrentSyncID:(id)arg1;
- (unsigned long long)nextSequenceNumber;
- (_Bool)logChanges:(id)arg1 error:(id *)arg2;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (void)sendCompletedForSyncWithID:(id)arg1;
- (void)changeTrackingToggled:(_Bool)arg1;
- (void)addMessageIDsToIgnore:(id)arg1;
- (_Bool)shouldIgnoreMessageID:(id)arg1;
- (void)removeMessageIDFromIgnoreList:(id)arg1;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (int)_getSchemaVersion;
- (id)initWithSharedDatabase:(id)arg1;
- (void)_setupSharedDB;
- (_Bool)_openDBAtPath:(id)arg1;
- (void)_convertTimestamps;
- (void)_fixPeerInfo;
- (void)_cacheTTL;
- (_Bool)_inTransaction:(_Bool)arg1 do:(CDUnknownBlockType)arg2;
- (id)_decodeIndexSet:(id)arg1;
- (id)_encodeIndexSet:(id)arg1;
- (_Bool)_LOCKED_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 db:(struct sqlite3 *)arg3 error:(id *)arg4;
- (id)_sequenceNumberSetForPeerID:(id)arg1 inDB:(struct sqlite3 *)arg2;
- (unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1 db:(struct sqlite3 *)arg2;
- (void)_loadIgnoreList_LOCKED:(struct sqlite3 *)arg1;
- (void)_saveIgnoreList_LOCKED:(struct sqlite3 *)arg1;
- (void)_verifyInTransactionForFullSync;
- (unsigned long long)_oldestVersion;
- (struct sqlite3 *)_dbRef;
- (void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2;
- (void)resetSequenceNumber:(unsigned long long)arg1;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (_Bool)ignoringFullSyncWithID:(id)arg1;
- (_Bool)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (id)lastDBErrorInfo;
- (id)dbPath;

@end
