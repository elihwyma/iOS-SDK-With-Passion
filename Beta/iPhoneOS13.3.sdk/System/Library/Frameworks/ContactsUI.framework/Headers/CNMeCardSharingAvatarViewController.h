/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CAShapeLayer, CNAvatarViewController, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@protocol CNAvatarImageProvider, CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingAvatarViewController : UIViewController

{
    _Bool _hasImage;
    id <CNMeCardSharingAvatarViewControllerDelegate> _delegate;
    UIView *_avatarContainerView;
    CAShapeLayer *_circularLayer;
    UIImageView *_imageView;
    UILabel *_addPhotoLabel;
    id <CNMeCardSharingAvatarProvider> _avatarProvider;
    id <CNAvatarImageProvider> _fallbackImageProvider;
    CNAvatarViewController *_avatarViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) _Bool hasImage;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) CAShapeLayer *circularLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *addPhotoLabel;
@property (retain, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) id <CNAvatarImageProvider> fallbackImageProvider;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id <CNMeCardSharingAvatarViewControllerDelegate> delegate;

- (void)reload;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithAvatarProvider:(id)arg1;
- (void)updateWithAvatarProvider:(id)arg1;
- (void)updateForChangedImageAnimated:(_Bool)arg1;
- (void)didTapAvatarView:(id)arg1;

@end
