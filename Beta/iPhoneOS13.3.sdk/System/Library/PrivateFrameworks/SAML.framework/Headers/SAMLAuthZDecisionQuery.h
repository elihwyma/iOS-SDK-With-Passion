/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/XMLWrapperDoc.h>

@class NSString, SAMLAuthZDecisionQueryElement;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc

{
    SAMLAuthZDecisionQueryElement *_requestElement;
}

@property (retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement;
@property (nonatomic, readonly) NSString *channelId;

- (void)addAction:(id)arg1;
- (void)setResource:(id)arg1;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (void)setSubjectFromResponse:(id)arg1;

@end
