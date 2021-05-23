/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <AssetExplorer/AEAssetPackageGenerator.h>

#import <AssetExplorer/Swift-Protocol.h>

@class AEAssetPackage, NSError, NSObject, NSProgress, NSString, PHAsset, PHResourceDownloadRequest, PXAssetReference;

@protocol OS_dispatch_group, OS_dispatch_queue, PUDisplayAsset;

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <Swift>

{
    PXAssetReference *_sourceAssetReference;
    NSObject<OS_dispatch_queue> *__packagerIvarIsolationQueue;
    NSObject<OS_dispatch_group> *__packagerWorkGroup;
    PHResourceDownloadRequest *__downloadRequest;
    AEAssetPackage *__ivarQueue_currentPackage;
    NSError *__ivarQueue_lastError;
    PHAsset *__asset;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *_packagerWorkGroup;
@property (nonatomic, readonly) PHResourceDownloadRequest *_downloadRequest;
@property (retain, nonatomic, setter=_setIvarQueueCurrentPackage:) AEAssetPackage *_ivarQueue_currentPackage;
@property (retain, nonatomic, setter=_setIvarQueueLastError:) NSError *_ivarQueue_lastError;
@property (retain, nonatomic) PHAsset *_asset;
@property (copy, nonatomic, readonly) PXAssetReference *sourceAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) id <PUDisplayAsset> sourceAsset;

- (id)initWithAsset:(id)arg1;
- (id)initWithAssetReference:(id)arg1;
- (void)requestReviewAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelReviewAssetRequest;
- (void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2;
- (void)beginGeneratingWithFinalizer:(id)arg1;
- (_Bool)retrieveGeneratedPackageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_callCompletionWithResult:(CDUnknownBlockType)arg1;
- (void)_downloadIfNeededBeforeGeneratingWithFinalizer:(id)arg1;
- (void)_downloadBeforeBeforeGeneratingWithFinalizer:(id)arg1;
- (void)_beginGeneratingWithResourceInfo:(id)arg1 error:(id)arg2 finalizer:(id)arg3;

@end
