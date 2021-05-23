/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableArray, NSString, PXAssetBadgeManager, PXAssetsDataSource, PXAssetsDataSourceManager, PXAssetsTilingLayout, PXMediaProvider, PXReusableObjectPool, PXScrollViewSpeedometer, PXSectionedSelectionManager, PXTilingController;

@protocol PXAssetsSceneDelegate;

@interface PXAssetsScene : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    _Bool _hasScheduledUpdate;
    struct {
        _Bool layout;
    } _needsUpdateFlags;
    struct {
        _Bool respondsToTileIdentifierConverterForChange;
        _Bool respondsToWillTransitionToDataSource;
        _Bool respondsToDidTransitionToDataSource;
        _Bool respondsToTransitionAnimationCoordinatorForChange;
    } _delegateFlags;
    _Bool _isAskingForTileIdentifierConverter;
    _Bool _isAskingForTransitionAnimationCoordinator;
    _Bool _animatesContent;
    _Bool _autoplayTilesWaitForInput;
    id <PXAssetsSceneDelegate> _delegate;
    PXTilingController *_tilingController;
    PXMediaProvider *_mediaProvider;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXSectionedSelectionManager *_selectionManager;
    PXAssetBadgeManager *_badgeManager;
    PXScrollViewSpeedometer *_scrollSpeedometer;
    PXReusableObjectPool *_viewTileReusePool;
    PXAssetsDataSource *__dataSource;
    NSMutableArray *__anchors;
    unsigned long long _autoplayBehavior;
}

@property (retain, nonatomic, setter=_setDataSource:) PXAssetsDataSource *_dataSource;
@property (nonatomic, readonly) NSMutableArray *_anchors;
@property (nonatomic) unsigned long long autoplayBehavior;
@property (nonatomic) _Bool autoplayTilesWaitForInput;
@property (weak, nonatomic) id <PXAssetsSceneDelegate> delegate;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) PXAssetBadgeManager *badgeManager;
@property (nonatomic, readonly) PXScrollViewSpeedometer *scrollSpeedometer;
@property (nonatomic, readonly) PXReusableObjectPool *viewTileReusePool;
@property (nonatomic, readonly) PXAssetsTilingLayout *targetLayout;
@property (nonatomic, readonly) PXAssetsTilingLayout *currentLayout;
@property (nonatomic) _Bool animatesContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)needsUpdate;
- (void)setNeedsUpdate;
- (void)_invalidateLayout;
- (void)updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_updateLayoutIfNeeded;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (void)_configureLayout:(id)arg1;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (void)willTransitionToDataSource:(id)arg1;
- (void)_updateDataSourceIfNeeded;
- (_Bool)providesTileForIdentifier:(struct PXTileIdentifier)arg1;
- (void)transitionToLayout:(id)arg1;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4;
- (void)didTransitionToDataSource:(id)arg1;
- (void)_saveAnchorAsset;

@end
