/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFAESKeySpecifier;

@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation

{
    id _aesEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;

@end
