/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class CNMutableContact, CNSharingProfileAudienceDataSource, NSLayoutConstraint, NSString, OBBoldTrayButton, UITextField;

@protocol CNSharingProfileOnboardingAudienceViewControllerDelegate;

@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController

{
    id <CNSharingProfileOnboardingAudienceViewControllerDelegate> _delegate;
    NSLayoutConstraint *_tableViewHeightConstraint;
    OBBoldTrayButton *_confirmButton;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    CNMutableContact *_contact;
    CNSharingProfileAudienceDataSource *_sharingAudienceDataSource;
    double _keyboardHeight;
    long long _nameOrder;
}

@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) CNMutableContact *contact;
@property (retain, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long nameOrder;
@property (weak, nonatomic) id <CNSharingProfileOnboardingAudienceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)headerText;
+ (id)descriptorForRequiredKeys;

- (void)dealloc;
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
- (void)givenNameDidChange:(id)arg1;
- (void)familyNameDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2;
- (id)confirmButtonTitle;
- (void)handleConfirmButtonTapped:(id)arg1;
- (id)cellForNameInTableView:(id)arg1;

@end
