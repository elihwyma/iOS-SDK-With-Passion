/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)

- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;
- (id)_gkAccountForAppleID:(id)arg1;
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_gkAllCredentials;

@end
