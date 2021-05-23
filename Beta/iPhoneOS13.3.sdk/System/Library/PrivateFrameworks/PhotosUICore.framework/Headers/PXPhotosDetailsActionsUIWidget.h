/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSString, PHFetchResult, PXActionPerformer, PXActionRowTile, PXOneUpPresentation, PXPhotoKitAssetCollectionActionManager, PXPhotosDataSource, PXPhotosDetailsActionsSpecManager, PXPhotosDetailsContext, PXPhotosDetailsViewModel, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetSpec;

@protocol PXActionPerformerDelegate, PXAnonymousView, PXTileAnimator, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsActionsUIWidget : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    _Bool _ensureTransition;
    struct {
        _Bool peopleFetchResult;
        _Bool actionManager;
        _Bool allowedActionTypes;
        _Bool performableActionTypes;
        _Bool rowHeight;
        _Bool layout;
    } _needsUpdateFlags;
    _Bool _allowRevealInMomentAction;
    _Bool _allowCreateMemoryAction;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXWidgetSpec *_spec;
    PXPhotosDetailsContext *_context;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    PXTilingController *__tilingController;
    id <PXTileAnimator> __tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    NSMutableSet *__tilesInUse;
    PXReusableObjectPool *__tileReusePool;
    PXPhotosDataSource *__photosDataSource;
    PHFetchResult *__peopleFetchResult;
    PXPhotoKitAssetCollectionActionManager *__assetCollectionActionManager;
    NSArray *__allowedActionTypes;
    NSArray *__performableActionTypes;
    PXPhotosDetailsViewModel *__viewModel;
    PXPhotosDetailsActionsSpecManager *__specManager;
    PXActionRowTile *__measuringActionRowTile;
    double __rowHeight;
    PXActionPerformer *__activePerformer;
    struct CGPoint _lastNormalizedTapPosition;
}

@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) id <PXTileAnimator> _tileAnimator;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXReusableObjectPool *_tileReusePool;
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource;
@property (retain, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult;
@property (retain, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
@property (retain, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes;
@property (retain, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes;
@property (retain, nonatomic, setter=_setViewModel:) PXPhotosDetailsViewModel *_viewModel;
@property (nonatomic, readonly) PXPhotosDetailsActionsSpecManager *_specManager;
@property (nonatomic, readonly) PXActionRowTile *_measuringActionRowTile;
@property (nonatomic, setter=_setRowHeight:) double _rowHeight;
@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer;
@property (nonatomic) struct CGPoint lastNormalizedTapPosition;
@property (nonatomic) _Bool allowRevealInMomentAction;
@property (nonatomic) _Bool allowCreateMemoryAction;
@property (weak, nonatomic) id <PXActionPerformerDelegate> actionPerformerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;

- (id)init;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)_needsUpdate;
- (void)_invalidateLayout;
- (void)_setNeedsUpdate;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)_extendedTraitCollection;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_updateLayoutIfNeeded;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)_loadTilingController;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)_createNewLayout;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)actionRowTileSelected:(id)arg1 tapPositionInTile:(struct CGPoint)arg2;
- (void)configureActionButtonTile:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_invalidatePeopleFetchResult;
- (void)_updatePeopleFetchResultIfNeeded;
- (void)_invalidateAllowedActionTypes;
- (void)_updateAllowedActionTypesIfNeeded;
- (void)_invalidatePerformableActionTypes;
- (void)_updatePerformableActionTypesIfNeeded;
- (void)_invalidateActionManager;
- (void)_updateActionManagerIfNeeded;
- (void)_invalidateRowHeight;
- (void)_updateRowHeightIfNeeded;
- (void)_invalidateLayoutEnsureTransition;

@end
