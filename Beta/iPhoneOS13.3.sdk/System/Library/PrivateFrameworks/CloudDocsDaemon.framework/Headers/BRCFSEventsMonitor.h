/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCFSEventsPersistedState, BRCFairSource, BRCRelativePath, BRCVolume, NSMutableArray, NSString, PQLConnection;

@protocol BRCFSEventsDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface BRCFSEventsMonitor : NSObject

{
    BRCAccountSession *_session;
    NSString *_name;
    _Atomic int _suspendCount;
    _Atomic int _resetCount;
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    NSObject<OS_dispatch_queue> *_processQueue;
    BRCFairSource *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    unsigned long long _maxFSEventQueueSize;
    unsigned long long _fseventProcessBatchSize;
    _Bool _hasMarkSelf;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _drainEvents;
    BRCVolume *_volume;
    _Bool _isCancelled;
    BRCRelativePath *_root;
    id <BRCFSEventsDelegate> _delegate;
    PQLConnection *_db;
}

@property (weak) id <BRCFSEventsDelegate> delegate;
@property (retain, nonatomic, setter=setDB:) PQLConnection *db;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (nonatomic, readonly) _Bool volumeIsCaseSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)dealloc;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)_cancel;
- (void)_close;
- (void)resetWithReason:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)flushStream;
- (_Bool)openWithRoot:(id)arg1 isImmutableRoot:(_Bool)arg2 volume:(id)arg3 error:(id *)arg4;
- (id)initWithAccountSession:(id)arg1 name:(id)arg2;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (void)_updatePersistedStateWithState:(id)arg1;
- (void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2;
- (_Bool)setUpRoot:(id)arg1 isImmutableRoot:(_Bool)arg2 volume:(id)arg3 error:(id *)arg4;
- (_Bool)setUpStreamSynchronously:(_Bool)arg1 reason:(id)arg2 error:(id *)arg3;
- (_Bool)_queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;
- (void)processFseventBatch;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(_Bool)arg6;
- (void)resetWithReason:(id)arg1 dropFSEventID:(_Bool)arg2;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)stopWatcher;
- (_Bool)openWithRoot:(id)arg1 volume:(id)arg2 error:(id *)arg3;
- (void)queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;

@end
