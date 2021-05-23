/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/Swift-Protocol.h>

@class NSArray;

@protocol CNUICoreFamilyMemberContactsObserver;

@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <Swift>

@property (weak, nonatomic) id <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic, readonly) long long fetchStatus;
@property (nonatomic, readonly) NSArray *familyMemberContactItems;
@property (nonatomic, readonly) _Bool familyMemberContainerIsEmpty;

- (unsigned short)updateWhitelistByAddingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)updateWhitelistByRemovingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)contactRepresentingItem: /* Error: Ran out of types for this method. */;
- (unsigned short)updateWhitelistByUpdatingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)finishWhitelistedContactsTasks;

@end
