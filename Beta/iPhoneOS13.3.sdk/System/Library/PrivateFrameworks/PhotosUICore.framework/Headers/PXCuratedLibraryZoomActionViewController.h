/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UIImageView, UISlider;

@interface PXCuratedLibraryZoomActionViewController : PXCuratedLibraryActionViewController

{
    UIImageView *_leadingIconView;
    UISlider *_slider;
    UIImageView *_trailingIconView;
}

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)_handleSlider:(id)arg1;

@end
