/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetsOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _downloadPreparationBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _downloadCommandBlock;
    CDUnknownBlockType _downloadCompletionBlock;
    CDUnknownBlockType _urlFilledOutBlock;
    NSMutableDictionary *_keyOrErrorForHostname;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToDownload;
    NSArray *_packageIndexSets;
    NSArray *_assetsToDownloadInMemory;
    NSArray *_assetURLInfosToFillOut;
    NSMutableArray *_MMCSItemsToDownload;
    NSMutableArray *_MMCSItemsToDownloadInMemory;
    NSMapTable *_downloadTasksByPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned long long _maxPackageDownloadsPerBatch;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *packageIndexSets;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownload;
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory;
@property (retain, nonatomic) NSMapTable *downloadTasksByPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (copy, nonatomic) CDUnknownBlockType downloadPreparationBlock;
@property (copy, nonatomic) CDUnknownBlockType downloadProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType downloadCommandBlock;
@property (copy, nonatomic) CDUnknownBlockType downloadCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType urlFilledOutBlock;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;

- (void)cancel;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (_Bool)_download;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)CKStatusReportLogGroups;
- (_Bool)_prepareForDownload;
- (_Bool)_postProcess;
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg1;
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;
- (void)_removeUntrackedMMCSItems:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didDownloadMMCSItem:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(_Bool)arg3;
- (void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(_Bool)arg2;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_didDownloadMMCSItems:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;

@end
