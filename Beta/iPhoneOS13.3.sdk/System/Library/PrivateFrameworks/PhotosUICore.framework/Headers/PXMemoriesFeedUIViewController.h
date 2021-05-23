/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesFeedDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesOnboardingUIViewController, PXMemoriesUITileSource, PXPhotoAnalysisStatusController, PXPhotosDetailsContext, PXSectionedDataSource, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer, UIBarButtonItem, UIScrollView, _UIContentUnavailableView;

@interface PXMemoriesFeedUIViewController : UIViewController <Swift>

{
    _Bool _isInitialized;
    struct {
        _Bool navigationItem;
        _Bool contentUnavailablePlaceholder;
    } _needsUpdateFlags;
    _Bool _hasAppeared;
    PXUIScrollViewController *__scrollViewController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    UIBarButtonItem *__refreshBarButtonItem;
    PXMemoriesFeedViewControllerHelper *__helper;
    unsigned long long __memoriesStyle;
    PXPhotoAnalysisStatusController *__graphStatusController;
    PXMemoriesOnboardingUIViewController *__onboardingViewController;
    _UIContentUnavailableView *__contentUnavailableView;
    PXPhotosDetailsContext *__selectedItemDetailsContext;
    PXMemoriesUITileSource *__tileSource;
    PXUITapGestureRecognizer *__tapRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    NSString *_scrollTargetMemoryUUID;
}

@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (nonatomic, readonly) unsigned long long _memoriesStyle;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) PXPhotoAnalysisStatusController *_graphStatusController;
@property (retain, nonatomic, setter=_setOnboardingViewController:) PXMemoriesOnboardingUIViewController *_onboardingViewController;
@property (retain, nonatomic, setter=_setContentUnavailableView:) _UIContentUnavailableView *_contentUnavailableView;
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) UIBarButtonItem *_refreshBarButtonItem;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (nonatomic, readonly) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID;
@property (nonatomic, readonly) PXSectionedDataSource *ppt_memoriesDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) long long userInterfaceFeature;

+ (void)_setCurrentFeedViewController:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (id)_memoryTileViewForLocation:(struct CGPoint)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (void)_updateScrollViewControllerContentInset;
- (id)_sourceViewForMemoryActionsController;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)_handleSpecChange;
- (id)_suppressionContexts;
- (_Bool)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1;
- (id)initWithMemoriesStyle:(unsigned long long)arg1;
- (void)_preloadFontSpecs;
- (void)_updateBarAppearance;
- (id)_showMemoryDetailsForContext:(id)arg1 animated:(_Bool)arg2;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)revealMostRecentMemoryAnimated:(_Bool)arg1;
- (void)_navigateToMemoryAtSectionObjectReference:(id)arg1;
- (id)_photosDetailsContextForMemoryObjectReference:(id)arg1;
- (void)_refreshBarButtonItemAction:(id)arg1;
- (void)_startRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateNavigationItem;
- (void)_updateNavigationItemIfNeeded;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (id)_previewActionMenusForInteraction:(id)arg1;
- (void)playMiroMovieWithMemoryUUID:(id)arg1;
- (void)ppt_navigateToLatestMemoryAnimated:(_Bool)arg1;
- (void)ppt_revealMemoryWithReference:(id)arg1 animated:(_Bool)arg2;
- (void)ppt_navigateToMemoryWithReference:(id)arg1 animated:(_Bool)arg2;

@end
