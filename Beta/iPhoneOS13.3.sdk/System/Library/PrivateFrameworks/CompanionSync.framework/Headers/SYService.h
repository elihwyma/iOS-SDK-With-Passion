/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, PBCodable, SYDevice, SYPersistentStore, SYSession, SYSyncEngine, SYVectorClock, _SYMultiSuspendableQueue, _SYQueuedStartSession;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, SYServiceDelegate;

@interface SYService : NSObject

{
    NSString *_serviceName;
    long long _defaultPriority;
    struct NSDictionary *_defaultOptions;
    NSDictionary *_customIDSOptions;
    SYSession *_currentSession;
    id <SYServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_incomingIOQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _SYMultiSuspendableQueue *_sessionQueue;
    NSObject<OS_dispatch_source> *_processSignalSource;
    SYPersistentStore *_persistentStore;
    SYSyncEngine *_syncEngine;
    SYVectorClock *_vectorClock;
    NSMutableSet *_rejectingV1SyncSessions;
    NSString *_inFlightSyncRequestIdentifier;
    _SYQueuedStartSession *_queuedStartSession;
    SYDevice *_targetedDevice;
    NSMutableArray *_onSessionEnd;
    NSObject<OS_os_activity> *_serviceActivity;
    unsigned long long _stateHandle;
    struct os_unfair_lock_s _flagLock;
    struct {
        unsigned int isMaster:1;
        unsigned int hasChanges:1;
        unsigned int needsReset:1;
        unsigned int hasPairingStore:1;
        unsigned int isRunning:1;
        unsigned int registeredForPairingNotifications:1;
        unsigned int remoteProtocolVersion:3;
        unsigned int remoteDeviceIsWatch:1;
        unsigned int isObservingRemoteDeviceProperties:1;
        unsigned int requestedEngineType:3;
        unsigned int assignedEngineType:3;
        unsigned int suspendedForQWS:1;
    } _flags;
    NSString *_peerID;
    double _defaultMessageTimeout;
    double _sessionStalenessInterval;
    long long _sendingBufferCap;
    NSArray *_aggdKeys;
    long long _engineType;
    NSString *_generationID;
}

@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (nonatomic, readonly) _Bool hasPairingStore;
@property (copy, nonatomic, readonly) NSArray *aggdKeys;
@property (nonatomic, readonly) SYSyncEngine *syncEngine;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) SYPersistentStore *persistentStore;
@property (nonatomic, readonly) _SYMultiSuspendableQueue *sessionQueue;
@property (nonatomic, readonly) NSObject<OS_os_activity> *serviceActivity;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic) long long engineType;
@property (nonatomic, readonly) NSString *generationID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool isMasterStore;
@property (nonatomic) double defaultMessageTimeout;
@property (nonatomic) double sessionStalenessInterval;
@property (nonatomic, readonly) _Bool targetIsInProximity;
@property (nonatomic, readonly) _Bool targetIsConnected;
@property (readonly) SYSession *currentSession;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) long long sendingBufferCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *extraTransportOptions;
@property (nonatomic, readonly) PBCodable *stateForLogging;

- (id)init;
- (void)dealloc;
- (void)_suspend;
- (void)suspend;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_handleError:(id)arg1;
- (_Bool)resume:(id *)arg1;
- (void)_processPendingChanges;
- (id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(_Bool)arg3 options:(struct NSDictionary *)arg4;
- (void)setNeedsResetSync;
- (void)setHasChangesAvailable;
- (id)_newMessageHeader;
- (void)sessionDidEnd:(id)arg1 withError:(id)arg2;
- (void)_vectorClockUpdated;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (id)initWithService:(id)arg1 priority:(long long)arg2 qos:(unsigned int)arg3 asMasterStore:(_Bool)arg4 options:(struct NSDictionary *)arg5;
- (void)_setupPairingNotifications;
- (void)_updateMetaProtocolInfoForDevice:(id)arg1;
- (void)_deviceTargetabilityChanged:(id)arg1;
- (void)_deviceRemoved:(id)arg1;
- (_Bool)_protocolVersion:(int)arg1 supportsEngineType:(long long)arg2;
- (void)_upgradeEngineTo:(long long)arg1;
- (void)_downgradeEngineForVersion:(int)arg1;
- (void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(_Bool)arg3 switchingEngines:(_Bool)arg4;
- (void)_deviceOSInfoChanged:(id)arg1;
- (void)_removePairingStoreDevice;
- (void)_setupPairingStoreWithDevice:(id)arg1;
- (void)_dealWithPotentiallyStallingCurrentSession;
- (void)_signalPairingStoreAvailable;
- (void)_ifDelegateImplements:(SEL)arg1 do:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3;
- (void)_switchToNewTargetedDevice:(id)arg1;
- (void)_signalPairingStoreUnavailable;
- (_Bool)_initializeServiceDB:(id *)arg1;
- (_Bool)_initializeMessaging:(id *)arg1;
- (void)_sendResetRequest;
- (id)_makeSessionForDeltaSync:(_Bool)arg1;
- (id)_pathForDataStore;
- (id)_makeSyncEngineOfType:(long long)arg1;
- (void)_whenSessionEnds:(CDUnknownBlockType)arg1;
- (void)_swapEngineTo:(long long)arg1;
- (void)_wrapUpCurrentSession:(id)arg1;
- (void)_handleStartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_chooseBetweenCollidingSessions:(id)arg1:(id)arg2;
- (void)_postVersionRejectionMessageForMessageWithID:(id)arg1;
- (void)_v1_handleFullSyncRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleSyncAllObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncStart:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncEnd:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleChangeMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSyncBatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRestartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleEndSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_peerRejectedVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_v1_handleFullSyncRequestAck:(id)arg1 error:(id *)arg2;
- (_Bool)_v1_handleBatchChunkAck:(id)arg1 error:(id *)arg2;
- (_Bool)_v1_handleBatchEndResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleResetResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id *)arg2;
- (id)_sessionFromIncomingStartRequest:(id)arg1;
- (void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(_Bool *)arg5;
- (_Bool)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_swapSessionForVersionChange;
- (_Bool)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
- (void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(CDUnknownBlockType)arg3;
- (void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOutOfBandData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
- (void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
- (void)sentMessageWithID:(id)arg1 context:(id)arg2;
- (void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
- (void)serializeForIncomingSession:(CDUnknownBlockType)arg1;
- (void)currentDeviceProximityChanged:(_Bool)arg1;
- (void)currentDeviceConnectionChanged:(_Bool)arg1;
- (void)sessionFailedToCancelMessageUUIDs:(id)arg1;
- (void)sendData:(id)arg1 options:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)sendData:(id)arg1 options:(struct NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (void)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;

@end
