/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFWallpaper, NSString, UIButton, UIImage, UIImageView, UIScrollView, UIView, UIVisualEffectView;

@protocol HUWallpaperEditingViewControllerDelegate;

@interface HUWallpaperEditingViewController : UIViewController <Swift>

{
    _Bool _statusBarHidden;
    id <HUWallpaperEditingViewControllerDelegate> _delegate;
    HFWallpaper *_wallpaper;
    UIImage *_image;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIView *_buttonContainerView;
    UIView *_buttonSeparatorView;
    UIButton *_cancelButton;
    UIButton *_setButton;
    UIVisualEffectView *_buttonBackgroundView;
}

@property (nonatomic) _Bool statusBarHidden;
@property (retain, nonatomic) HFWallpaper *wallpaper;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *buttonSeparatorView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *setButton;
@property (retain, nonatomic) UIVisualEffectView *buttonBackgroundView;
@property (weak, nonatomic) id <HUWallpaperEditingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)buttonPressed:(id)arg1;
- (id)_createButtonViews;
- (id)_createButtonConstraints;
- (void)updateScrollViewScale;
- (id)transparentButtonWithTitle:(id)arg1;
- (void)buttonTouchStarted:(id)arg1;
- (void)buttonTouchFinished:(id)arg1;
- (id)initWithWallpaper:(id)arg1 image:(id)arg2 delegate:(id)arg3;

@end
