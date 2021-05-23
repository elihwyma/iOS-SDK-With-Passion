/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContact, CNContactImage, CNContactStore, CNMeCardSharingAudienceDataSource, CNMeCardSharingAvatarViewController, CNMeCardSharingEnabledDataSource, CNMeCardSharingHeaderViewController, CNMeCardSharingPickerLayoutAttributes, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, OBBoldTrayButton, OBLinkTrayButton, UISwitch, UITableView, UIView;

@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingPickerViewControllerDelegate;

@interface CNMeCardSharingPickerViewController : UIViewController

{
    _Bool _shouldSetMeContact;
    _Bool _sharingEnabled;
    unsigned long long _mode;
    id <CNMeCardSharingPickerViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNContact *_contact;
    CNMutableContact *_draftContact;
    CNContactImage *_draftContactImage;
    CNMeCardSharingHeaderViewController *_headerViewController;
    id <CNMeCardSharingAvatarProvider> _avatarProvider;
    CNMeCardSharingAvatarViewController *_avatarViewController;
    CNMeCardSharingEnabledDataSource *_enabledDataSource;
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    CNPhotoPickerViewController *_photoPicker;
    NSArray *_sectionDataSources;
    UIView *_buttonTray;
    OBBoldTrayButton *_confirmButton;
    OBLinkTrayButton *_laterButton;
    UISwitch *_shareSwitch;
    UITableView *_tableView;
}

@property (nonatomic) unsigned long long meCardSharingStatus;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) _Bool shouldSetMeContact;
@property (retain, nonatomic) CNMutableContact *draftContact;
@property (retain, nonatomic) CNContactImage *draftContactImage;
@property (nonatomic) _Bool sharingEnabled;
@property (retain, nonatomic) CNMeCardSharingHeaderViewController *headerViewController;
@property (retain, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource;
@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *sectionDataSources;
@property (retain, nonatomic) UIView *buttonTray;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) OBLinkTrayButton *laterButton;
@property (retain, nonatomic) UISwitch *shareSwitch;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic) id <CNMeCardSharingPickerViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSString *sharedName;
@property (nonatomic, readonly) unsigned long long selectedNameFormat;
@property (nonatomic, readonly) unsigned long long selectedSharingAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithContact:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(_Bool)arg2;
- (void)saveDraftContact;
- (void)avatarViewControllerWasTapped:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 sharingEnabled:(_Bool)arg4 selectedNameFormat:(unsigned long long)arg5 selectedSharingAudience:(unsigned long long)arg6 mode:(unsigned long long)arg7;
- (void)didTapSetUpLaterButton:(id)arg1;

@end
