/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSString, br_pacer, brc_task_tracker;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumerator : NSObject

{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    _Bool _readyForIndexing;
    unsigned long long _flushedNotifRank;
    brc_task_tracker *_tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

+ (id)fileProviderManager;
+ (void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)dropRecentsForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)maxNotifRankWasFlushed;
- (id)initWithAccountSession:(id)arg1;
- (void)dropIndexForClientZone:(id)arg1;
- (void)fileObjectID:(id)arg1 isNoLongerIndexableForNotifRank:(unsigned long long)arg2 itemIsLive:(_Bool)arg3;
- (void)_signalActiveSetDidChange;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (id)changeTokenForNotifRank:(unsigned long long)arg1;
- (void)_deleteAllRanks;
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)garbageCollectRanksPreceding:(unsigned long long)arg1;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_activeSetDidChange;
- (void)enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
