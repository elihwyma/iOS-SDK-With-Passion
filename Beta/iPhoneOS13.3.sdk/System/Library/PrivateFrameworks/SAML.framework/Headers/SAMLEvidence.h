/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

__attribute__((visibility("hidden")))
@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic, readonly) NSString *assertionIdRef;
@property (nonatomic, readonly) NSString *assertionURIRef;
@property (nonatomic, readonly) SAMLAssertion *assertion;

+ (id)createElement:(id *)arg1;

@end
