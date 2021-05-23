/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (FPAdditions)

- (id)fp_primaryAppleAccount;
- (id)accountIDForPersonaIdentifier:(id)arg1;
- (id)personaIdentifierForACAccountID:(id)arg1;

@end
