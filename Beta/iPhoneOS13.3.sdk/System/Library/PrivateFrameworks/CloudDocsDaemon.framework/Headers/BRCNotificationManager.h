/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCClientRanksPersistedState, BRCXPCClient, BRNotificationQueue, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationManager : NSObject

{
    BRCAccountSession *_session;
    BRCClientRanksPersistedState *_state;
    NSHashTable *_pipes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;
    _Atomic unsigned long long _activeAliasQueries;
    NSMutableSet *_additionalUpdatesItemRowID;
    unsigned long long _previousMaxRank;
    NSMutableDictionary *_watchersByFileObjectID;
    NSMapTable *_fileObjectIDByWatcher;
    _Bool _isCancelled;
}

@property (readonly) _Bool hasActiveAliasWatchers;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)queueUpdateForItemAtRowID:(unsigned long long)arg1;
- (void)flushUpdatesWithRank:(unsigned long long)arg1;
- (void)unregisterPipeAsWatcher:(id)arg1;
- (void)_queueAdditionalUpdates;
- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (_Bool)hasWatcherForDocumentID:(id)arg1;
- (void)registerPipe:(id)arg1 asWatcherForFileObjectID:(id)arg2;
- (void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)pipeWithReceiver:(id)arg1;
- (void)queueProgressUpdates:(id)arg1;
- (void)queueUpdate:(id)arg1;
- (void)fetchLastFlushedRankWithReply:(CDUnknownBlockType)arg1;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)arg1;
- (void)pipeDelegateInvalidated:(id)arg1;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
