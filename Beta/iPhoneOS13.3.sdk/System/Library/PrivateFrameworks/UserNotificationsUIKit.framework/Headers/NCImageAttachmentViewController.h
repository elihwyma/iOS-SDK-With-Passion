/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class ISAnimatedImagePlayer, UIView;

@interface NCImageAttachmentViewController : NCAttachmentViewController

{
    UIView *_imageView;
    ISAnimatedImagePlayer *_animatedImagePlayer;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) ISAnimatedImagePlayer *animatedImagePlayer;

- (void)dealloc;
- (struct CGSize)contentSize;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;

@end
