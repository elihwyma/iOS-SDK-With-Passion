/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, NSUserActivity, PXBarsController, PXPhotosDetailsAssetVariationsWidget, PXPhotosDetailsContext, PXPhotosDetailsHeaderTileWidget, PXPhotosDetailsSpecManager, PXPhotosDetailsViewModel, PXScrollViewController, PXSwipeSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetComposition, PXWidgetSpec, UIContextMenuInteraction, UIScrollView, UIView;

@protocol PXAssetCollectionActionPerformerDelegate, PXDisplayAsset, PXPhotosDetailsUIViewControllerDelegate, PXUIWidget;

@interface PXPhotosDetailsUIViewController : UIViewController <Swift>

{
    struct {
        _Bool requestDismissal;
    } _delegateRespondsTo;
    _Bool __hasAppeared;
    _Bool __shouldFocusHeader;
    _Bool __previewCommitting;
    _Bool _empty;
    PXPhotosDetailsContext *_context;
    unsigned long long _options;
    id <PXPhotosDetailsUIViewControllerDelegate> _delegate;
    PXPhotosDetailsViewModel *__viewModel;
    PXUIScrollViewController *__scrollViewController;
    NSArray *__widgets;
    NSMapTable *__widgetOptions;
    PXPhotosDetailsHeaderTileWidget *__headerWidget;
    PXPhotosDetailsAssetVariationsWidget *__variationsWidget;
    PXTilingController *__headerAssetWidgetTilingController;
    PXWidgetComposition *__composition;
    PXPhotosDetailsSpecManager *__specManager;
    NSMutableArray *__widgetDisablingDimmingViews;
    PXWidgetSpec *__widgetSpec;
    PXSwipeSelectionManager *__swipeSelectionManager;
    Class __barsControllerClass;
    CDUnknownBlockType __unlockStatus;
    CDUnknownBlockType __unlockHandler;
    id <PXUIWidget> __previewWidget;
    UIView *__headerTileView;
    CDUnknownBlockType __ppt_allWidgetLoadingCompleteHandler;
    CDUnknownBlockType __ppt_variationsWidgetLoadingCompleteHandler;
    UIContextMenuInteraction *__contextMenuInteraction;
    UIViewController *__previewViewController;
    NSUserActivity *_siriActionActivity;
    PXBarsController *_barsController;
    id <PXAssetCollectionActionPerformerDelegate> _actionPerformerDelegate;
    unsigned long long _occludedContentEdges;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (nonatomic, readonly) PXPhotosDetailsViewModel *_viewModel;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) NSArray *_widgets;
@property (nonatomic, readonly) NSMapTable *_widgetOptions;
@property (nonatomic, readonly) PXPhotosDetailsHeaderTileWidget *_headerWidget;
@property (nonatomic, readonly) PXPhotosDetailsAssetVariationsWidget *_variationsWidget;
@property (nonatomic, readonly) PXTilingController *_headerAssetWidgetTilingController;
@property (nonatomic, readonly) PXWidgetComposition *_composition;
@property (nonatomic, readonly) PXPhotosDetailsSpecManager *_specManager;
@property (nonatomic, readonly) NSMutableArray *_widgetDisablingDimmingViews;
@property (retain, nonatomic, setter=_setWidgetSpec:) PXWidgetSpec *_widgetSpec;
@property (nonatomic, setter=_setHasAppeared:) _Bool _hasAppeared;
@property (retain, nonatomic, setter=_setSwipeSelectionManager:) PXSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, readonly) Class _barsControllerClass;
@property (copy, nonatomic, readonly) CDUnknownBlockType _unlockStatus;
@property (copy, nonatomic, readonly) CDUnknownBlockType _unlockHandler;
@property (nonatomic, readonly) id <PXUIWidget> _previewWidget;
@property (nonatomic, setter=_setShouldFocusHeader:) _Bool _shouldFocusHeader;
@property (retain, nonatomic, setter=_setHeaderTileView:) UIView *_headerTileView;
@property (copy, nonatomic, setter=_ppt_setAllWidgetLoadingCompleteHandler:) CDUnknownBlockType _ppt_allWidgetLoadingCompleteHandler;
@property (copy, nonatomic, setter=_ppt_setVariationsWidgetLoadingCompleteHandler:) CDUnknownBlockType _ppt_variationsWidgetLoadingCompleteHandler;
@property (retain, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction;
@property (nonatomic, setter=_setPreviewCommitting:) _Bool _previewCommitting;
@property (retain, nonatomic, setter=_setPreviewViewController:) UIViewController *_previewViewController;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic, readonly) PXBarsController *barsController;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXAssetCollectionActionPerformerDelegate> actionPerformerDelegate;
@property (nonatomic, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) id <PXDisplayAsset> presentedKeyAsset;
@property (nonatomic) unsigned long long occludedContentEdges;
@property (nonatomic, readonly) _Bool shouldUpdateStatusBarTitle;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (nonatomic, readonly) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) unsigned long long options;
@property (weak, nonatomic) id <PXPhotosDetailsUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

+ (void)preloadResources;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contentScrollView;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateTitleAndSubtitle;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (_Bool)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)playMiroMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_navigateToMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateScrollViewControllerContentInset;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)purgeIfPossible;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)widgetDeviceIsUnlocked:(id)arg1;
- (void)widget:(id)arg1 performAfterUnlockingDeviceIfNecessary:(CDUnknownBlockType)arg2 failurehandler:(CDUnknownBlockType)arg3;
- (_Bool)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)widgetCompositionHasContentAbove:(id)arg1;
- (_Bool)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2;
- (long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2;
- (_Bool)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4;
- (void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2;
- (void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2;
- (struct NSObject *)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (void)_updateStatusBarTitle;
- (unsigned long long)_userEventSourceForDetailView:(id)arg1;
- (void)_viewWillLayoutBeforeAppearing;
- (_Bool)_dismissSelfIfSafeAnimated:(_Bool)arg1;
- (void)_handleWidgetsLoadingDelay;
- (void)_ensureScrollViewController;
- (void)_ensureComposition;
- (void)_loadComposition;
- (_Bool)_shouldShowMovieHeader;
- (void)_loadWidgets;
- (void)_updateAllWidgetsSpec;
- (void)_updateAllWidgetsSelectionState;
- (void)_updateAllWidgetsFaceModeState;
- (unsigned long long)_optionsForWidget:(id)arg1;
- (id)_photosDetailsContextForTransition:(id)arg1;
- (id)_photosDetailsContextForTransitionWithViewController:(id)arg1;
- (id)standaloneMapViewController;
- (void)_updateWidgetDisablingWithAnimationOptions:(id)arg1;
- (void)_handleDeviceDidUnlock;
- (_Bool)px_isSnapBackDestination;
- (void)_invalidateCompositionSpec;
- (void)_updateCompositionSpec;
- (void)_invalidateWidgetSpec;
- (void)_updateWidgetSpec;
- (void)_invalidateBarSpec;
- (void)_updateBarSpec;
- (_Bool)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1;
- (id)_regionOfInterestForContext:(id)arg1;
- (id)_widgetAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_previewViewControllerForLocation:(struct CGPoint)arg1;
- (void)_performAddToMemoriesAnimation;
- (void)ppt_toggleDiscloseWidgets;
- (void)ppt_performBlockAfterAllWidgetLoadingCompletes:(CDUnknownBlockType)arg1;
- (void)ppt_performBlockAfterVariationsWidgetLoadingCompletes:(CDUnknownBlockType)arg1;
- (void)_ppt_informWidgetsLoadedHandlerIfNeeded;

@end
