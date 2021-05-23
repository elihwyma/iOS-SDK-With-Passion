/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIViewController.h>

#import <AssetExplorer/Swift-Protocol.h>

@class AECameraAssetPackageGenerator, AEPackageTransport, AEProgressViewModel, CAMCameraReviewAdapter, NSArray, NSIndexSet, NSMutableSet, NSString, PUAssetExplorerReviewScreenViewController, PXAssetsScene, PXBasicUIViewTileAnimator, PXMediaProvider, PXPhotoKitAssetsDataSourceManager, PXTilingController, PXUIScrollViewController, UIPopoverPresentationController, UIView;

@protocol AEExplorerViewControllerDelegate, AEHostStatisticsManager;

@interface AEExplorerViewController : UIViewController <Swift>

{
    _Bool __fakeAllCloudAndVideo;
    _Bool __didPresentPhotoLibrary;
    id <AEExplorerViewControllerDelegate> _delegate;
    AEPackageTransport *__packageTransport;
    PXPhotoKitAssetsDataSourceManager *__dataSourceManager;
    PXMediaProvider *__mediaProvider;
    id <AEHostStatisticsManager> __statisticsManager;
    NSArray *__clientGestureRecognizers;
    NSIndexSet *__missingThumbnailAssetIndexes;
    NSIndexSet *__pendingMissingThumbnailAssetIndexes;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    PXTilingController *__tilingController;
    PXAssetsScene *__sceneController;
    AEProgressViewModel *__progressModel;
    CAMCameraReviewAdapter *__cameraReviewAdapter;
    AECameraAssetPackageGenerator *__cameraPackageGenerator;
    UIView *__previousSuperview;
    NSMutableSet *__tilesInUse;
    PUAssetExplorerReviewScreenViewController *__reviewController;
    UIView *__imagePickerSenderView;
    UIPopoverPresentationController *__imagePickerPopoverPresentationController;
}

@property (nonatomic, readonly) AEPackageTransport *_packageTransport;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
@property (nonatomic, readonly) PXMediaProvider *_mediaProvider;
@property (nonatomic, readonly) id <AEHostStatisticsManager> _statisticsManager;
@property (readonly) NSArray *_clientGestureRecognizers;
@property (retain, nonatomic, setter=_setMissingThumbnailAssetIndexes:) NSIndexSet *_missingThumbnailAssetIndexes;
@property (retain, nonatomic, setter=_setPendingMissingThumbnailAssetIndexes:) NSIndexSet *_pendingMissingThumbnailAssetIndexes;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (retain, nonatomic, setter=_setTilingController:) PXTilingController *_tilingController;
@property (retain, nonatomic, setter=_setSceneController:) PXAssetsScene *_sceneController;
@property (nonatomic, readonly) AEProgressViewModel *_progressModel;
@property (nonatomic, readonly) CAMCameraReviewAdapter *_cameraReviewAdapter;
@property (nonatomic, readonly) AECameraAssetPackageGenerator *_cameraPackageGenerator;
@property (retain, nonatomic, setter=_setPreviousSuperview:) UIView *_previousSuperview;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (retain, nonatomic, setter=_setReviewController:) PUAssetExplorerReviewScreenViewController *_reviewController;
@property (nonatomic, setter=_setFakeAllCloudAndVideo:) _Bool _fakeAllCloudAndVideo;
@property (weak, nonatomic, setter=_setImagePickerSenderView:) UIView *_imagePickerSenderView;
@property (weak, nonatomic, setter=_setImagePickerPopoverPresentationController:) UIPopoverPresentationController *_imagePickerPopoverPresentationController;
@property (nonatomic, setter=_setDidPresentPhotoLibrary:) _Bool _didPresentPhotoLibrary;
@property (weak, nonatomic) id <AEExplorerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (id)scrollView;
- (void)viewSafeAreaInsetsDidChange;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissPresentedViewController:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)_currentDataSource;
- (void)showPhotoLibraryPicker:(id)arg1;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (struct CGSize)_maximumThumbnailSize;
- (void)_presentConfidentialityAlertWithConfirmAction:(CDUnknownBlockType)arg1 abortAction:(CDUnknownBlockType)arg2;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (long long)_currentLayoutStyle;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(_Bool)arg2 mediaOrigin:(long long)arg3;
- (void)associateAsset:(id)arg1 withTile:(void *)arg2;
- (_Bool)confirmAsset:(id)arg1 matchesView:(id)arg2 alertOnInternal:(_Bool)arg3;
- (_Bool)layout:(id)arg1 shouldShowVideoDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 shouldShowCloudDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 shouldShowLoopDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)initWithPackageTransport:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 statisticsManager:(id)arg4 additionalGestureRecognizers:(id)arg5;
- (Class)assetsSceneClass;
- (id)_selectedAssetUUIDs;
- (void)_configureReviewControllerWithAssetReference:(id)arg1;
- (void)_dismissReviewScreenViewController;
- (id)_presentViewControllerAboveKeyboard:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissViewControllerAboveKeyboardAnimated:(_Bool)arg1;
- (void)_handleImagePickerMediaWithInfo:(id)arg1;
- (void)_dismissPhotoLibraryIfNeeded;
- (void)_updatePhotoLibraryPresentationIfNeeded;
- (struct CGRect)_sourceRectForPhotoLibraryPresentationInCoordinateSpace:(id)arg1;
- (void)_handleInProgressPackageGenerator:(id)arg1 suppressLivePhotoContent:(_Bool)arg2 mediaOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleInProgressPackageGenerator:(id)arg1;
- (void)_handleAttemptedSelectionToggleOfAssetReference:(id)arg1 cancelIfAlreadySelected:(_Bool)arg2 suppressLivePhotoContent:(_Bool)arg3;
- (void)_stageAsset:(id)arg1 withReference:(id)arg2 atIndexPath:(struct PXSimpleIndexPath)arg3 suppressLivePhotoContent:(_Bool)arg4;
- (long long)_layoutStyleForSize:(struct CGSize)arg1;
- (id)_createNewLayoutForDataSource:(id)arg1;
- (id)_validateAssetReference:(id)arg1 forScrollViewPoint:(struct CGPoint)arg2;
- (id)contentAssetReferenceAtPoint:(struct CGPoint)arg1 outContentFrame:(out struct CGRect *)arg2;
- (void)_handleTransportStagingUpdateWithDataSource:(id)arg1;
- (_Bool)_isDownloadRequiredForAsset:(id)arg1;
- (id)_thumbnailResourcesIndexSetForAssets:(id)arg1;
- (void)_addThumbnailIndexes:(id)arg1;
- (void)_computeInitialResourcesIndexSetAsync;
- (void)_attachGestureRecognizersIfNeeded:(void *)arg1;
- (void)ppt_openPhotoLibrary;
- (void)ppt_scrollThumbnailGridWithTestName:(id)arg1 fakeExpensiveBadges:(_Bool)arg2;

@end
