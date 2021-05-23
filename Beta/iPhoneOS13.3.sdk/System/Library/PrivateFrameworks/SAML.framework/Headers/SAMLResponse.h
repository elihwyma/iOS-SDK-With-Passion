/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/XMLWrapperDoc.h>

@class NSDictionary, NSString, SAMLResponseElement;

@interface SAMLResponse : XMLWrapperDoc

{
    SAMLResponseElement *_responseElement;
}

@property (retain, nonatomic) SAMLResponseElement *responseElement;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *selectedProvider;

- (id)userName;
- (id)subject;
- (id)assertions;
- (id)statusCodes;
- (_Bool)isValid:(id *)arg1;
- (id)authenticationTTL;
- (_Bool)hasValidAuthentication;
- (_Bool)assertionMeetsConditions:(id *)arg1;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)attributeValuesForName:(id)arg1;
- (id)primaryStatusCode;
- (id)authenticationSessionId;
- (long long)expectedAction;
- (id)authorizationStatusForResource:(id)arg1;

@end
