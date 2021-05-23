/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKey.h>

@class NSString, _SFPublicKey;

@interface _SFKeyPair : _SFKey

{
    id _keyPairInternal;
}

@property (nonatomic, readonly, getter=_secKey) struct __SecKey *secKey;
@property (nonatomic, readonly) _SFPublicKey *publicKey;
@property (copy, nonatomic, readonly) NSString *privateKeyDomain;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (id)initWithAttributes:(id)arg1;
- (id)keyData;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initWithSecKey:(struct __SecKey *)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString *)arg2;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;

@end
