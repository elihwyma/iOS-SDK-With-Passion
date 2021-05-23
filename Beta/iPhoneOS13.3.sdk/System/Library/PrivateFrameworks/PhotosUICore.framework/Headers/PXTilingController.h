/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString, PXTileStatePool, PXTilingChange, PXTilingControllerDebugInfo, PXTilingCoordinateSpace, PXTilingCoordinateSpaceConverter, PXTilingLayout, PXTilingScrollInfo;

@protocol PXTileAnimator, PXTileSource, PXTilingControllerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTilingDebugDelegate, PXTilingScrollController;

@interface PXTilingController : NSObject

{
    _Bool _isPerformingUpdates;
    _Bool _hasScheduledUpdate;
    struct {
        _Bool scrollControllerMetrics;
        _Bool pagedRect;
        _Bool layoutMetrics;
        _Bool layoutPreferredVisibleOrigin;
        _Bool layoutPosition;
        _Bool layoutVisibleRect;
        _Bool layoutPreparation;
        _Bool tiles;
        _Bool preheating;
        _Bool maxPreheatPadding;
        _Bool scrollInfo;
    } _needsUpdateFlags;
    struct {
        _Bool respondsToInitialVisibleOriginForLayout;
        _Bool respondsToTargetVisibleOriginForLayoutProposedVisibleOrigin;
        _Bool respondsToScrollInfoForLayout;
    } _scrollDelegateFlags;
    struct {
        _Bool respondsToPrepareForChange;
        _Bool respondsToTileIdentifierConverterForChange;
        _Bool respondsToTransitionAnimationCoordinatorForChange;
    } _transitionDelegateFlags;
    _Bool _hasInitializedLayout;
    struct PXTileIdentifier *_identifierBuffer;
    struct PXTileGeometry *_geometryBuffer;
    unsigned long long _bufferCount;
    _Bool _shouldAggressivelyEvictTileCaches;
    PXTilingChange *__currentChange;
    PXTilingLayout *_targetLayout;
    PXTilingLayout *_currentLayout;
    id <PXTilingScrollController> _scrollController;
    id <PXTileSource> _tileSource;
    id <PXTileAnimator> _tileAnimator;
    id <PXTilingControllerScrollDelegate> _scrollDelegate;
    id <PXTilingControllerTransitionDelegate> _transitionDelegate;
    PXTilingCoordinateSpace *__coordinateSpace;
    void *__coordinateSpaceIdentifier;
    PXTilingCoordinateSpaceConverter *__coordinateSpaceConverter;
    PXTilingLayout *__layoutWithInitializedVisibleOrigin;
    PXTilingScrollInfo *__scrollInfo;
    PXTileStatePool *__tileStates;
    NSMutableIndexSet *__dirtyTileIndexes;
    NSMutableArray *__preheatRecords;
    id <PXTilingControllerObserver> _observer;
    NSArray *_compositionInvalidationContexts;
    id <PXTilingDebugDelegate> _debugDelegate;
    struct CGSize __referenceSize;
    struct CGPoint __updatedPreferredVisibleOrigin;
    struct CGPoint __layoutDesiredOrigin;
    struct UIEdgeInsets __contentInset;
    struct CGRect __activeRect;
    struct CGRect __visibleRect;
    struct CGRect __pagedRect;
    struct CGRect __cachedRect;
    struct CGRect __dirtyRect;
    struct UIEdgeInsets __maxPreheatPadding;
}

