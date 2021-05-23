/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <UIKit/UIViewController.h>

#import <FamilyCircleUI/Swift-Protocol.h>

@class AAUIProfilePictureStore, ACAccount, NSString, NSValue, UIButton, UIImage, UIImagePickerController, UILabel, UIScrollView, UIView;

@protocol FAConfirmIdentityViewControllerDelegate;

@interface FAConfirmIdentityViewController : UIViewController <Swift>

{
    ACAccount *_appleAccount;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
    id <FAConfirmIdentityViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <FAConfirmIdentityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)instructions;
- (void)_updateFonts;
- (id)pageTitle;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (_Bool)shouldShowInviteeInstructions;
- (void)_photoWasTapped:(id)arg1;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)arg1;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)_showImagePickerForAvailableSources;
- (void)_updateViewsInPhotoArea:(id)arg1;

@end
