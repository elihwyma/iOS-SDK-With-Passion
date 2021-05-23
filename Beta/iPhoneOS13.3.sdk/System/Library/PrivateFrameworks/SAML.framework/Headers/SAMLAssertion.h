/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLAdvice, SAMLAuthNStatement, SAMLConditions, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAssertion : SAMLBaseElement

@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *samlAttributes;
@property (nonatomic, readonly) SAMLAuthNStatement *authentication;
@property (nonatomic, readonly) NSArray *authorizations;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, readonly) SAMLSubject *subject;
@property (nonatomic, readonly) SAMLConditions *conditions;
@property (nonatomic, readonly) SAMLAdvice *advice;

+ (id)createElement:(id *)arg1;

- (_Bool)isValid:(id *)arg1;
- (id)authorizationForResource:(id)arg1;
- (_Bool)meetsConditions:(id *)arg1;
- (_Bool)isValidForRequestor:(id)arg1;

@end
