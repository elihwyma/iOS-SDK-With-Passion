/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, PUReuseQueue, PUTileAnimator, PUTileTransitionCoordinator, PUTileTree, PUTilingLayout;

@protocol PUTilingCoordinateSystem, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate;

@interface PUTilingView : UIScrollView

{
    struct {
        _Bool respondsToDataSourceConverterForTransitionFromLayoutToLayout;
        _Bool respondsToTileTransitionCoordinatorForTransitionFromLayoutWithContext;
        _Bool respondsToTileTransitionCoordinatorForUpdateWithItems;
        _Bool respondsToTileTransitionCoordinatorForChangeFromFrame;
        _Bool respondsToTileTransitionCoordinatorForReattachedTileControllers;
        _Bool respondsToTileTransitionCoordinatorForLayoutInvalidationContext;
        _Bool respondsToCanBypass20069585Check;
    } _tileTransitionDelegateFlags;
    struct {
        _Bool respondsToScrollInfoWithLayout;
        _Bool respondsToInitialVisibleOriginWithLayout;
        _Bool respondsToTargetVisibleOriginForProposedVisibleOrigin;
    } _scrollDelegateFlags;
    struct {
        _Bool respondsToWillStartUsingTileController;
        _Bool respondsToDidStopUsingTileController;
        _Bool respondsToDidUpdateTileControllers;
        _Bool respondsToDidEndAnimatingTileControllers;
    } _tileUseDelegateFlags;
    _Bool __needsUpdateLayoutVisibleRect;
    _Bool __needsUpdateTileControllersVisibleRect;
    _Bool __needsUpdateLayoutCoordinateSystem;
    _Bool __needsUpdateLayout;
    _Bool __needsUpdateScrollViewProperties;
    _Bool __needsUpdateTileControllers;
    _Bool __needsUpdateReferencedDataSources;
    _Bool __needsUpdateReferencedCoordinateSystems;
    _Bool __performingBatchUpdates;
    id <PUTilingViewTileSource> _tileSource;
    PUTilingLayout *_layout;
    PUTileAnimator *_tileAnimator;
    id <PUTilingViewTileTransitionDelegate> _tileTransitionDelegate;
    id <PUTilingViewScrollDelegate> _scrollDelegate;
    id <PUTilingViewTileUseDelegate> _tileUseDelegate;
    id <PUTilingCoordinateSystem> _contentCoordinateSystem;
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;
    PUTilingLayout *__pendingLayout;
    PUReuseQueue *__tileControllerReuseQueue;
    PUTileTree *__activeTileControllers;
    PUTileTree *__inactiveTileControllers;
    PUTileTree *__detachedTileControllers;
    NSMutableDictionary *__referencedDataSourcesByIdentifiers;
    NSMutableSet *__referencedCoordinateSystems;
    PUTileTransitionCoordinator *__tileTransitionCoordinatorForNextLayout;
    long long __reasonForNextLayoutCoordinateSystemUpdate;
    NSMutableArray *__pendingUpdateItems;
    double __pagingSpringPullAdjustment;
    double __pagingFrictionAdjustment;
    NSMutableDictionary *__postLayoutBlocks;
    CDUnknownBlockType _onNextTileControllersUpdateBlock;
    struct UIEdgeInsets _loadingInsets;
}

