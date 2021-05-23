/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PHAsset, PXAssetEditOperationManager, PXAssetVariationsDataSource;

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager

{
    struct {
        _Bool pendingVariationType;
        _Bool currentVariationType;
        _Bool dataSource;
    } _needsUpdateFlags;
    _Bool _didCreateInitialDataSource;
    PHAsset *_asset;
    PXAssetEditOperationManager *_editOperationManager;
    PHAsset *_currentAsset;
    long long _pendingVariationType;
    long long _currentVariationType;
}

@property (retain, nonatomic) PHAsset *currentAsset;
@property (nonatomic) long long pendingVariationType;
@property (nonatomic) long long currentVariationType;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (nonatomic, readonly) PXAssetVariationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;
- (id)initWithAsset:(id)arg1 editOperationManager:(id)arg2;
- (id)_variationOptionWithType:(long long)arg1 asset:(id)arg2;
- (void)_invalidatePendingVariationType;
- (void)_updatePendingVariationTypeIfNeeded;
- (void)_invalidateCurrentVariationType;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_invalidateDataSource;
- (void)_updateDataSourceIfNeeded;
- (void)_assetEditOperationsDidChange;

@end
