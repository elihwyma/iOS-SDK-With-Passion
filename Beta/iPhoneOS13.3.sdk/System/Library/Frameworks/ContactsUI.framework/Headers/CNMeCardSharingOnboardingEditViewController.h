/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNMeCardSharingOnboardingViewController.h>

@class CNAvatarEditingManager, CNContact, CNContactStore, CNMeCardSharingOnboardingAvatarCarouselViewController, CNMeCardSharingOnboardingHeaderViewController, CNMeCardSharingPickerLayoutAttributes, CNMutableContact, CNPhotoPickerVariantsManager, CNPhotoPickerViewController, CNSharingProfileLogger, NSString, UITextField;

@protocol AVTAvatarRecord, CNMeCardSharingNameProvider, CNMeCardSharingOnboardingEditViewControllerDelegate;

@interface CNMeCardSharingOnboardingEditViewController : CNMeCardSharingOnboardingViewController

{
    _Bool _delegateDoesRespondToOnboardingResultSelector;
    _Bool _shouldSetAsMeContact;
    id <CNMeCardSharingOnboardingEditViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    long long _nameOrder;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    CNMutableContact *_editingContact;
    CNMutableContact *_avatarCarouselEditingContact;
    NSString *_editingGivenName;
    NSString *_editingFamilyName;
    id <CNMeCardSharingNameProvider> _nameProvider;
    CNMeCardSharingOnboardingAvatarCarouselViewController *_avatarCarouselViewController;
    CNMeCardSharingOnboardingHeaderViewController *_headerViewController;
    CNPhotoPickerViewController *_photoPickerViewController;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNAvatarEditingManager *_posePicker;
    CNSharingProfileLogger *_logger;
}

@property (nonatomic) _Bool delegateDoesRespondToOnboardingResultSelector;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContact *contact;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (nonatomic) _Bool shouldSetAsMeContact;
@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNMutableContact *avatarCarouselEditingContact;
@property (retain, nonatomic) NSString *editingGivenName;
@property (retain, nonatomic) NSString *editingFamilyName;
@property (retain, nonatomic) id <CNMeCardSharingNameProvider> nameProvider;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselViewController;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNAvatarEditingManager *posePicker;
@property (nonatomic, readonly) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id <CNMeCardSharingOnboardingEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)headerText;
+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)givenNameDidChange:(id)arg1;
- (void)familyNameDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)textFieldForIndex:(long long)arg1;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;
- (void)handleConfirmButtonTapped;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (id)confirmButtonTitle;
- (void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)presentPhotoPickerVariantListFor:(id)arg1 FromViewController:(id)arg2;
- (void)showAvatarPosePickerFromItem:(id)arg1;
- (void)avatarCarouselViewControllerDidTapPhotoPickerCell:(id)arg1;
- (void)avatarCarouselViewControllerDidUpdateCenterMostItem:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 avatarRecord:(id)arg4;
- (void)updateAvatarCarouselContactName;
- (void)finishOnboardingWithProviderItem:(id)arg1;
- (long long)contactImageSourceForType:(unsigned long long)arg1;
- (void)finishOnboardingWithDidSaveToMeContact:(_Bool)arg1;
- (void)notifyDelegateWithContactImage:(id)arg1 didSaveToMeContact:(_Bool)arg2;

@end
