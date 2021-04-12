//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXCPLServiceUIDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryFooterControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibrarySkimmingControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryZoomLevelControlDelegate-Protocol.h>
#import <PhotosUICore/PXMovieProviderDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>

@class PHPhotoLibrary, PXAssetReference, PXCPLServiceUI, PXChangeDirectionNumberFilter, PXContentUnavailableView, PXCuratedLibraryBarsController, PXCuratedLibrarySecondaryToolbarController, PXCuratedLibrarySkimmingController, PXCuratedLibraryViewProvider, PXCuratedLibraryZoomLevelControl, PXCuratedLibraryZoomLevelPinchFilter, PXGTransition, PXGView, PXMovieProvider, PXProgrammaticNavigationRequest, PXRelaxedScreenEdgePanGestureRecognizer, PXSwipeSelectionManager, PXTouchingUIGestureRecognizer, UIContextMenuInteraction, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UITargetedPreview;
@protocol UIDragSession;

@interface PXCuratedLibraryUIViewController : UIViewController <UIDragInteractionDelegate, UIDropInteractionDelegate, PXUserInterfaceFeatureViewController, PXScrollViewControllerObserver, PXOneUpPresentationDelegate, UIGestureRecognizerDelegate, PXSwipeSelectionManagerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXTouchingUIGestureRecognizerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibraryActionPerformerDelegate, PXMovieProviderDelegate, PXCPLServiceUIDelegate, UIContextMenuInteractionDelegate>
{
    BOOL _isGridViewReady;
    BOOL __previewCommitting;
    PXCuratedLibraryViewProvider *_viewProvider;
    PXCuratedLibrarySkimmingController *_skimmingController;
    PHPhotoLibrary *_photoLibrary;
    id <UIDragSession> _dragSession;
    PXCuratedLibraryBarsController *_barsController;
    PXCuratedLibrarySecondaryToolbarController *_secondaryToolbarController;
    PXCuratedLibraryZoomLevelControl *_zoomLevelControl;
    UITapGestureRecognizer *_tapGesture;
    PXTouchingUIGestureRecognizer *_skimmingTouchGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    PXChangeDirectionNumberFilter *_backNavigationGestureDirectionFilter;
    long long _zoomLevelBeforeBackNavigationTransition;
    PXGTransition *_backNavigationTransition;
    PXRelaxedScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXAssetReference *_navigatedAssetReference;
    PXMovieProvider *_movieProvider;
    PXCuratedLibraryZoomLevelPinchFilter *_zoomLevelPinchFilter;
    PXProgrammaticNavigationRequest *_initialNavigationRequest;
    PXCPLServiceUI *_cplServiceUI;
    PXContentUnavailableView *_emptyPlaceHolderView;
    UIContextMenuInteraction *__contextMenuInteraction;
    PXAssetReference *__interactionAssetReference;
    UITargetedPreview *__interactionTargetedPreview;
    UIViewController *__interactionPreviewViewController;
    CDStruct_0c606d9b _trackedScrollContext;
}

