/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, PUBrowsingSession, PUChangeDirectionValueFilter, PUOneUpViewController, PUPinchedTileTracker, PUTilingView, PXPhotosDataSource, UITapGestureRecognizer, UIViewController;

@protocol PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate;

@interface PUOneUpPresentationHelper : NSObject

{
    struct {
        _Bool respondsToTransitionTypeWithProposedTransitionType;
        _Bool respondsToWillPresentOneUpViewController;
        _Bool respondsToDidDismissOneUpViewController;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToViewHostingTilingView;
        _Bool respondsToScrollView;
        _Bool respondsToPreferredBarStyle;
        _Bool respondsToShouldLeaveContentOnSecondScreen;
        _Bool respondsToDisableFinalFadeoutAnimation;
        _Bool respondsToPreviewScrubberDidBecomeAvailable;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToPreventRevealInMomentAction;
        _Bool respondsToPreferredPresentationOrientation;
        _Bool respondsToEnableFreezeLayoutOnOrientationChange;
        _Bool respondsToAdditionalOptions;
    } _delegateFlags;
    struct {
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToShouldHideAssetReferences;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToShouldDisableScroll;
    } _assetDisplayDelegateFlags;
    struct {
        _Bool presentationInfo;
    } _needsUpdateFlags;
    _Bool _cachesScrubberView;
    _Bool __isEndingPresentation;
    _Bool __shouldPauseLibraryChanges;
    _Bool __needsUpdateAssetReferencesDisplayedInTilingView;
    _Bool __isPerformingNonAnimatedPush;
    PUBrowsingSession *_browsingSession;
    UIViewController *_presentingViewController;
    long long _transitionType;
    PXPhotosDataSource *_photosDataSource;
    id <PUOneUpPresentationHelperDelegate> _delegate;
    id <PUOneUpPresentationHelperAssetDisplayDelegate> _assetDisplayDelegate;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    long long __state;
    long long __presentationEndTimeoutIdentifier;
    id __libraryChangePauseToken;
    CDUnknownBlockType __browsingSessionCreationBlock;
    PUTilingView *__tilingView;
    PUTilingView *__disappearingTilingView;
    PUTilingView *__transitioningTilingView;
    NSSet *__assetReferencesDisplayedInTilingView;
    PUOneUpViewController *__oneUpViewController;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PUPinchedTileTracker *__pinchedTileTracker;
    PUChangeDirectionValueFilter *__panDirectionValueFilter;
    long long __presentationOrigin;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=_setEndingPresentation:) _Bool _isEndingPresentation;
