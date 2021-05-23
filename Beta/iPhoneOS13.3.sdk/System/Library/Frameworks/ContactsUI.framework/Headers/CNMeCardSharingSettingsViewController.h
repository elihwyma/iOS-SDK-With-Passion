/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContact, CNContactImage, CNContactStore, CNMeCardSharingAudienceDataSource, CNMeCardSharingContactAvatarProvider, CNMeCardSharingEnabledDataSource, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingSettingsHeaderViewController, CNMeCardSharingSettingsNameDataSource, CNMutableContact, CNPhotoPickerViewController, CNSharingProfileLogger, NSArray, NSString, UISwitch, UITableView, UITextField;

@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingNameProvider, CNMeCardSharingSettingsViewControllerDelegate;

@interface CNMeCardSharingSettingsViewController : UIViewController

{
    _Bool _shouldSetAsMeContact;
    id <CNMeCardSharingSettingsViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNContact *_contact;
    CNMutableContact *_editingContact;
    CNContactImage *_editingContactImage;
    NSString *_editingGivenName;
    NSString *_editingFamilyName;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    CNMeCardSharingSettingsHeaderViewController *_headerViewController;
    id <CNMeCardSharingAvatarProvider> _avatarProvider;
    id <CNMeCardSharingNameProvider> _nameProvider;
    CNMeCardSharingSettingsNameDataSource *_nameDataSource;
    CNMeCardSharingEnabledDataSource *_enabledDataSource;
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;
    CNPhotoPickerViewController *_photoPicker;
    NSArray *_sectionDataSources;
    UISwitch *_shareSwitch;
    UITableView *_tableView;
    long long _nameOrder;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    CNMeCardSharingContactAvatarProvider *_editingContactAvatarProvider;
    CNSharingProfileLogger *_logger;
    double _keyboardHeight;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNContactImage *editingContactImage;
@property (retain, nonatomic) NSString *editingGivenName;
@property (retain, nonatomic) NSString *editingFamilyName;
@property (nonatomic, readonly) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) CNMeCardSharingSettingsHeaderViewController *headerViewController;
@property (nonatomic, readonly) id <CNMeCardSharingAvatarProvider> avatarProvider;
@property (nonatomic, readonly) id <CNMeCardSharingNameProvider> nameProvider;
@property (nonatomic, readonly) CNMeCardSharingSettingsNameDataSource *nameDataSource;
@property (nonatomic, readonly) CNMeCardSharingEnabledDataSource *enabledDataSource;
@property (nonatomic, readonly) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *sectionDataSources;
@property (retain, nonatomic) UISwitch *shareSwitch;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) CNMeCardSharingContactAvatarProvider *editingContactAvatarProvider;
@property (nonatomic) _Bool shouldSetAsMeContact;
@property (nonatomic, readonly) CNSharingProfileLogger *logger;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id <CNMeCardSharingSettingsViewControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool sharingEnabled;
@property (nonatomic, readonly) unsigned long long selectedSharingAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(_Bool)arg2;
- (void)sharingSettingsHeaderWasTapped:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 avatarProvider:(id)arg3 nameProvider:(id)arg4 sharingEnabled:(_Bool)arg5 selectedSharingAudience:(unsigned long long)arg6;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyDelegateOfChangesWithDidSaveToMeCard:(_Bool)arg1;
- (void)givenNameDidChange:(id)arg1;
- (void)familyNameDidChange:(id)arg1;
- (void)updateVisibilityOfAudienceSection;
- (void)keyboardWillHide:(id)arg1;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)textFieldForIndex:(long long)arg1;
- (void)processSelectionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;
- (void)presentPhotoPickerControllerForContact:(id)arg1;

@end
