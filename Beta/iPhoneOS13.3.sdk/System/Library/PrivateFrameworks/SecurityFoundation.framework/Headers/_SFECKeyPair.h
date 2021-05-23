/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeyPair.h>

@class _SFECKeySpecifier;

@interface _SFECKeyPair : _SFKeyPair

{
    id _ecKeyPairInternal;
}

@property (copy, nonatomic, readonly) _SFECKeySpecifier *keySpecifier;

+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (id)publicKey;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString *)arg2;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)performWithCCKey:(CDUnknownBlockType)arg1;

@end