@property (nonatomic, setter=_setPresentationEndTimeoutIdentifier:) long long _presentationEndTimeoutIdentifier;
@property (nonatomic, setter=_setShouldPauseLibraryChanges:) _Bool _shouldPauseLibraryChanges;
@property (retain, nonatomic, setter=_setLibraryChangePauseToken:) id _libraryChangePauseToken;
@property (copy, nonatomic, readonly) CDUnknownBlockType _browsingSessionCreationBlock;
@property (retain, nonatomic, setter=_setBrowsingSession:) PUBrowsingSession *browsingSession;
@property (nonatomic, readonly) long long transitionType;
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (weak, nonatomic, setter=_setDisappearingTilingView:) PUTilingView *_disappearingTilingView;
@property (retain, nonatomic, setter=_setTransitioningTilingView:) PUTilingView *_transitioningTilingView;
@property (nonatomic, setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:) _Bool _needsUpdateAssetReferencesDisplayedInTilingView;
@property (retain, nonatomic, setter=_setAssetReferencesDisplayedInTilingView:) NSSet *_assetReferencesDisplayedInTilingView;
@property (retain, nonatomic, setter=_setOneUpViewController:) PUOneUpViewController *_oneUpViewController;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer;
@property (retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker;
@property (retain, nonatomic, setter=_setPanDirectionValueFilter:) PUChangeDirectionValueFilter *_panDirectionValueFilter;
@property (nonatomic, setter=_setIsPerformingNonAnimatedPush:) _Bool _isPerformingNonAnimatedPush;
@property (nonatomic) long long _presentationOrigin;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (weak, nonatomic) id <PUOneUpPresentationHelperDelegate> delegate;
@property (weak, nonatomic) id <PUOneUpPresentationHelperAssetDisplayDelegate> assetDisplayDelegate;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceStatus;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceHandler;
@property (nonatomic, readonly) _Bool isOneUpPresented;
@property (nonatomic) _Bool cachesScrubberView;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)commitPreviewViewController:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)_updateLayout;
- (void)_handleTap:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForUpdateWithItems:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (double)pinchedTiledTracker:(id)arg1 initialAspectRatioForTileWithLayoutInfo:(id)arg2;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForTileWithLayoutInfo:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 willStartTrackingTileController:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 didStopTrackingTileController:(id)arg2;
- (_Bool)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1;
- (long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1;
- (void)tilingViewControllerTransitionWasAborted:(id)arg1;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(_Bool)arg4 animationSetupCompletionHandler:(CDUnknownBlockType)arg5;
- (void)tilingView:(id)arg1 willStartUsingTileController:(id)arg2;
- (void)tilingView:(id)arg1 didStopUsingTileController:(id)arg2;
- (void)tilingViewDidUpdateTileControllers:(id)arg1;
- (void)tilingViewDidEndAnimatingTileControllers:(id)arg1;
- (void)photosPreviewPresentationController:(id)arg1 willPresentPreviewViewController:(id)arg2;
- (id)initWithBrowsingSessionCreationBlock:(CDUnknownBlockType)arg1;
- (id)browsingSessionCreateIfNeeded:(_Bool)arg1;
- (void)_invalidatePresentationInfo;
- (void)_updatePresentationInfoIfNeeded;
- (void)_presentOneUpViewController:(id)arg1 animated:(_Bool)arg2 interactiveMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureNavigationController:(id)arg1;
- (_Bool)canPresentOneUpViewControllerAnimated:(_Bool)arg1;
- (struct CGAffineTransform)_tilingViewTransitionTransform;
- (void)presentOneUpViewControllerAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
- (void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg1 animated:(_Bool)arg2 interactiveMode:(long long)arg3;
- (_Bool)canDismissOneUpViewController;
- (_Bool)_prepareDismissalForced:(_Bool)arg1;
- (_Bool)dismissOneUpViewControllerForced:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_cleanupOneUpViewControllerForDismissalIfNeeded;
- (void)presentingViewControllerScrollViewDidScroll:(id)arg1;
- (_Bool)handlePresentingPanGestureRecognizer:(id)arg1;
- (_Bool)_handleInteractivePresentationWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTileControllerAnimationEnd;
- (void)_presentationEndDidTimeOut:(long long)arg1;
- (id)_transitionHostingView;
- (void)_ensureRegistrationWithPresentingViewController;
- (void)_updateLayout:(id)arg1;
- (id)_currentTilingViewControllerTransition;
- (long long)_currentNavigationControllerOperation;
- (id)_newCollapsedLayout;
- (void)_invalidateAssetReferencesDisplayedInTilingView;
- (void)_updateAssetReferencesDisplayedInTilingView;
- (void)_cleanUpAfterTilingViewTransitionAnimated:(_Bool)arg1 transitionAborted:(_Bool)arg2;
- (void)_disappearingTilingView:(id)arg1 animationCompleted:(_Bool)arg2;
- (void)_didFinishTransitioningToOneUp;
- (id)_createOneUpViewControllerWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1 allowingActions:(_Bool)arg2;
- (void)beginUsingBlackTheme;
- (void)cancelCommitTransitionForPreviewViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cameraPreviewTransitionDelegateWithSourceRect:(struct CGRect)arg1 sourceImage:(id)arg2;
- (void)navigateToAssetAtIndexPath:(id)arg1;
- (_Bool)_shouldAutoplayOnNavigation;

@end
