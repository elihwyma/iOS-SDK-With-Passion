/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class AVAsset, NSString, PHAsset, PXActionPerformer, PXAssetEditOperationManager, PXAssetVariationCollectionViewCell, PXAssetVariationRenderProvider, PXAssetVariationsDataSource, PXAssetVariationsDataSourceManager, PXOneUpPresentation, PXPhotoKitAssetActionManager, PXPhotosDetailsContext, PXPhotosDetailsLoadCoordinationToken, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UICollectionView, UIImage, UILabel, _PXAssetVariationsContentView;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsAssetVariationsWidget : NSObject <Swift>

{
    UICollectionView *_collectionView;
    PXAssetVariationsDataSourceManager *_dataSourceManager;
    struct CGSize _contentSize;
    PXPhotoKitAssetActionManager *_actionManager;
    PXAssetVariationRenderProvider *_previewRenderProvider;
    PXActionPerformer *_actionPerformer;
    _PXAssetVariationsContentView *_contentView;
    UILabel *_failureView;
    _Bool _didSetInitialScrollPosition;
    int _placeholderImageRequestID;
    int _existingVideoRequestID;
    struct {
        _Bool views;
        _Bool viewsConfiguration;
        _Bool initialScrollPosition;
        _Bool layout;
        _Bool disclosureTitle;
        _Bool renderProvider;
        _Bool visibleCells;
        _Bool placeholderImage;
        _Bool existingVideo;
        _Bool metrics;
    } _needsUpdateFlags;
    _Bool _isDismissingForSelection;
    _Bool __contentViewVisible;
    _Bool _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    NSString *_localizedDisclosureTitle;
    PXAssetVariationCollectionViewCell *_measuringCell;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    PXAssetVariationsDataSource *__dataSource;
    PXPhotosDetailsLoadCoordinationToken *__loadCoordinationToken;
    PHAsset *__asset;
    UIImage *__placeholderImage;
    AVAsset *__existingVideoAsset;
    struct UIEdgeInsets _collectionContentInsets;
    struct UIEdgeInsets __contentInsets;
}

@property (retain, nonatomic, setter=_setLocalizedDisclosureTitle:) NSString *localizedDisclosureTitle;
@property (nonatomic, setter=_setContentInsets:) struct UIEdgeInsets _contentInsets;
@property (retain, nonatomic, setter=_setDataSource:) PXAssetVariationsDataSource *_dataSource;
@property (retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (nonatomic, getter=_isContentViewVisible, setter=_setContentViewVisible:) _Bool _contentViewVisible;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (retain, nonatomic, setter=_setAsset:) PHAsset *_asset;
@property (retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage;
@property (retain, nonatomic, setter=_setExistingVideoAsset:) AVAsset *_existingVideoAsset;
@property (nonatomic, readonly) PXAssetVariationCollectionViewCell *measuringCell;
@property (nonatomic, readonly) struct UIEdgeInsets collectionContentInsets;
@property (nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;

+ (void)preloadResources;

- (id)init;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)_needsUpdate;
- (void)_invalidateLayout;
- (void)_setNeedsUpdate;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)contentViewWillAppear;
- (void)contentViewDidDisappear;
- (void)userDidSelectDisclosureControl;
- (void)_invalidateExistingVideo;
- (void)_updateExistingVideoIfNeeded;
- (void)_handleExistingVideoResult:(id)arg1 info:(id)arg2;
- (void)_invalidatePlaceholderImage;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_handlePlaceholderImageResult:(id)arg1 info:(id)arg2;
- (void)_invalidateRenderProvider;
- (void)_updateRenderProviderIfNeeded;
- (void)_invalidateVisibleCells;
- (void)_updateVisibleCellsIfNeeded;
- (void)_invalidateDisclosureTitle;
- (void)_updateDisclosureTitleIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateViews;
- (void)_updateViewsIfNeeded;
- (void)_invalidateviewsConfiguration;
- (void)_updateviewsConfigurationIfNeeded;
- (void)_invalidateInitialScrollPosition;
- (void)_updateInitialScrollPositionIfNeeded;
- (void)_contentViewDidLayoutSubviews;
- (id)_newLayoutForSize:(struct CGSize)arg1;
- (struct CGSize)_itemSizeForViewSize:(struct CGSize)arg1;
- (id)_cellReuseIdentifierForVariationType:(long long)arg1;
- (void)_presentStatusAlert;
- (void)_commitEditWithVariationType:(long long)arg1;
- (void)_invalidateMetrics;
- (void)_updateMetricsIfNeeded;

@end
