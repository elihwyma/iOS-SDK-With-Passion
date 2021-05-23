/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)initWithContactStore:(id)arg1;
- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;

@end
