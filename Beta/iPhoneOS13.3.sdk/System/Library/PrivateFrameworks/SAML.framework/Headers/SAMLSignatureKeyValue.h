/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

__attribute__((visibility("hidden")))
@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic, readonly) SAMLDSAKeyValue *dsaKeyValue;
@property (nonatomic, readonly) SAMLRSAKeyValue *rsaKeyValue;

+ (id)createElement:(id *)arg1;

@end
