/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

__attribute__((visibility("hidden")))
@interface SAMLAdvice : SAMLBaseElement

@property (retain, nonatomic) SAMLAssertion *assertion;
@property (retain, nonatomic) NSString *assertionIDRef;
@property (retain, nonatomic) NSString *assertionURIRef;

+ (id)createElement:(id *)arg1;

@end
