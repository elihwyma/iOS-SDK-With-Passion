/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/Swift-Protocol.h>

@class IKAudioElement, IKImageElement, IKMediaContentElement, IKViewElement, NSArray, NSString, TVMediaInfo, TVObservableEventController, UIImage, UIView, UIViewController, _TVFocusCaptureView, _TVStackCollectionView, _TVStackWrappingView;

@protocol TVMediaPlaying;

@interface _TVStackCommonTemplateController : _TVBgImageLoadingViewController <Swift>

{
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
    IKViewElement *_viewElement;
    _TVStackCollectionView *_collectionView;
    IKViewElement *_collectionListElement;
    TVObservableEventController *_observableEventController;
    IKAudioElement *_audioElement;
    IKViewElement *_backgroundElement;
    IKImageElement *_heroImgElement;
    IKImageElement *_bgImgElement;
    IKImageElement *_uberImgElement;
    IKMediaContentElement *_bgMediaContentElement;
    UIImage *_bgImage;
    id <TVMediaPlaying> _mediaPlayer;
    TVMediaInfo *_selectedMediaInfo;
    NSArray *_supplementaryViewControllers;
    UIViewController *_focusedSupplementaryViewController;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKAudioElement *audioElement;
@property (retain, nonatomic) IKViewElement *collectionListElement;
@property (retain, nonatomic) IKViewElement *backgroundElement;
@property (retain, nonatomic) IKImageElement *heroImgElement;
@property (retain, nonatomic) IKImageElement *bgImgElement;
@property (retain, nonatomic) IKImageElement *uberImgElement;
@property (retain, nonatomic) IKMediaContentElement *bgMediaContentElement;
@property (retain, nonatomic) UIImage *bgImage;
@property (weak, nonatomic) id <TVMediaPlaying> mediaPlayer;
@property (retain, nonatomic) TVMediaInfo *selectedMediaInfo;
@property (copy, nonatomic) NSArray *supplementaryViewControllers;
@property (retain, nonatomic) UIViewController *focusedSupplementaryViewController;
@property (retain, nonatomic, readonly) _TVStackWrappingView *stackWrappingView;
@property (retain, nonatomic) _TVStackCollectionView *collectionView;
@property (nonatomic, readonly) TVObservableEventController *observableEventController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)_blurEffectStyle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)_overlayView;
- (id)_flowLayout;
- (void)scrollToTop;
- (void)_updateViewLayout;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_cancelImpressionsUpdate;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_updateImpressions;
- (void)_recordImpressionsForVisibleView;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (_Bool)_updateSupplementaryViewControllersWithElements:(id)arg1 updateStyles:(_Bool)arg2;
- (void)_disableScrollingIfNecessary:(id)arg1;
- (void)_updateBackgroundViews;
- (void)_updateViewOverlay;
- (void)_updateViewSupplementaryViews;
- (long long)_supplementaryViewSectionIndex;
- (id)_modalPresenterPresentedViewController;
- (void)updateBackgroundAndBackdrop;
- (id)_preferredFocusedSupplementaryView;
- (void)_mediaPlayerStateDidChange;
- (void)_mediaPlayerCoverImageDidChange;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)viewControllerWithElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (void)didUpdateSupplementarySectionInfo;
- (id)parsedMediaInfo;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)_isBackdropNeeded;
- (_Bool)_shouldLoadBackgroundImageAsynchronously;

@end