@property (nonatomic, readonly) PXTilingCoordinateSpace *_coordinateSpace;
@property (nonatomic, readonly) void *_coordinateSpaceIdentifier;
@property (nonatomic, readonly) PXTilingCoordinateSpaceConverter *_coordinateSpaceConverter;
@property (retain, nonatomic, setter=_setCurrentLayout:) PXTilingLayout *currentLayout;
@property (retain, nonatomic, setter=_setTargetLayout:) PXTilingLayout *targetLayout;
@property (weak, nonatomic, setter=_setLayoutWithInitializedVisibleOrigin:) PXTilingLayout *_layoutWithInitializedVisibleOrigin;
@property (nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize;
@property (nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset;
@property (nonatomic, setter=_setActiveRect:) struct CGRect _activeRect;
@property (nonatomic, setter=_setVisibleRect:) struct CGRect _visibleRect;
@property (nonatomic, setter=_setUpdatedPreferredVisibleOrigin:) struct CGPoint _updatedPreferredVisibleOrigin;
@property (nonatomic, setter=_setLayoutDesiredOrigin:) struct CGPoint _layoutDesiredOrigin;
@property (copy, nonatomic, setter=_setScrollInfo:) PXTilingScrollInfo *_scrollInfo;
@property (nonatomic, setter=_setPagedRect:) struct CGRect _pagedRect;
@property (nonatomic, setter=_setCachedRect:) struct CGRect _cachedRect;
@property (nonatomic, readonly) PXTileStatePool *_tileStates;
@property (nonatomic, readonly) PXTilingChange *_currentChange;
@property (nonatomic, setter=_setDirtyRect:) struct CGRect _dirtyRect;
@property (nonatomic, readonly) NSMutableIndexSet *_dirtyTileIndexes;
@property (nonatomic, readonly) NSMutableArray *_preheatRecords;
@property (nonatomic, setter=_setMaxPreheatPadding:) struct UIEdgeInsets _maxPreheatPadding;
@property (weak, nonatomic) id <PXTilingControllerObserver> observer;
@property (copy, nonatomic) NSArray *compositionInvalidationContexts;
@property (nonatomic, readonly) struct CGRect layoutContentBounds;
@property (nonatomic, readonly) struct CGRect layoutScrollBounds;
@property (nonatomic, readonly) struct CGPoint layoutPreferredOrigin;
@property (nonatomic, readonly) struct CGPoint layoutOrigin;
@property (nonatomic, readonly) PXTilingScrollInfo *scrollInfo;
@property (weak, nonatomic) id <PXTilingDebugDelegate> debugDelegate;
@property (nonatomic, readonly) PXTilingControllerDebugInfo *debugInfo;
@property (weak, nonatomic) id <PXTilingScrollController> scrollController;
@property (weak, nonatomic) id <PXTileSource> tileSource;
@property (weak, nonatomic) id <PXTileAnimator> tileAnimator;
@property (weak, nonatomic) id <PXTilingControllerScrollDelegate> scrollDelegate;
@property (weak, nonatomic) id <PXTilingControllerTransitionDelegate> transitionDelegate;
@property (nonatomic) _Bool shouldAggressivelyEvictTileCaches;
@property (nonatomic, readonly) void *contentCoordinateSpaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)initWithLayout:(id)arg1;
- (void)updateLayout;
- (_Bool)_needsUpdate;
- (void)beginUpdate;
- (void)endUpdate;
- (void)_invalidateRect:(struct CGRect)arg1;
- (void)updateMetrics;
- (void)_setNeedsUpdate;
- (void)requestFocus;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_invalidatePreheating;
- (void)_updatePreheatingIfNeeded;
- (void)tilingLayout:(id)arg1 invalidatedWithContext:(id)arg2;
- (void)transitionToLayout:(id)arg1;
- (struct PXTileIdentifier)tileIdentifierForTile:(void *)arg1;
- (_Bool)getTile:(out void **)arg1 geometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileWithIdentifier:(struct PXTileIdentifier)arg5;
- (struct PXTileIdentifier)hitTestTileAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)registerPreheatHandler:(id)arg1 withPadding:(struct UIEdgeInsets)arg2 tileGroup:(unsigned long long)arg3 context:(void *)arg4;
- (void)unregisterPreheatHandler:(id)arg1 context:(void *)arg2;
- (id)_indexesOfVisibleTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2;
- (void)_handleTileAnimationCompletionWithIndex:(unsigned long long)arg1;
- (id)_preheatRecordForPreheatHandler:(id)arg1 context:(void *)arg2 createIfNeeded:(_Bool)arg3;
- (void)_prepareBufferForCount:(unsigned long long)arg1;
- (void)_fillBuffersWithTileStatesAtIndexes:(id)arg1;
- (void)_markRectAsCached:(struct CGRect)arg1;
- (void)invalidateScrollControllerMetrics;
- (void)invalidateLayoutPreferredVisibleOrigin;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (void)setLayoutOrigin:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromLayout:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromLayout:(struct CGRect)arg1;
- (id)convertScrollInfoFromLayout:(id)arg1;
- (void)_ensureCurrentChange;
- (id)_currentChangeIfExists;
- (void)_discardCurrentChange;
- (void)_invalidateScrollControllerMetrics;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_invalidateLayoutMetrics;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_invalidateLayoutPreferredVisibleOrigin;
- (void)_updateLayoutPreferredVisibleOriginIfNeeded;
- (void)_invalidateLayoutPosition;
- (void)_updateLayoutPositionIfNeeded;
- (void)_invalidateLayoutVisibleRect;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_invalidateLayoutPreparation;
- (void)_updateLayoutPreparationIfNeeded;
- (void)_invalidatePagedRect;
- (void)_updatePagedRectIfNeeded;
- (void)_invalidateAllCachedRects;
- (void)_invalidateCachesOutsideRect:(struct CGRect)arg1;
- (void)_invalidateTiles;
- (void)_updateTilesIfNeeded;
- (void)_invalidateMaxPreheatPadding;
- (void)_updateMaxPreheatPaddingIfNeeded;
- (void)_invalidateScrollInfo;
- (void)_updateScrollInfoIfNeeded;
- (void)_updateDebugDelegateIfNeeded;
- (id)imageTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (id)titleSubtitleTileWithIdentifier:(struct PXTileIdentifier)arg1;

@end
