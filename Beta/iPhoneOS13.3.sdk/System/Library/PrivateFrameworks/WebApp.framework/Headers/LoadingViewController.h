/*
 Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

#import <UIKit/UIViewController.h>

@class UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LoadingViewController : UIViewController

{
    _Bool _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    long long _orientation;
    UIView *_statusBarView;
    long long _preferredStatusBarStyle;
}

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)initWithWebClip:(id)arg1 orientation:(long long)arg2;

@end
