/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SAMLRSAKeyValue : SAMLBaseElement

@property (nonatomic, readonly) NSData *modulus;
@property (nonatomic, readonly) NSData *exponent;

+ (id)createElement:(id *)arg1;

@end
