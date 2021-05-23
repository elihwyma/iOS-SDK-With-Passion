/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier

{
    id _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;

@end
