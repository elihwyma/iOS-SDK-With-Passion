/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSHashTable, NSString, PUActivitySharingController, PUAssetReference, PUAvalancheReviewController, PUEditViewController, PUFunEffectsViewController, PUPhotoMarkupViewController, PUPhotosSharingViewController, PUSlideshowViewController;

@protocol PUOverOneUpPresentationSessionBarsDelegate, PUOverOneUpPresentationSessionDelegate;

@interface PUOverOneUpPresentationSession : NSObject <Swift>

{
    struct {
        _Bool respondsToTilingView;
        _Bool respondsToViewController;
        _Bool respondsToBrowsingViewModel;
        _Bool respondsToDidPresent;
        _Bool respondsToDidFinish;
        _Bool respondsToIsReady;
    } _delegateFlags;
    struct {
        _Bool respondsToActivities;
        _Bool respondsToBarButtonItem;
        _Bool respondsToDidAppendReviewScreenAction;
    } _barsDelegateFlags;
    _Bool __needsUpdatePresentedViewControllers;
    id <PUOverOneUpPresentationSessionDelegate> _delegate;
    id <PUOverOneUpPresentationSessionBarsDelegate> _barsDelegate;
    PUPhotosSharingViewController *__sharingViewController;
    PUAvalancheReviewController *__avalancheReviewController;
    PUSlideshowViewController *__slideshowViewController;
    PUEditViewController *__editViewController;
    PUPhotoMarkupViewController *__photoMarkupViewController;
    PUFunEffectsViewController *__funEffectsViewController;
    PUAssetReference *__stashedAssetReference;
    struct NSHashTable *__presentedViewControllers;
    PUActivitySharingController *_activitySharingController;
}

@property (retain, nonatomic, setter=_setSharingViewController:) PUPhotosSharingViewController *_sharingViewController;
@property (retain, nonatomic, setter=_setAvalancheReviewController:) PUAvalancheReviewController *_avalancheReviewController;
@property (retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController;
@property (retain, nonatomic, setter=_setEditViewController:) PUEditViewController *_editViewController;
@property (retain, nonatomic, setter=_setPhotoMarkupViewController:) PUPhotoMarkupViewController *_photoMarkupViewController;
@property (retain, nonatomic, setter=_setFunEffectsViewController:) PUFunEffectsViewController *_funEffectsViewController;
@property (copy, nonatomic, setter=_setStashedAssetReference:) PUAssetReference *_stashedAssetReference;
@property (retain, nonatomic, setter=_setPresentedViewControllers:) NSHashTable *_presentedViewControllers;
@property (nonatomic, setter=_setNeedsUpdatePresentedViewControllers:) _Bool _needsUpdatePresentedViewControllers;
@property (retain, nonatomic) PUActivitySharingController *activitySharingController;
@property (weak, nonatomic) id <PUOverOneUpPresentationSessionDelegate> delegate;
@property (weak, nonatomic) id <PUOverOneUpPresentationSessionBarsDelegate> barsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)viewController;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)_numberOfItems;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (id)_viewModel;
- (_Bool)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_removeViewController:(id)arg1;
- (_Bool)_presentActivityViewController:(id)arg1;
- (id)_assetsDataSource;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)ppt_cancelActivity;
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (id)_tilingView;
- (void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingPhoto:(id)arg2;
- (void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingVideo:(id)arg2 modificationDate:(id)arg3 seekTime:(CDStruct_1b6d18a9)arg4;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)avalancheReviewControllerDidComplete:(id)arg1 withAsset:(id)arg2 animated:(_Bool)arg3;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3 withAsset:(id)arg4;
- (void)activitySharingControllerWillDismissActivityViewController:(id)arg1;
- (void)activitySharingControllerDidCancel:(id)arg1;
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;
- (id)photosSharingTransition:(id)arg1 layoutForAssetReference:(id)arg2;
- (struct CGPoint)photosSharingTransition:(id)arg1 contentOffsetForAssetReference:(id)arg2;
- (void)photosSharingTransition:(id)arg1 setVisibility:(_Bool)arg2 forAssetReference:(id)arg3;
- (id)photosSharingTransitionTransitioningView:(id)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(id)arg1;
- (void)photosSharingTransitionWillAnimateDismissal:(id)arg1;
- (void)oneUpSharingAnimationController:(id)arg1 setVisibility:(_Bool)arg2 forAssetReference:(id)arg3;
- (void)_invalidatePresentedViewControllers;
- (void)_updatePresentedViewControllersIfNeeded;
- (_Bool)isPresentingAnOverOneUpViewController;
- (void)_finishOverOneUpPresentationSessionDismissForced:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_currentTileController;
- (_Bool)_presentEditViewController:(id)arg1;
- (_Bool)_presentPhotoMarkupViewController:(id)arg1;
- (_Bool)_presentFunEffectsViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_presentPhotosSharingViewController:(id)arg1;
- (_Bool)_presentAvalancheReviewController:(id)arg1;
- (_Bool)_presentSlideshowViewController:(id)arg1;
- (_Bool)_presentScreenRoutePickerViewController:(id)arg1;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissSlideshowViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissEditViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissPhotoMarkupViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissFunEffectsViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissPhotosSharingViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissActivityViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissAvalancheReviewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_popToOneUpFromViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_assetReferenceFromAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)avalancheReviewControllerDidComplete:(id)arg1 animated:(_Bool)arg2;
- (void)_finalizeAvalancheReviewControllerDismiss;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1 withAsset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finalizeSharingViewControllerDismiss;
- (void)_prepareForActivitySharingControllerDismiss:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_activitySharingControllerWillDismissActivityViewController:(id)arg1;
- (void)_activitySharingControllerDidCancel:(id)arg1;
- (void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(_Bool)arg3;
- (struct CGRect)_frameForAssetReference:(id)arg1;
- (struct CGRect)_frameAtIndexPath:(id)arg1;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (long long)_tileCountForCurrentModalViewController;
- (long long)_globalIndexForAssetReference:(id)arg1;
- (id)_assetReferenceAtGlobalIndex:(long long)arg1;
- (void)ppt_presentShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_tapNextButton:(CDUnknownBlockType)arg1;
- (void)ppt_dismissShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_shareUsingActivityOfType:(id)arg1;
- (void)ppt_presentPhotoEditor;

@end
