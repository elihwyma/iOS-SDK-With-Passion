/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, CKUploadRequestConfiguration, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSURL;

@protocol CKAssetRepairSchedulerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CKAssetRepairScheduler : NSObject

{
    id <CKAssetRepairSchedulerDelegate> _delegate;
    CKContainer *_container;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    NSURL *_temporaryAssetDirectory;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_uploadOperationQueue;
    NSObject<OS_dispatch_source> *_uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> *_uploadSuspensionTimer;
    NSMutableDictionary *_remainingAssetsToRequestCallbacks;
    NSMutableDictionary *_assetCache;
    NSMutableSet *_confirmedMissingAssets;
    NSMutableSet *_assetsBeingRequested;
    NSMutableSet *_assetsBeingUploaded;
    NSMutableDictionary *_retryCountForAssets;
}

@property (weak, nonatomic) CKContainer *container;
@property (copy, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides;
@property (copy, nonatomic) NSURL *temporaryAssetDirectory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSOperationQueue *requestOperationQueue;
@property (retain, nonatomic) NSOperationQueue *uploadOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *uploadPendingRequestTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *uploadSuspensionTimer;
@property (retain, nonatomic) NSMutableDictionary *remainingAssetsToRequestCallbacks;
@property (retain, nonatomic) NSMutableDictionary *assetCache;
@property (nonatomic, readonly) NSSet *remainingAssets;
@property (nonatomic, readonly) NSSet *confirmedAvailableAssets;
@property (retain, nonatomic) NSMutableSet *confirmedMissingAssets;
@property (retain, nonatomic) NSMutableSet *assetsBeingRequested;
@property (retain, nonatomic) NSMutableSet *assetsBeingUploaded;
@property (retain, nonatomic) NSMutableDictionary *retryCountForAssets;
@property (weak) id <CKAssetRepairSchedulerDelegate> delegate;

+ (long long)repairBatchSizeLimit;
+ (long long)assetSizeEstimate;
+ (id)nameForEvent:(long long)arg1;
+ (long long)estimatedSizeForAssetOrPackage:(id)arg1;
+ (long long)repairBatchCountLimit;
+ (double)requestTimeout;
+ (long long)cacheCountLimit;
+ (long long)cacheSizeLimit;
+ (double)defaultSuspensionTime;
+ (long long)repairRetryCount;
+ (long long)canCopyFromFileURL:(id)arg1 toDirectoryURL:(id)arg2;
+ (long long)packageSizeEstimate;
+ (unsigned long long)remainingCapacityAtURL:(id)arg1 error:(id *)arg2;
+ (unsigned long long)diskSpaceBuffer;

- (void)dealloc;
- (void)cancelAllOperations;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)removeUploadRequestWithRecordID:(id)arg1;
- (_Bool)hasPendingWork;
- (void)addUploadRequestsWithMetadata:(id)arg1 requestBlocks:(id)arg2;
- (void)clearAssetCache;
- (void)tickle;
- (id)allRemainingRequestableAssets;
- (void)respondToEvent:(long long)arg1 withObject:(id)arg2;
- (id)allRemainingUploadableAssets;
- (unsigned long long)cacheSize;
- (unsigned long long)cacheCount;
- (void)scheduleRequestsWithMaxCount:(long long)arg1;
- (void)scheduleUploadBatch;
- (void)scheduleClearAssetCache;
- (void)cacheAsset:(id)arg1 withMetadata:(id)arg2;
- (void)removeAssetFromCacheWithMetadata:(id)arg1;
- (id)clonedAsset:(id)arg1 withError:(id *)arg2;

@end
