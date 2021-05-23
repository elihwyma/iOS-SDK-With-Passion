/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, NSString, PXBasicTileAnimator, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedDataSourceManager, PXRelatedSpecManager, PXRelatedTilingLayout, PXSectionedObjectReference, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXRelatedWidget : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool dataSourceManager;
        _Bool layout;
        _Bool availableNumberOfRows;
        _Bool maximumNumberOfRowsToDisplay;
        _Bool canExpand;
        _Bool hasLoadedContentData;
        _Bool prefetchedDataSources;
    } _needsUpdateFlags;
    _Bool __shouldLoadContentData;
    _Bool __expanded;
    _Bool __canExpand;
    _Bool _hasLoadedContentData;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPhotosDetailsContext *_context;
    PXRelatedDataSourceManager *__dataSourceManager;
    PXRelatedSpecManager *__specManager;
    PXRelatedTilingLayout *__layout;
    PXBasicTileAnimator *__tileAnimator;
    PXTilingController *__tilingController;
    long long __availableNumberOfRows;
    long long __maximumNumberOfRowsToDisplay;
    PXRelatedDataSource *__anchorDataSource;
    NSDictionary *__prefetchedDataSourceByRelatedEntry;
    PXSectionedObjectReference *_highlightedObjectReference;
    PXSectionedObjectReference *_focusedObjectReference;
    struct CGPoint __anchorOffset;
    struct PXSimpleIndexPath __anchorIndexPath;
}

@property (nonatomic, readonly) PXRelatedDataSourceManager *_dataSourceManager;
@property (nonatomic, readonly) PXRelatedSpecManager *_specManager;
@property (nonatomic, readonly) PXRelatedTilingLayout *_layout;
@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, setter=_setShouldLoadContentData:) _Bool _shouldLoadContentData;
@property (nonatomic, setter=_setAvailableNumberOfRows:) long long _availableNumberOfRows;
@property (nonatomic, setter=_setMaximumNumberOfRowsToDisplay:) long long _maximumNumberOfRowsToDisplay;
@property (nonatomic, getter=_isExpanded, setter=_setExpanded:) _Bool _expanded;
@property (nonatomic, setter=_setCanExpand:) _Bool _canExpand;
@property (retain, nonatomic, setter=_setAnchorDataSource:) PXRelatedDataSource *_anchorDataSource;
@property (nonatomic, setter=_setAnchorIndexPath:) struct PXSimpleIndexPath _anchorIndexPath;
@property (nonatomic, setter=_setAnchorOffset:) struct CGPoint _anchorOffset;
@property (nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData;
@property (retain, nonatomic, setter=_setPrefetchedDataSourceByRelatedEntry:) NSDictionary *_prefetchedDataSourceByRelatedEntry;
@property (retain, nonatomic) PXSectionedObjectReference *highlightedObjectReference;
@property (retain, nonatomic) PXSectionedObjectReference *focusedObjectReference;
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
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (id)init;
- (void)installGestureRecognizers;
- (_Bool)_needsUpdate;
- (void)_invalidateLayout;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)extendedTraitCollection;
- (void)loadContentData;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_updateLayoutIfNeeded;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)_loadTilingController;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (_Bool)relatedTilingLayout:(id)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)relatedTilingLayout:(id)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)relatedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (id)relatedEntryForTileIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (struct PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2 layout:(id)arg3;
- (struct PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2;
- (id)relatedEntryAtPoint:(struct CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void *)arg2;
- (id)entryObjectReferenceAtPoint:(struct CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void *)arg2;
- (id)allRelatedEntries;
- (id)photosDataSourceForRelatedEntry:(id)arg1;
- (id)relatedEntryForPhotosDataSource:(id)arg1;
- (struct CGRect)rectOfInterestForRelatedEntry:(id)arg1 inCoordinateSpaceWithIdentifier:(void *)arg2;
- (void)enumerateTilesForRelatedRelatedEntry:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_saveAnchoring;
- (struct CGPoint)_anchorPointForLayoutContentBounds:(struct CGRect)arg1;
- (id)_createPhotosDataSourceForRelatedEntry:(id)arg1;
- (void)_loadContentDataIfNeeded;
- (void)_invalidateDataSourceManager;
- (void)_updateDataSourceManagerIfNeeded;
- (void)_invalidateAvailableNumberOfRows;
- (void)_updateAvailableNumberOfRowsIfNeeded;
- (void)_invalidateMaximumNumberOfRowsToDisplay;
- (void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
- (void)_invalidateCanExpand;
- (void)_updateCanExpandIfNeeded;
- (void)_invalidatePrefetchedDataSources;
- (void)_updatePrefetchedDataSources;
- (void)_invalidateHasLoadedContentData;
- (void)_updateHasLoadedContentDataIfNeeded;

@end
