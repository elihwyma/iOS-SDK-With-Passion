/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/XMLWrapperDoc.h>

@class NSData, NSString, SAMLAuthNRequestElement;

@interface SAMLAuthNRequest : XMLWrapperDoc

{
    NSData *_schemaData;
    SAMLAuthNRequestElement *_requestElement;
}

@property (retain, nonatomic) SAMLAuthNRequestElement *requestElement;
@property (retain, nonatomic) NSString *issuer;

- (void)setProviderName:(id)arg1;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (void)setSubjectFromResponse:(id)arg1;
- (void)setForceAuthN:(_Bool)arg1;
- (void)setIsPassive:(_Bool)arg1;

@end
