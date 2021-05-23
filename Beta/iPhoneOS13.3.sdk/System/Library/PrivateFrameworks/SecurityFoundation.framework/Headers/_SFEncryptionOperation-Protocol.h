/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@class _SFKeySpecifier;

@protocol _SFEncryptionOperation <Swift>

@property (copy, nonatomic, readonly) _SFKeySpecifier *encryptionKeySpecifier;

- (unsigned short)encrypt:withKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)decrypt:withKey:error: /* Error: Ran out of types for this method. */;

@end
