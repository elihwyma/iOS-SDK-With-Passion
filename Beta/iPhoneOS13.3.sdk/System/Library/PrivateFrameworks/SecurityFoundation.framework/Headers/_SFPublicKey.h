/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey

{
    id _publicKeyInternal;
}

@property (nonatomic, readonly, getter=_secKey) struct __SecKey *secKey;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (id)initWithAttributes:(id)arg1;
- (id)keyData;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initWithSecKey:(struct __SecKey *)arg1;

@end
