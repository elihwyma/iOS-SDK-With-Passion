/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/Swift-Protocol.h>

@class NSNumber;

@protocol CNUICoreFamilyMemberContactsObserver;

@protocol CNUICoreFamilyMemberContactsDataSource <Swift>

@property (weak, nonatomic) id <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic, readonly) long long fetchStatus;
@property (nonatomic, readonly) NSNumber *countOfFamilyMemberContacts;

- (unsigned short)updateListByAddingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)updateListByRemovingContacts: /* Error: Ran out of types for this method. */;

@end
