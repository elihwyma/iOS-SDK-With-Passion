/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <UIKit/UIViewController.h>

@class AMSUserNotification, AVPlayerViewController, NSString, UIImageView, UILabel;

@protocol AMPUserNotificationContentDelegate;

__attribute__((visibility("hidden")))
@interface AMPUserNotificationContentViewController : UIViewController

{
    AMSUserNotification *_userNotification;
    id <AMPUserNotificationContentDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIImageView *_imageView;
    AVPlayerViewController *_videoPlayerController;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionCategoryOptions;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) AVPlayerViewController *videoPlayerController;
@property (retain, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (nonatomic, readonly) AMSUserNotification *userNotification;
@property (weak, nonatomic) id <AMPUserNotificationContentDelegate> delegate;
@property (nonatomic, readonly) struct CGSize expectedContentSize;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)mediaPause;
- (void)imageViewTapped:(id)arg1;
- (id)initWithNotification:(id)arg1 delegate:(id)arg2;

@end
