/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray, NSMutableIndexSet, NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession

{
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    _Bool _hasReceivedEndSync;
    CDUnknownBlockType _completion;
    struct os_unfair_lock_s _queueLock;
    NSMutableArray *_incomingBatchQueue;
    _Bool canRestart;
    _Bool canRollback;
}

- (id)initWithService:(id)arg1;
- (void)_sendEndSessionResponse:(id)arg1;
- (void)_continueProcessing;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)_handleBatchChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleEndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
