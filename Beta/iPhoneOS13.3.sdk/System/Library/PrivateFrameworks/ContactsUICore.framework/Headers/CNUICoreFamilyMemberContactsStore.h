/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class FAFamilyMember;

@protocol CNScheduler, CNSchedulerProvider, CNUICoreContactStoreFacade;

@interface CNUICoreFamilyMemberContactsStore : NSObject

{
    id <CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
    FAFamilyMember *_familyMember;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> familyMemberScopedContactStore;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNScheduler> backgroundOrImmediateScheduler;

- (id)init;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)updateContactWhitelistByAddingContacts:(id)arg1;
- (id)updateContactListByUpdatingContacts:(id)arg1;
- (id)updateContactWhitelistByRemovingContacts:(id)arg1;
- (id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(_Bool)arg2;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1;
- (id)updateContactListByAddingContacts:(id)arg1;
- (id)updateContactListByRemovingContacts:(id)arg1;

@end
