/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFSymmetricKeySpecifier.h>

@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier

{
    id _aesKeySpecifierInternal;
}

@property (nonatomic, readonly) long long blockSize;
@property (nonatomic) long long bitSize;

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;
- (long long)keyLengthInBytes;

@end
