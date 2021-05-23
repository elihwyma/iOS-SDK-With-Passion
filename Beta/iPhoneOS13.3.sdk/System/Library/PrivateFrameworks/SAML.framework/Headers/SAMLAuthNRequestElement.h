/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, SAMLConditions, SAMLNameIdPolicy, SAMLRequestedAuthNContext, SAMLScoping, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (retain, nonatomic) NSString *destination;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic) _Bool forceAuthN;
@property (nonatomic) _Bool isPassive;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *issuer;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;
@property (retain, nonatomic) SAMLNameIdPolicy *nameIdPolicy;
@property (retain, nonatomic) SAMLConditions *conditions;
@property (nonatomic, readonly) SAMLRequestedAuthNContext *context;
@property (retain, nonatomic) SAMLScoping *scoping;

+ (id)createElement:(id *)arg1;

@end
