/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class CNContact, CNMutableContact, CNPhotoPickerViewController, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, CNSharingProfilePhotoPickerViewController, NSString, OBBoldTrayButton;

@protocol AVTAvatarRecord, CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate;

@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController

{
    id <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> _delegate;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNSharingProfileAvatarItemProviderConfiguration *_avatarItemProviderConfiguration;
    CNSharingProfileLogger *_logger;
    OBBoldTrayButton *_confirmButton;
    CNSharingProfilePhotoPickerViewController *_sharingPhotoPickerViewController;
    CNPhotoPickerViewController *_photoPickerViewController;
    CNMutableContact *_photoProviderContact;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) CNSharingProfilePhotoPickerViewController *sharingPhotoPickerViewController;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController;
@property (retain, nonatomic) CNMutableContact *photoProviderContact;
@property (nonatomic) id <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)contentView;
- (void)loadView;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)updateForContentSizeCategoryChange;
- (void)didTapDoneButton:(id)arg1;
- (void)sharingPhotoPickerDidSelectAddItem:(id)arg1;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3;
- (unsigned long long)imageTypeFromAvatarType:(long long)arg1;

@end
