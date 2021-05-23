/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetRequestPlanner, CKDCancelTokenGroup, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDUploadAssetsOperation : CKDDatabaseOperation

{
    _Bool _atomic;
    _Bool _temporary;
    CDUnknownBlockType _uploadPreparationBlock;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToUpload;
    NSMapTable *_uploadTasksByPackages;
    NSMutableArray *_packageManifests;
    NSMutableArray *_openedPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned long long _maxPackageUploadsPerBatch;
    CKDAssetRequestPlanner *_assetRequestPlanner;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSMapTable *uploadTasksByPackages;
@property (retain, nonatomic) NSMutableArray *packageManifests;
@property (retain, nonatomic) NSMutableArray *openedPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageUploadsPerBatch;
@property (retain, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) _Bool temporary;
@property (copy, nonatomic) CDUnknownBlockType uploadPreparationBlock;
@property (copy, nonatomic) CDUnknownBlockType uploadProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType uploadCompletionBlock;
@property (nonatomic) _Bool atomic;

+ (long long)isPredominatelyDownload;

- (void)cancel;
- (void)main;
- (void)finishWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)CKStatusReportLogGroups;
- (void)_didPrepareAsset:(id)arg1;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (_Bool)_prepareForUpload;
- (_Bool)_fetchUploadTokens;
- (_Bool)_upload;
- (void)_didUploadAsset:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_openPackage:(id)arg1;
- (_Bool)_planSectionsForPackage:(id)arg1 error:(id *)arg2;
- (void)_didGetChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;
- (void)_didPrepareAssetBatch:(id)arg1 error:(id)arg2;
- (void)_failAllItemsInAssetBatch:(id)arg1 error:(id)arg2;
- (_Bool)_didFetchUploadTokensForAssetTokenRequest:(id)arg1 error:(id)arg2 newError:(id *)arg3;
- (void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_closePackage:(id)arg1;
- (void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_didUploadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_didUploadPackageWithTask:(id)arg1;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didPutChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;
- (void)_closeAllPackages;
- (void)_removePackageManifests;
- (_Bool)_fetchAssetRereferenceRecords;

@end
