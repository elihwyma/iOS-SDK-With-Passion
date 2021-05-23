/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class SUTouchCaptureView, UIImageView;

@interface SUImageViewController : SUViewController

{
    SUTouchCaptureView *_backstopView;
    UIImageView *_imageView;
}

- (void)dealloc;
- (void)loadView;
- (id)_imageView;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)_backstopAction:(id)arg1;

@end
