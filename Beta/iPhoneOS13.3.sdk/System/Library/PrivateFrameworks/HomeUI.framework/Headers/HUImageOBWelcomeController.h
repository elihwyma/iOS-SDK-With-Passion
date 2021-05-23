/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImage, UIImageView;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController

{
    UIImageView *_contentImageView;
}

@property (nonatomic, readonly) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *contentImage;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)_contentAspectRatio;
- (void)_updateContentMode;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (void)_viewDidUpdateContent;

@end
