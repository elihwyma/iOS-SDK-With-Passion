/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactPickerViewController, CNContactStore, FAFamilyMember, NSString;

@protocol CNSchedulerProvider, CNUICoreFamilyMemberContactsDataSource, CNUIFamilyMemberContactsControllerDelegate, CNUIFamilyMemberContactsPresentation;

@interface CNUIFamilyMemberContactsController : NSObject <Swift>

{
    id <CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
    FAFamilyMember *_familyMember;
    id <CNUIFamilyMemberContactsControllerDelegate> _delegate;
    CNContactStore *_familyMemberScopedContactStore;
    id <CNUICoreFamilyMemberContactsDataSource> _dataSource;
    id <CNSchedulerProvider> _schedulerProvider;
    CNContactPickerViewController *_contactPickerViewController;
}

@property (nonatomic, readonly) CNContactStore *familyMemberScopedContactStore;
@property (nonatomic, readonly) id <CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;
@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsDataSource> dataSource;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (weak, nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) long long countOfFamilyMemberContacts;
@property (nonatomic, readonly) long long fetchStatus;
@property (weak, nonatomic) id <CNUIFamilyMemberContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isViewController:(id)arg1 presentedByContactPicker:(id)arg2;

- (id)init;
- (void)presentViewController:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)pickerDidSelectAddNewContact:(id)arg1;
- (void)contactPickerDidCancel:(id)arg1;
- (void)familyMemberContactItemsDidChange;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;
- (void)performInteraction:(long long)arg1;
- (void)performDefaultInteraction;
- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg1;
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg1;
- (void)addContactsOptionsSheetViewControllerDidCancel:(id)arg1;
- (void)performDisplayContactsInteraction;
- (void)performAddFromMainContactsInteraction;
- (void)performAddContactsInteraction;
- (id)anchorViewForAddContactsInteraction;
- (void)dismissPresentedViewController:(id)arg1;
- (void)cancelPresentationOfViewController:(id)arg1;

@end
