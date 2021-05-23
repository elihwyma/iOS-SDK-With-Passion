/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNMeCardSharingAvatarViewController, NSString, UIButton, UIView;

@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingSettingsHeaderViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingSettingsHeaderViewController : UIViewController

{
    id <CNMeCardSharingSettingsHeaderViewControllerDelegate> _delegate;
    id <CNMeCardSharingAvatarProvider> _avatarProvider;
    CNMeCardSharingAvatarViewController *_avatarViewController;
    UIButton *_labelButton;
    UIView *_separatorView;
}

@property (retain, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIButton *labelButton;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id <CNMeCardSharingSettingsHeaderViewControllerDelegate> delegate;
@property (nonatomic, readonly) double separatorHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)avatarEdgeLengthForTraitCollection:(id)arg1;

- (void)reload;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)avatarViewControllerDidUpdateImage:(id)arg1;
- (void)avatarViewControllerWasTapped:(id)arg1;
- (id)initWithAvatarProvider:(id)arg1;
- (double)desiredHeightForTraitCollection:(id)arg1;
- (void)updateWithAvatarProvider:(id)arg1;
- (void)updateForChangedImage;
- (void)labelButtonTapped:(id)arg1;

@end
