/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface DAContactsAccountProvider : NSObject

+ (id)providerWithContactStore:(id)arg1;
+ (id)providerWithAddressBook:(void *)arg1;

- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;

@end
