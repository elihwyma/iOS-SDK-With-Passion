/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface PXEducationalTipViewController : UIViewController

{
    UIVisualEffectView *_visualEffectView;
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UIButton *_dismissButton;
    UIImage *_image;
    NSString *_message;
    NSString *_dismissButtonTitle;
    CDUnknownBlockType _dismissHandler;
}

@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;

- (void)setTitle:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_invalidateContent;
- (void)_handleDismissButton:(id)arg1;

@end
