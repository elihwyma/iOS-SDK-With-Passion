/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class CFXReviewViewController, NSString, PUMediaProvider, PUObserverRegistry, PUProgressIndicatorView, PUReviewAdjustmentOutput, PUReviewAsset, PUReviewScreenBarsModel, PUReviewScreenControlBar, PUReviewScreenTopBar;

@interface PUFunEffectsViewController : UIViewController <Swift>

{
    _Bool __inputHasKnownAdjustments;
    _Bool __shouldHideBars;
    PUReviewAsset *_reviewAsset;
    PUMediaProvider *_mediaProvider;
    PUReviewScreenBarsModel *_reviewBarsModel;
    PUObserverRegistry *__observerRegistry;
    CFXReviewViewController *__effectsViewController;
    PUReviewScreenTopBar *__topBar;
    PUReviewScreenControlBar *__controlBar;
    long long __inputAdjustmentBaseVersion;
    PUReviewAdjustmentOutput *__exportAdjustmentOutput;
    unsigned long long __exportCompletion;
    PUProgressIndicatorView *__progressIndicatorView;
}

@property (nonatomic, readonly) PUObserverRegistry *_observerRegistry;
@property (nonatomic, readonly) CFXReviewViewController *_effectsViewController;
@property (nonatomic, readonly) PUReviewScreenTopBar *_topBar;
@property (nonatomic, readonly) PUReviewScreenControlBar *_controlBar;
@property (nonatomic, readonly) _Bool _inputHasKnownAdjustments;
@property (nonatomic, readonly) long long _inputAdjustmentBaseVersion;
@property (retain, nonatomic) PUReviewAdjustmentOutput *_exportAdjustmentOutput;
@property (nonatomic) unsigned long long _exportCompletion;
@property (retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *_progressIndicatorView;
@property (nonatomic, setter=_setShouldHideBars:) _Bool _shouldHideBars;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_updateLayout;
- (void)_updateBars;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_showProgressIndicator;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)reviewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
- (void)reviewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
- (void)reviewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
- (void)reviewViewControllerDidHideUserInterface:(id)arg1;
- (void)reviewViewControllerDidShowUserInterface:(id)arg1;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;
- (void)_setShouldHideBars:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleDidTapRetakeButton:(id)arg1;
- (void)_handleDidTapDoneButton:(id)arg1;
- (void)_handleDidTapFunEffectsButton:(id)arg1;
- (void)_handleDidTapMarkupButton:(id)arg1;
- (void)_handleDidTapEditButton:(id)arg1;
- (void)_handleDidTapSendButton:(id)arg1;
- (void)reviewViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)_handleCompletion:(unsigned long long)arg1;
- (void)_handleDismissCompletion;
- (void)_handleExportWithCompletion:(unsigned long long)arg1;
- (void)_exportWithCompletion:(unsigned long long)arg1;
- (void)_handleExportFailureWithError:(id)arg1;
- (void)_finishExportingWithMediaItem:(id)arg1;
- (void)_dismissProgressIndicator;
- (void)_updateProgressIndicatorWithProgress:(double)arg1;
- (void)_signalCompletion:(unsigned long long)arg1 withSavedAsset:(id)arg2;

@end
