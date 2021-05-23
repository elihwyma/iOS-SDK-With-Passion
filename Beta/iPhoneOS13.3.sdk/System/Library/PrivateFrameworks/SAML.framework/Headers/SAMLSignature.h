/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyInfo, SAMLSignedInfo;

__attribute__((visibility("hidden")))
@interface SAMLSignature : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SAMLSignedInfo *signedInfo;
@property (nonatomic, readonly) NSData *signatureValue;
@property (nonatomic, readonly) NSString *signatureValueId;
@property (nonatomic, readonly) SAMLKeyInfo *keyInfo;

+ (id)createElement:(id *)arg1;

- (_Bool)isValid;

@end
