/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/Swift-Protocol.h>

@protocol WFSSHKeyFormat <Swift>

+ (unsigned short)defaultKeySize;
+ (unsigned short)localizedDisplayName;
+ (unsigned short)possibleKeySizes;
+ (unsigned short)privateKeyType;
+ (unsigned short)publicKeyType;
+ (unsigned short)privateKeySpecifier;
+ (unsigned short)publicKeySpecifier;
+ (unsigned short)keyPairFromPrivateKey:comment:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)generateKeyPairWithKeySize:comment: /* Error: Ran out of types for this method. */;

@end
