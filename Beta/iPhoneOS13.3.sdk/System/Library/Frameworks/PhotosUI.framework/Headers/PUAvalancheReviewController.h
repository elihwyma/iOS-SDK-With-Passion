/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSString, PHCachingImageManager, PHFetchResult, PLAvalanche, PLManagedAsset, PUAssetTransitionInfo, PUAvalancheReviewCollectionViewLayout, PUAvalancheReviewControllerSpec, PUPhotoPinchGestureRecognizer, PUPhotosSharingTransitionContext, PUPhotosZoomingSharingGridCell, PUReviewInstructionalView, PUReviewScrubber, PUTransitionViewAnimator, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;

@protocol PLAssetContainer, PLAssetContainerList, PUAvalancheReviewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAvalancheReviewController : UIViewController <Swift>

{
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_resultsForAssetCollection;
    _Bool __updatingContentOffsetFromScrubbing;
    _Bool __completingReviewMode;
    id <PUAvalancheReviewControllerDelegate> _delegate;
    id <PLAssetContainerList> _avalancheContainerList;
    PUAvalancheReviewControllerSpec *__spec;
    UICollectionView *__collectionView;
    PUAvalancheReviewCollectionViewLayout *__collectionViewLayout;
    PUReviewInstructionalView *__instructionalView;
    UIBarButtonItem *__doneBarButtonItem;
    UIBarButtonItem *__cancelBarButtonItem;
    UITapGestureRecognizer *__tapGestureRecognizer;
    NSIndexPath *__inFlightReferenceIndexPath;
    PLAvalanche *__avalancheBeingReviewed;
    PLManagedAsset *__initialAsset;
    NSOrderedSet *__initialFavorites;
    id <PLAssetContainer> __currentAssetContainer;
    PHCachingImageManager *__cachingImageManager;
    NSMutableSet *__preheatedAssets;
    NSMutableDictionary *__assetsToSizeDictionary;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *__photosSharingTransitionContext;
    PUAssetTransitionInfo *__assetTransitionInfo;
    struct CGRect __previousPreheatRect;
}

@property (nonatomic, readonly) PUAvalancheReviewControllerSpec *_spec;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) PUAvalancheReviewCollectionViewLayout *_collectionViewLayout;
@property (nonatomic, readonly) PUReviewScrubber *_reviewScrubber;
@property (nonatomic, readonly) PUReviewInstructionalView *_instructionalView;
@property (nonatomic, readonly) UIBarButtonItem *_doneBarButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *_cancelBarButtonItem;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) NSIndexPath *_inFlightReferenceIndexPath;
@property (nonatomic, readonly) _Bool _updatingContentOffsetFromScrubbing;
@property (nonatomic) _Bool _completingReviewMode;
@property (nonatomic, readonly) PLAvalanche *_avalancheBeingReviewed;
@property (nonatomic, readonly) PLManagedAsset *_initialAsset;
@property (nonatomic, readonly) NSOrderedSet *_initialFavorites;
@property (nonatomic, readonly) id <PLAssetContainer> _currentAssetContainer;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect;
@property (retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets;
@property (retain, nonatomic, setter=_setAssetsToSizeDictionary:) NSMutableDictionary *_assetsToSizeDictionary;
@property (retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer;
@property (retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator;
@property (retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell;
@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout;
@property (retain, nonatomic) PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
@property (retain, nonatomic) PUAssetTransitionInfo *_assetTransitionInfo;
@property (nonatomic) id <PUAvalancheReviewControllerDelegate> delegate;
@property (nonatomic, readonly) id <PLAssetContainerList> avalancheContainerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;

+ (id)filteringContext;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)_currentAsset;
- (id)assetsInAssetCollection:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_resetPreheating;
- (void)_updatePreheatedAssets;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (id)embeddedActivityView;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
- (id)transitionCollectionView;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (struct CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (_Bool)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2;
- (id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4;
- (long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)_updateEnabledNavigationBarItems;
- (void)_updateNavigationItemTitle;
- (void)_updateBarItemsAnimated:(_Bool)arg1;
- (void)_updateMainViewAnimated:(_Bool)arg1;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 orientation:(long long)arg3;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1 atIndexPath:(id)arg2;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (void)_handlePhotoPinch:(id)arg1;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_phAssetAtIndexPath:(id)arg1;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2;
- (void)_pageToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_updateCollectionViewLayoutInsets;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_endZoomingForCell;
- (unsigned short)reviewScrubberImageFormat;
- (void)_updateReviewScrubberFromContentOffset;
- (void)_reloadAvalancheDataWithAsset:(id)arg1;
- (void)_promoteFavoriteAssetsAndDeleteNonPicks:(_Bool)arg1 withReviewCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_dismissReviewControllerWithAsset:(id)arg1;
- (void)_finishReviewAndDeleteNonPicks:(_Bool)arg1;
- (void)_cancelReviewMode;
- (void)_cancelReviewModeAction:(id)arg1;
- (void)pu_assetContainerDidChange:(id)arg1;
- (void)_stopPreheatingAllAssets;
- (void)_startPreheatingAllAssets;
- (struct CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2;

@end
