/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager;

@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    _Bool _enqueuedOperation;
}

- (id)init;
- (void)invalidate;
- (void)stop;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (void)updateCacheDeletePurgeableAmount;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)handleOptimizeModeChange;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(_Bool)arg1;
- (id)statusForDebug:(_Bool)arg1;

@end
