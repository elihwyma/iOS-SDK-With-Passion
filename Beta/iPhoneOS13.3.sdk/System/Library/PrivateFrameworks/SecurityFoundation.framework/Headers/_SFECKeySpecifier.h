/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier

{
    id _ecKeySpecifierInternal;
}

@property long long curve;

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;

@end
