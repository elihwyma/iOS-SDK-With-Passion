/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAContactsAccountProvider.h>

@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

{
    void *_addressBook;
}

@property (nonatomic, readonly) void *addressBook;

- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;

@end