@property (retain, nonatomic, setter=_setLayout:) PUTilingLayout *layout;
@property (retain, nonatomic, setter=_setPendingLayout:) PUTilingLayout *_pendingLayout;
@property (nonatomic, readonly) PUReuseQueue *_tileControllerReuseQueue;
@property (nonatomic, readonly) PUTileTree *_activeTileControllers;
@property (nonatomic, readonly) PUTileTree *_inactiveTileControllers;
@property (nonatomic, readonly) PUTileTree *_detachedTileControllers;
@property (nonatomic, readonly) NSMutableDictionary *_referencedDataSourcesByIdentifiers;
@property (nonatomic, readonly) NSMutableSet *_referencedCoordinateSystems;
@property (nonatomic, setter=_setNeedsUpdateLayoutVisibleRect:) _Bool _needsUpdateLayoutVisibleRect;
@property (nonatomic, setter=_setNeedsUpdateTileControllersVisibleRect:) _Bool _needsUpdateTileControllersVisibleRect;
@property (nonatomic, setter=_setNeedsUpdateLayoutCoordinateSystem:) _Bool _needsUpdateLayoutCoordinateSystem;
@property (nonatomic, setter=_setNeedsUpdateLayout:) _Bool _needsUpdateLayout;
@property (nonatomic, setter=_setNeedsUpdateScrollViewProperties:) _Bool _needsUpdateScrollViewProperties;
@property (nonatomic, setter=_setNeedsUpdateTileControllers:) _Bool _needsUpdateTileControllers;
@property (nonatomic, setter=_setNeedsUpdateReferencedDataSources:) _Bool _needsUpdateReferencedDataSources;
@property (nonatomic, setter=_setNeedsUpdateReferencedCoordinateSystems:) _Bool _needsUpdateReferencedCoordinateSystems;
@property (retain, nonatomic, setter=_setTileTransitionCoordinatorForNextLayout:) PUTileTransitionCoordinator *_tileTransitionCoordinatorForNextLayout;
@property (nonatomic, setter=_setReasonForNextLayoutCoordinateSystemUpdate:) long long _reasonForNextLayoutCoordinateSystemUpdate;
@property (nonatomic, getter=_isPerformingBatchUpdates, setter=_setPerformingBatchUpdates:) _Bool _performingBatchUpdates;
@property (nonatomic, readonly) NSMutableArray *_pendingUpdateItems;
@property (nonatomic, setter=_setPagingSpringPullAdjustment:) double _pagingSpringPullAdjustment;
@property (nonatomic, setter=_setPagingFrictionAdjustment:) double _pagingFrictionAdjustment;
@property (nonatomic, readonly) NSMutableDictionary *_postLayoutBlocks;
@property (copy, nonatomic) CDUnknownBlockType onNextTileControllersUpdateBlock;
@property (weak, nonatomic) id <PUTilingViewTileSource> tileSource;
@property (nonatomic) struct UIEdgeInsets loadingInsets;
@property (weak, nonatomic) PUTileAnimator *tileAnimator;
@property (weak, nonatomic) id <PUTilingViewTileTransitionDelegate> tileTransitionDelegate;
@property (weak, nonatomic) id <PUTilingViewScrollDelegate> scrollDelegate;
@property (weak, nonatomic) id <PUTilingViewTileUseDelegate> tileUseDelegate;
@property (nonatomic, readonly) id <PUTilingCoordinateSystem> contentCoordinateSystem;
@property (nonatomic, readonly) id <PUTilingCoordinateSystem> fixedCoordinateSystem;
@property (nonatomic, readonly) _Bool isAnyTileControllerAnimating;

+ (unsigned long long)_defaultEdgesScrollingContentIntoSafeArea;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_invalidateLayout;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;
- (void)_updateLayoutIfNeeded;
- (void)transitionToLayout:(id)arg1;
- (void)_invalidateLayoutVisibleRect;
- (void)_updateLayoutVisibleRectIfNeeded;
- (id)freezeTileController:(id)arg1;
- (void)_handleChangeFromBounds:(struct CGRect)arg1 fromFrame:(struct CGRect)arg2;
- (void)_adjustScrollViewPagingDeceleration;
- (void)registerTileControllerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (id)dequeueTileControllerWithReuseIdentifier:(id)arg1;
- (void)enqueueTileControllerForReuse:(id)arg1;
- (void)tileControllerDidEndAnimating:(id)arg1;
- (void)transitionToLayout:(id)arg1 withContext:(id)arg2 animationSetupCompletionHandler:(CDUnknownBlockType)arg3;
- (void)insertItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)deleteItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 dataSource:(id)arg3;
- (void)reloadItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)_applyPendingUpdates;
- (void)detachTileControllers:(id)arg1;
- (void)reattachTileControllers:(id)arg1 withContext:(id)arg2;
- (id)presentedTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)enumeratePresentedTileControllersInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)enumerateAllTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAllTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateActiveTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (id)_createTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 tileSource:(id)arg4;
- (void)invalidateLayout:(id)arg1 withContext:(id)arg2;
- (void)_invalidateTileControllersVisibleRect;
- (void)_invalidateLayoutCoordinateSystemWithReason:(long long)arg1;
- (void)_invalidateScrollViewProperties;
- (void)_invalidateReferencedDataSources;
- (void)_invalidateReferencedCoordinateSystems;
- (void)_invalidateTileControllers;
- (void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg1;
- (void)_updateLayoutCoordinateSystemIfNeeded;
- (void)_updateTileControllersVisibleRectIfNeeded;
- (void)_updateScrollViewPropertiesIfNeeded;
- (void)_updateScrollViewPropertiesWithLayout:(id)arg1;
- (void)_updateTileControllersIfNeeded;
- (void)_updateTileControllersWithLayout:(id)arg1 tileTransitionCoordinator:(id)arg2;
- (void)_updateTileControllersWithLayout:(id)arg1 reactivatability:(CDUnknownBlockType)arg2 appearanceHandler:(CDUnknownBlockType)arg3 updateHandler:(CDUnknownBlockType)arg4 disappearanceHandler:(CDUnknownBlockType)arg5 heartBeatHandler:(CDUnknownBlockType)arg6;
- (void)_updateReferencedDataSourcesIfNeeded;
- (void)_updateReferencedCoordinateSystemsIfNeeded;
- (void)_runPostLayoutBlocks;
- (void)registerPostLayoutBlock:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)_registerDataSource:(id)arg1;
- (id)_dataSourceWithIdentifier:(id)arg1;
- (void)_transferTileControllersToDataSource:(id)arg1 usingDataSourceConverter:(id)arg2;

@end
