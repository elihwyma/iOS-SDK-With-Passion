/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUAssetExplorerReviewScreenViewController, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUReviewDataSource;

@protocol CAMCameraReviewDelegate;

@interface CAMReviewViewController : UIViewController

{
    id <CAMCameraReviewDelegate> _reviewDelegate;
    NSArray *__initialAssets;
    PUReviewDataSource *__reviewDataSource;
    PUReviewAssetsDataSourceManager *__internalReviewDataSourceManager;
    PUReviewAssetsMediaProvider *__internalReviewMediaProvider;
    PUAssetExplorerReviewScreenViewController *__internalReviewViewController;
}

@property (nonatomic, readonly) NSArray *_initialAssets;
@property (nonatomic, readonly) PUReviewDataSource *_reviewDataSource;
@property (nonatomic, readonly) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager;
@property (nonatomic, readonly) PUReviewAssetsMediaProvider *_internalReviewMediaProvider;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenViewController *_internalReviewViewController;
@property (weak, nonatomic) id <CAMCameraReviewDelegate> reviewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAssets:(id)arg1;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;

@end
