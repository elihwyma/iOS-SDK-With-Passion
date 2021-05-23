/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFSSHKeyFormatED25519 : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultKeySize;
+ (id)localizedDisplayName;
+ (id)possibleKeySizes;
+ (id)privateKeyType;
+ (id)publicKeyType;
+ (id)privateKeySpecifier;
+ (id)publicKeySpecifier;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id *)arg3;
+ (id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;
+ (id)sshPublicKeyFromED25519Data:(id)arg1;
+ (id)sshPrivateKeyFromED25519PrivateKey:(id)arg1 publicKey:(id)arg2 comment:(id)arg3;

@end
