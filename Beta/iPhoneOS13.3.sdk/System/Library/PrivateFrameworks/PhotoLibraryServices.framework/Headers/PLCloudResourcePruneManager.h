/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    _Bool _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)init;
- (void)dealloc;
- (void)stop;
- (id)_identifierForResource:(id)arg1;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (long long)_totalPurgeableAmountForUrgency:(long long)arg1;
- (long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2;
- (struct __CFDictionary *)_handleCacheDeletePurge:(int)arg1 info:(struct __CFDictionary *)arg2;
- (struct __CFDictionary *)_handleCacheDeletePurgeable:(int)arg1 info:(struct __CFDictionary *)arg2;
- (void)_handleCacheDeleteRegistration;
- (void)updateCacheDeletePurgeableAmount;
- (void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)pruneStatusForDebug:(_Bool)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (long long)_localResourcesSize;
- (long long)diskSpaceToPrune;
- (id)_predicateForPruneWithUrgency:(long long)arg1;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;

@end
