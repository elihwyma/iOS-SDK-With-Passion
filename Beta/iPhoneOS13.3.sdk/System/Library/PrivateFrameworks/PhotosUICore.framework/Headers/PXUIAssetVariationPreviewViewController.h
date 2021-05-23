/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class ISVideoPlayerUIView, ISWrappedAVPlayer, PXAssetVariationRenderResult, UIImage, UIImageView;

@interface PXUIAssetVariationPreviewViewController : UIViewController

{
    UIImageView *_imageView;
    ISVideoPlayerUIView *_videoView;
    ISWrappedAVPlayer *_videoPlayer;
    UIImage *_image;
    PXAssetVariationRenderResult *_renderResult;
}

@property (nonatomic, readonly) PXAssetVariationRenderResult *renderResult;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithRenderResult:(id)arg1;

@end
