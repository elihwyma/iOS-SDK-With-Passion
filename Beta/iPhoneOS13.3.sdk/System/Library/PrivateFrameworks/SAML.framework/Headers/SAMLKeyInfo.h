/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyRetrievalMethod, SAMLPGPData, SAMLSignatureKeyValue, SAMLX509Data;

__attribute__((visibility("hidden")))
@interface SAMLKeyInfo : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *keyName;
@property (nonatomic, readonly) SAMLSignatureKeyValue *keyValue;
@property (nonatomic, readonly) SAMLKeyRetrievalMethod *retrievalMethod;
@property (nonatomic, readonly) SAMLX509Data *x509Data;
@property (nonatomic, readonly) SAMLPGPData *pgpData;
@property (nonatomic, readonly) NSData *spkiSexpData;
@property (nonatomic, readonly) NSString *mgmtData;

+ (id)createElement:(id *)arg1;

@end
