/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (ContactsFoundation)

- (id)_cn_canSaveAccount:(id)arg1;
- (id)_cn_saveVerifiedAccount:(id)arg1;
- (id)_cn_removeAccount:(id)arg1;
- (id)cardDAVAccountForPrimaryAppleAccountWithAppleID:(id)arg1 logger:(id)arg2;

@end
