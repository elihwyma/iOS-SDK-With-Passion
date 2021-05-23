/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class CNContact, CNContactStore, NSLayoutConstraint, OBBoldTrayButton;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController

{
    OBBoldTrayButton *_confirmButton;
    CNContactStore *_contactStore;
    CNContact *_contact;
    NSLayoutConstraint *_tableViewHeightConstraint;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;

+ (id)headerText;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleConfirmButtonTapped;
- (id)confirmButtonTitle;
- (void)updateForContentSizeCategoryChange;
- (void)didTapDoneButton:(id)arg1;

@end
