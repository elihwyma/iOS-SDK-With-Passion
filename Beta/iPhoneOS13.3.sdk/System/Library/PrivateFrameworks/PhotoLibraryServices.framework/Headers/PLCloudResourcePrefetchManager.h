/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, PLCloudPhotoLibraryManager, PLCloudResourcePruneManager, PLPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSMutableSet *_legacyInflightResources;
    NSMutableSet *_rmInflightResoures;
    long long _defaultPrefetchMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    _Bool _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_identifierForResourceDownload:(id)arg1;
+ (id)_legacyIdentifierForItemIdentifier:(id)arg1 cplType:(unsigned long long)arg2;

- (id)init;
- (void)invalidate;
- (void)stop;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2 library:(id)arg3;
- (void)startAutomaticPrefetch;
- (void)handleOptimizeModeChange;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)arg1 withReason:(id)arg2;
- (void)_cleanupInflightResources;
- (id)prefetchStatusForDebug:(_Bool)arg1;
- (void)prefetchResourcesWithPredicates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reloadDownloadOriginalsSetting;
- (void)_reloadDefaultDownload;
- (id)_inflightResources;
- (void)_inflightResourcesAddIdentifier:(id)arg1 cplResource:(id)arg2;
- (void)_inflightResourcesRemoveIdentifier:(id)arg1 cplResource:(id)arg2;
- (_Bool)_canPrefetch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)_clearPrefetchState;
- (void)_startPrefetchNextBatch;
- (void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(_Bool)arg2 prefetchSignpostId:(unsigned long long)arg3;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2;
- (long long)diskSpaceBudgetForThumbnails;
- (long long)diskSpaceBudgetForNonThumbnails;
- (id)_lastCompletePrefetchDate;
- (void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