@property(nonatomic, setter=_setPreviewCommitting:) BOOL _previewCommitting; // @synthesize _previewCommitting=__previewCommitting;
@property(retain, nonatomic, setter=_setInteractionPreviewViewController:) UIViewController *_interactionPreviewViewController; // @synthesize _interactionPreviewViewController=__interactionPreviewViewController;
@property(retain, nonatomic, setter=_setInteractionTargetedPreview:) UITargetedPreview *_interactionTargetedPreview; // @synthesize _interactionTargetedPreview=__interactionTargetedPreview;
@property(retain, nonatomic, setter=_setInteractionAssetReference:) PXAssetReference *_interactionAssetReference; // @synthesize _interactionAssetReference=__interactionAssetReference;
@property(retain, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction; // @synthesize _contextMenuInteraction=__contextMenuInteraction;
@property(retain, nonatomic) PXContentUnavailableView *emptyPlaceHolderView; // @synthesize emptyPlaceHolderView=_emptyPlaceHolderView;
@property(retain, nonatomic) PXCPLServiceUI *cplServiceUI; // @synthesize cplServiceUI=_cplServiceUI;
@property(retain, nonatomic) PXProgrammaticNavigationRequest *initialNavigationRequest; // @synthesize initialNavigationRequest=_initialNavigationRequest;
@property(nonatomic) BOOL isGridViewReady; // @synthesize isGridViewReady=_isGridViewReady;
@property(readonly, nonatomic) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter; // @synthesize zoomLevelPinchFilter=_zoomLevelPinchFilter;
@property(retain, nonatomic) PXMovieProvider *movieProvider; // @synthesize movieProvider=_movieProvider;
@property(retain, nonatomic) PXAssetReference *navigatedAssetReference; // @synthesize navigatedAssetReference=_navigatedAssetReference;
@property(readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // @synthesize swipeSelectionManager=_swipeSelectionManager;
@property(nonatomic) CDStruct_0c606d9b trackedScrollContext; // @synthesize trackedScrollContext=_trackedScrollContext;
@property(readonly, nonatomic) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer; // @synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer;
@property(retain, nonatomic) PXGTransition *backNavigationTransition; // @synthesize backNavigationTransition=_backNavigationTransition;
@property(nonatomic) long long zoomLevelBeforeBackNavigationTransition; // @synthesize zoomLevelBeforeBackNavigationTransition=_zoomLevelBeforeBackNavigationTransition;
@property(retain, nonatomic) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter; // @synthesize backNavigationGestureDirectionFilter=_backNavigationGestureDirectionFilter;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *skimmingTouchGesture; // @synthesize skimmingTouchGesture=_skimmingTouchGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(readonly, nonatomic) PXCuratedLibraryZoomLevelControl *zoomLevelControl; // @synthesize zoomLevelControl=_zoomLevelControl;
@property(readonly, nonatomic) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController; // @synthesize secondaryToolbarController=_secondaryToolbarController;
@property(readonly, nonatomic) PXCuratedLibraryBarsController *barsController; // @synthesize barsController=_barsController;
@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
// - (void).cxx_destruct;
- (NSObject )presentingViewControllerForFooterController:(id)arg1;
- (void)footerControllerRevealFooter:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_rescheduleNavigationRequest:(id)arg1;
- (void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)arg1 withAssetReference:(id)arg2;
- (void)_navigateToRevealAssetForNavigationRequest:(id)arg1;
- (void)_navigateToInitialScrollPositionForNavigationRequest:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canRouteToDestination:(id)arg1;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
@property(readonly, nonatomic) BOOL canDragIn;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)_draggableAssetReferenceAtLocation:(CGPoint)arg1;
- (void)_presentConfidentialityWarning;
- (BOOL)_addDraggedAssetReferences:(id)arg1;
- (id)_regionOfInterestForDragItem:(id)arg1 image:(id )arg2;
- (id)_createDragItemForAssetReference:(id)arg1;
- (id)_assetReferenceForDragItem:(id)arg1;
- (id)_previewImageViewForImage:(id)arg1 frame:(CGRect)arg2 regionOfInterest:(id)arg3;
@property(readonly, nonatomic) BOOL isDraggingOut;
@property(readonly, nonatomic) BOOL canDragOut;
- (void)zoomLevelControl:(id)arg1 didTapOnAlreadySelectedZoomLevel:(long long)arg2;
- (void)_createAnimationForSkimmingWithDuration:(double)arg1 indicatorsDidChangeVisibility:(BOOL)arg2;
- (void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;
- (void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;
- (id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;
- (id)_dominantAssetCollectionReferenceForSkimming;
- (void)_updateSkimmingSlideshowEnabled;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_hitTestResultForPreviewingAtLocation:(CGPoint)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (BOOL)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)presentingViewControllerForMovieProvider:(id)arg1;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(NSObject )arg2;
- (void)curatedLibraryActionPerformer:(id)arg1 presentShareSheetWithSharingContext:(id)arg2;
- (void)swipeSelectionManagerDidAutoScroll:(id)arg1;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3;
- (id)_hitTestResultAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 swipeSelectionManager:(id)arg3;
- (struct PXSimpleIndexPath)_indexPathForAssetAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 forSwipeSelectionManager:(id)arg3;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (BOOL)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_stopLibraryViewScrolling;
- (void)_presentOneUpForAssetReference:(id)arg1 animated:(BOOL)arg2 withInteractiveMode:(long long)arg3;
- (BOOL)scrollViewControllerShouldScrollToTop:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)_buttonHitTestResultAtPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_hitTestAssetReferenceAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)_handleScreenEdgePan:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (BOOL)_scrollToNextSectionInDirection:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)_handleTapOnTitleWithHitTestResult:(id)arg1;
- (BOOL)_handleTapWithHitTestResult:(id)arg1;
- (BOOL)_handleShowingChromeIfNeeded:(CGPoint)arg1;
- (void)_handleTap:(id)arg1;
- (void)_scrollToBottomAnimated:(BOOL)arg1;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)_saveCurrentAllPhotosScrollPosition;
- (void)_setHiddenAssetReferences:(id)arg1;
- (id)_regionOfInterestForAssetReference:(id)arg1 image:(id )arg2;
- (id)_scrollView;
- (void)_prepareSelectionManager;
- (void)_prepareDragAndDrop;
- (void)_prepareGestureRecognizers;
- (void)_updateTrackedScrollLevelIfNeeded;
- (void)_updateStatusBarStyle;
- (void)_updateSecondaryToolbarContent;
- (void)_invalidateSecondaryToolbarContent;
- (void)px_didTransitionBars;
- (void)px_willTransitionBars;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_updateEmptyPlaceholder;
- (void)_conditionallyUpdateEmptyPlaceholder;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
@property(readonly, nonatomic) long long userInterfaceFeature;
@property(readonly, nonatomic) PXGView *gridView;
@property(readonly, nonatomic) PXCuratedLibrarySkimmingController *skimmingController; // @synthesize skimmingController=_skimmingController;
@property(readonly, nonatomic) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property(readonly, nonatomic) PXCuratedLibraryViewProvider *viewProvider; // @synthesize viewProvider=_viewProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;

@end

