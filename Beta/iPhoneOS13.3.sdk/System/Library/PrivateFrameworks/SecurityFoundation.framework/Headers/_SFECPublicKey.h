/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey

{
    id _ecPublicKeyInternal;
}

@property (copy, nonatomic, readonly) _SFECKeySpecifier *keySpecifier;

+ (id)keyWithSubjectPublicKeyInfo:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (id)encodeSubjectPublicKeyInfo;
- (id)performWithCCKey:(CDUnknownBlockType)arg1;

@end
