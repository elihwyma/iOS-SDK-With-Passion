/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUAssetActionManager, PUAssetsDataSourceManager, PUBrowsingViewModel, PUContentTileProvider, PULoadingStatusManager, PUMediaProvider, PUOneUpMergedVideoProvider, PUTileAnimator, PXAssetEditOperationManager, PXGestureProvider, PXPhotosDetailsContext;

@protocol PXAssetImportStatusManager;

@interface PUBrowsingSession : NSObject

{
    PUAssetsDataSourceManager *_dataSourceManager;
    PUMediaProvider *_mediaProvider;
    PUAssetActionManager *_actionManager;
    PUBrowsingViewModel *_viewModel;
    PUContentTileProvider *_contentTileProvider;
    PULoadingStatusManager *_loadingStatusManager;
    id <PXAssetImportStatusManager> _importStatusManager;
    PXPhotosDetailsContext *_photosDetailsContext;
    PXGestureProvider *_gestureProvider;
    PUOneUpMergedVideoProvider *_mergedVideoProvider;
    PXAssetEditOperationManager *_editOperationManager;
    PUTileAnimator *_tileAnimator;
}

@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (retain, nonatomic) PUTileAnimator *tileAnimator;
@property (retain, nonatomic) PUContentTileProvider *contentTileProvider;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PUAssetActionManager *actionManager;
@property (nonatomic, readonly) PULoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) id <PXAssetImportStatusManager> importStatusManager;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (nonatomic, readonly) PXGestureProvider *gestureProvider;
@property (nonatomic, readonly) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void *)arg3;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 gestureProvider:(id)arg5 importStatusManager:(id)arg6;
- (void)configureTilingView:(id)arg1;

@end
