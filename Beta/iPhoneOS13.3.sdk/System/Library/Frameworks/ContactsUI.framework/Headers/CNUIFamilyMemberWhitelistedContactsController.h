/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactFormatter, CNContactStore, CNContactViewController, FAFamilyMember, NSArray, NSString;

@protocol CNSchedulerProvider, CNUICoreContactManagementConsentCheck, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberWhitelistedContactsControllerDelegate;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <Swift>

{
    id <CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
    FAFamilyMember *_familyMember;
    id <CNUIFamilyMemberWhitelistedContactsControllerDelegate> _delegate;
    CNContactStore *_familyMemberScopedContactStore;
    CNContactFormatter *_contactCardWarningFormatter;
    id <CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
    id <CNUICoreContactManagementConsentCheck> _contactManagentConsentCheck;
    id <CNSchedulerProvider> _schedulerProvider;
    CNContactViewController *_contactViewControllerPresentingItemDetails;
}

@property (nonatomic, readonly) CNContactStore *familyMemberScopedContactStore;
@property (nonatomic, readonly) CNContactFormatter *contactCardWarningFormatter;
@property (nonatomic, readonly) id <CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;
@property (nonatomic, readonly) id <CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;
@property (nonatomic, readonly) id <CNUICoreContactManagementConsentCheck> contactManagentConsentCheck;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (weak, nonatomic) CNContactViewController *contactViewControllerPresentingItemDetails;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) NSArray *familyMemberContactItems;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long fetchStatus;
@property (weak, nonatomic) id <CNUIFamilyMemberWhitelistedContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2;

- (id)init;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)warningMessageForContact:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)familyMemberContactItemsDidChange;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1;
- (void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;
- (_Bool)contactManagementEnabled;
- (void)presentDetailsOfFamilyMemberContactItem:(id)arg1;
- (void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1;
- (void)deleteFamilyMemberContactItem:(id)arg1;
- (void)performInteraction:(long long)arg1;
- (void)performDefaultInteraction;
- (id)generateContactSourceOptionSheet;
- (id)anchorViewForDefaultInteraction;
- (void)performAddFromMainContacts;
- (void)performAddFromMainContactsForFamilyMember;
- (void)performAddFromMainContactsForThisDevice;
- (void)performAddFromFamilyMemberContacts;
- (void)performAddNewContact;
- (void)addContactsToWhitelist:(id)arg1;

@end
