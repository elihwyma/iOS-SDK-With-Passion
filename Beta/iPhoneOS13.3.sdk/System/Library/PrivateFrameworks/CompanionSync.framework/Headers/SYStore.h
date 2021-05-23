/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSString, SYAtomicFIFO, SYPersistentStore, SYService, SYStoreResetSessionOwner, SYStoreSessionOwner;

@protocol OS_dispatch_queue, SYSerialization, SYStoreDelegate;

@interface SYStore : NSObject

{
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    struct {
        unsigned int delegateWillUpdate:1;
        unsigned int delegateWillUpdateWithCount:1;
        unsigned int delegateDidUpdate:1;
        unsigned int delegateDidCompleteFullSync:1;
        unsigned int delegateAllObjectsDeleted:1;
        unsigned int delegateAllObjects:1;
        unsigned int delegateShouldPerformInitialSync:1;
        unsigned int delegateBeginSyncingAllObjects:1;
        unsigned int delegateShouldDeleteOnFailedSync:1;
        unsigned int delegateErrorInFullSync:1;
        unsigned int delegateStoreEncounteredError:1;
        unsigned int delegateDidPair:1;
        unsigned int delegateDidUnpair:1;
        unsigned int delegateSentMessage:1;
        unsigned int delegatePeerProcessedMessage:1;
        unsigned int delegateSentLastSyncMessage:1;
    } _flags;
    _Bool _allowsDeletes;
    id <SYStoreDelegate> _delegate;
    id <SYSerialization> _serializer;
    long long _maxBytesInFlight;
    SYService *_syService;
    SYStoreSessionOwner *_sessionOwner;
    SYStoreResetSessionOwner *_pendingResetSessionOwner;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SYAtomicFIFO *_sessionQueue;
    SYPersistentStore *_persistentStore;
}

@property (nonatomic, readonly) _Bool inDeltaSync;
@property (nonatomic, readonly) SYService *syService;
@property (retain, nonatomic) SYStoreSessionOwner *sessionOwner;
@property (retain, nonatomic) SYStoreResetSessionOwner *pendingResetSessionOwner;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) SYAtomicFIFO *sessionQueue;
@property (nonatomic, readonly) SYPersistentStore *persistentStore;
@property (nonatomic) long long priority;
@property (weak, nonatomic) id <SYStoreDelegate> delegate;
@property (nonatomic) double timeToLive;
@property (retain, nonatomic) id <SYSerialization> serializer;
@property (nonatomic) long long maxBytesInFlight;
@property (copy, nonatomic) NSDictionary *customIDSDeliveryOptions;
@property (nonatomic) _Bool allowsDeletes;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic) unsigned int deliveryQOS;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) _Bool hasCompletedFullSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObject:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (_Bool)deleteObject:(id)arg1 error:(id *)arg2;
- (void)deleteObject:(id)arg1;
- (id)initWithService:(id)arg1;
- (void)transaction:(CDUnknownBlockType)arg1;
- (_Bool)resume:(id *)arg1;
- (id)dataFromChange:(id)arg1;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)setNeedsFullSync;
- (void)updateObject:(id)arg1;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (id)encodeSYObject:(id)arg1;
- (id)decodeSYObject:(id)arg1;
- (void)_signalNextQueuedSession;
- (void)_enqueueDeltaSessionWithChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4 reportError:(CDUnknownBlockType)arg5;
- (_Bool)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (_Bool)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (_Bool)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)_transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4 reportError:(CDUnknownBlockType)arg5;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)_startIncomingSession:(id)arg1;
- (_Bool)_startResetSyncSession:(id)arg1 error:(id *)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)addObject:(id)arg1 error:(id *)arg2;
- (_Bool)updateObject:(id)arg1 error:(id *)arg2;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (id)initWithServiceName:(id)arg1 priority:(long long)arg2 isMasterStore:(_Bool)arg3;
- (void)transaction:(CDUnknownBlockType)arg1 handlingError:(CDUnknownBlockType)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)blockingTransaction:(CDUnknownBlockType)arg1;
- (void)blockingTransaction:(CDUnknownBlockType)arg1 handlingError:(CDUnknownBlockType)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4;
- (void)service:(id)arg1 incomingData:(id)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 identifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)willBeginDeltaSync;
- (void)didEndDeltaSync;

@end
