/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class APSConnection, CATNetworkReachability, CATOperationQueue, CATStateMachine, CKContainer, CKRecordZoneID, CKServerChangeToken, CRKCloudAssetStore, CRKCloudLocalDeltaQueue, CRKFileBasedKeyedDataStore, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@protocol CRKCloudZoneSyncDelegate;

@interface CRKCloudZoneSyncEngine : NSObject

{
    NSString *mEnrollmentStatusKey;
    NSString *mLocalDeltaQueueKey;
    NSString *mPushTopic;
    NSString *mRecordCacheKey;
    NSString *mServerTokenKey;
    NSString *mSubscribedKey;
    _Bool _reachabilityScheduled;
    _Bool _startScheduled;
    long long _enrollmentStatus;
    CRKCloudAssetStore *_assetStore;
    CKContainer *_container;
    id <CRKCloudZoneSyncDelegate> _delegate;
    NSMutableArray *_fetchChangesCompletionStash;
    CATStateMachine *_fsm;
    CRKCloudLocalDeltaQueue *_localDeltaQueue;
    CATOperationQueue *_operationQueue;
    APSConnection *_pushConnection;
    NSMutableDictionary *_pushCompletionsByLocalDeltaIdentifier;
    CATNetworkReachability *_reachability;
    NSMutableDictionary *_recordCache;
    CKServerChangeToken *_serverToken;
    CRKFileBasedKeyedDataStore *_store;
    NSNumber *_subscribed;
    CKRecordZoneID *_zoneId;
}

@property (retain, nonatomic) CRKCloudAssetStore *assetStore;
@property (retain, nonatomic) CKContainer *container;
@property (weak, nonatomic) id <CRKCloudZoneSyncDelegate> delegate;
@property (nonatomic) long long enrollmentStatus;
@property (nonatomic, readonly) NSMutableArray *fetchChangesCompletionStash;
@property (retain, nonatomic) CATStateMachine *fsm;
@property (retain, nonatomic) CRKCloudLocalDeltaQueue *localDeltaQueue;
@property (retain, nonatomic) CATOperationQueue *operationQueue;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (retain, nonatomic) NSMutableDictionary *pushCompletionsByLocalDeltaIdentifier;
@property (retain, nonatomic) CATNetworkReachability *reachability;
@property (nonatomic) _Bool reachabilityScheduled;
@property (nonatomic, readonly) NSMutableDictionary *recordCache;
@property (retain, nonatomic) CKServerChangeToken *serverToken;
@property (nonatomic) _Bool startScheduled;
@property (retain, nonatomic) CRKFileBasedKeyedDataStore *store;
@property (retain, nonatomic) NSNumber *subscribed;
@property (retain, nonatomic) CKRecordZoneID *zoneId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)shutDown;
- (void)reachabilityDidChange:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchChanges;
- (id)initWithDelegate:(id)arg1 store:(id)arg2 container:(id)arg3 zoneId:(id)arg4;
- (void)pushLocalDelta:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cloudRecordFromCKRecord:(id)arg1;
- (void)cleanupZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)initilizeStateMachine;
- (void)enterSettingUpStateWithContext:(id)arg1;
- (void)privateBeginShutDown;
- (void)privateBeginReady;
- (void)privateBeginRunning;
- (void)fetchChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)stashFetchChangesWithContext:(id)arg1;
- (void)enqueueLocalDeltaWithContext:(id)arg1;
- (void)requestStartWithConetext:(id)arg1;
- (void)enterReadyStateWithContext:(id)arg1;
- (void)privateBeginFetching;
- (void)checkRecordZoneForRecordsWithContext:(id)arg1;
- (void)enterRunningStateWithContext:(id)arg1;
- (void)privateBeginPaused;
- (void)networkBecameUnreachable;
- (void)fetchRemoteChangesWithContext:(id)arg1;
- (void)networkBecameReachable;
- (void)enterPausedStateWithContext:(id)arg1;
- (void)enterStoppedStateWithContext:(id)arg1;
- (void)enterShutDownStateWithContext:(id)arg1;
- (void)enterCleaningStateWithContext:(id)arg1;
- (CDUnknownBlockType)completionFromContext:(id)arg1;
- (void)enableRemoteNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableReachability;
- (void)disableReachability;
- (void)dumpFetchChangesStash:(_Bool)arg1;
- (void)safeTransitionForSelector:(SEL)arg1;
- (void)enableRemoteNotificationsOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)retryableDeleteRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)retryableFetchZoneChangesOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)debounceRemoteDelta:(id)arg1;
- (void)attemptPushNextLocalDelta;
- (void)debounceLocalDelta:(id)arg1;
- (void)enqueueLocalDelta:(id)arg1;
- (void)retryablePeekRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)safeTransitionForSelector:(SEL)arg1 withContext:(id)arg2;
- (void)panicPullWithCompletion:(CDUnknownBlockType)arg1;
- (void)setRecordCache:(id)arg1;
- (void)setRecordCacheRecord:(id)arg1 forRecordName:(id)arg2;
- (void)removeRecordCacheRecordName:(id)arg1;
- (void)pushLocalDeltaOperationDidFinish:(id)arg1;
- (void)dequeueLocalDelta:(id)arg1;
- (_Bool)hasFetchedFromServer;
- (void)cleanupZone;
- (void)panicPull;
- (void)pushLocalDelta:(id)arg1;
- (id)localDeltaFromTuple:(id)arg1;

@end
