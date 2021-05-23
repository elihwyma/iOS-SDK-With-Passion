/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesSpec, PXMemoriesSpecManager, PXMemoriesUITileSource, PXPhotosDetailsContext, PXSectionedLayoutEngine, PXSectionedObjectReference, PXTilingController, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer;

@interface PXMemoriesUIViewController : UIViewController <Swift>

{
    struct {
        _Bool layoutEngine;
        _Bool layout;
    } _updateFlags;
    _Bool __performNextTransitionWithoutAnimation;
    _Bool _embedded;
    PXMemoriesDataSourceManager *_dataSourceManager;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesSpecManager *__specManager;
    PXMemoriesUITileSource *__tileSource;
    PXSectionedLayoutEngine *__layoutEngine;
    PXSectionedObjectReference *_anchorMemoryReference;
    PXSectionedObjectReference *__highlightedMemoryReference;
    PXSectionedObjectReference *__actionPresentationMemoryReference;
    PXSectionedObjectReference *__activatedMemoryReference;
    PXPhotosDetailsContext *__selectedItemDetailsContext;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXMemoriesSpec *__spec;
    unsigned long long __memoriesStyle;
    PXUITapGestureRecognizer *__tapRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    unsigned long long _pageIndex;
    PXTilingController *_tilingController;
    PXUIScrollViewController *_scrollViewController;
    struct CGPoint _anchorMemoryOrigin;
}

@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (nonatomic, readonly) PXMemoriesSpecManager *_specManager;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXSectionedLayoutEngine *_layoutEngine;
@property (retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint anchorMemoryOrigin;
@property (retain, nonatomic, setter=_setHighlightedMemoryReference:) PXSectionedObjectReference *_highlightedMemoryReference;
@property (retain, nonatomic, setter=_setActionPresentationMemoryReference:) PXSectionedObjectReference *_actionPresentationMemoryReference;
@property (retain, nonatomic, setter=_setActivatedMemoryReference:) PXSectionedObjectReference *_activatedMemoryReference;
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec;
@property (nonatomic, readonly) unsigned long long _memoriesStyle;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (nonatomic, setter=_setPerformNextTransitionWithoutAnimation:) _Bool _performNextTransitionWithoutAnimation;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (nonatomic, getter=isEmbedded) _Bool embedded;
@property (nonatomic, readonly) PXMemoriesDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) long long userInterfaceFeature;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (_Bool)_needsUpdate;
- (void)_invalidateLayout;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)initWithDataSourceManager:(id)arg1;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)createNewLayoutGenerator;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)_updateLayoutIfNeeded;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_configureLayout:(id)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2;
- (void)invalidateLayoutEngine;
- (void)_updateLayoutEngineIfNeeded;
- (id)_createNewLayout;
- (struct PXSimpleIndexPath)_indexPathForMemoryAtPoint:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (void)_reconfigureTargetLayout;
- (id)_memoryTileViewForLocation:(struct CGPoint)arg1;
- (id)_previewActionMenusForIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (void)_updateScrollViewControllerContentInset;
- (void)_saveAnchor;
- (void)datasourceManagerDidChange;
- (id)_sourceViewForMemoryActionsController;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;

@end
