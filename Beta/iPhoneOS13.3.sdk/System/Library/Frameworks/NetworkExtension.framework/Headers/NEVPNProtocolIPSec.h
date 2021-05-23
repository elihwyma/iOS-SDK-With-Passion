/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNProtocol.h>

@class NEKeychainItem, NSArray, NSData, NSString;

@interface NEVPNProtocolIPSec : NEVPNProtocol

{
    NSData *_sharedSecretReference;
    _Bool _useExtendedAuthentication;
    _Bool _extendedAuthPasswordPrompt;
    long long _authenticationMethod;
    NSString *_localIdentifier;
    NSString *_remoteIdentifier;
    NEKeychainItem *_sharedSecretKeychainItem;
    NSArray *_legacyProposals;
    NSArray *_legacyExchangeMode;
}

@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSArray *legacyProposals;
@property (copy) NSArray *legacyExchangeMode;
@property _Bool extendedAuthPasswordPrompt;
@property long long authenticationMethod;
@property _Bool useExtendedAuthentication;
@property (copy) NSData *sharedSecretReference;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (_Bool)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (struct __SCNetworkInterface *)createInterface;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;

@end
