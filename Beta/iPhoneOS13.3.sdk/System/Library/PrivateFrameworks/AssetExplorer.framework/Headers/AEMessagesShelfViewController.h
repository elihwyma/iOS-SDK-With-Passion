/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIViewController.h>

#import <AssetExplorer/Swift-Protocol.h>

@class AEPackageTransport, AEWrappedDataSourceManager, NSMutableSet, NSString, PUAssetExplorerReviewScreenViewController, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUReviewDataSource, PXAssetsScene, PXBasicUIViewTileAnimator, PXScrollViewController, PXTilingController, UIColor;

@protocol CKPluginEntryViewControllerDelegate;

@interface AEMessagesShelfViewController : UIViewController <Swift>

{
    id <CKPluginEntryViewControllerDelegate> _entryViewDelegate;
    PXTilingController *__tilingController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXAssetsScene *__sceneController;
    PXScrollViewController *__scrollViewController;
    PUReviewDataSource *__dataSource;
    PUReviewAssetsDataSourceManager *__internalReviewDataSourceManager;
    PUReviewAssetsMediaProvider *__internalReviewMediaProvider;
    AEWrappedDataSourceManager *__wrappedDataSourceManager;
    AEPackageTransport *__packageTransport;
    NSMutableSet *__tilesInUse;
    long long __indexToScrollTo;
    UIColor *__roundedCornerOverlayFillColor;
    PUAssetExplorerReviewScreenViewController *_presentedReviewController;
}

@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXAssetsScene *_sceneController;
@property (nonatomic, readonly) PXScrollViewController *_scrollViewController;
@property (nonatomic, readonly) PUReviewDataSource *_dataSource;
@property (nonatomic, readonly) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager;
@property (nonatomic, readonly) PUReviewAssetsMediaProvider *_internalReviewMediaProvider;
@property (nonatomic, readonly) AEWrappedDataSourceManager *_wrappedDataSourceManager;
@property (nonatomic, readonly) AEPackageTransport *_packageTransport;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, setter=_setIndexToScrollTo:) long long _indexToScrollTo;
@property (retain, nonatomic) UIColor *_roundedCornerOverlayFillColor;
@property (retain, nonatomic) PUAssetExplorerReviewScreenViewController *presentedReviewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) _Bool wantsClearButton;
@property (readonly) _Bool wantsEdgeToEdgeLayout;
@property (readonly) _Bool loadedContentView;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)handleTap:(id)arg1;
- (id)framesOfVisibleContentViewInCoordinateSpace:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)_currentAssetsDataSource;
- (long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 itemAtIndexPathIsAnimatedImage:(struct PXSimpleIndexPath)arg2;
- (double)layout:(id)arg1 itemAtIndexPathDuration:(struct PXSimpleIndexPath)arg2;
- (_Bool)layoutShouldShowVideoDuration:(id)arg1;
- (id)initWithPackageTransport:(id)arg1;
- (void)_presentReviewViewController:(id)arg1;
- (void)_dismissPresentedReviewController:(id)arg1 animated:(_Bool)arg2;
- (void)_transportStagingStateDidChange;
- (void)_removeFromShelf:(id)arg1;
- (void)_toggleIris:(id)arg1;
- (void)_presentReviewForAssetReference:(id)arg1;
- (id)contentAssetReferenceAtPoint:(struct CGPoint)arg1;
- (id)_traverseHierarchyForFillColorStartingWithView:(id)arg1;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(_Bool)arg2 mediaOrigin:(long long)arg3;

@end
