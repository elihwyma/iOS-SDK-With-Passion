/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem

+ (id)importPKCS12Data:(id)arg1 passphrase:(id)arg2;
+ (id)copyIdentities:(id)arg1 fromDomain:(long long)arg2;
+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg1;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity *)arg1 persistentReference:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sync;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (id)copyPassword;

@end
