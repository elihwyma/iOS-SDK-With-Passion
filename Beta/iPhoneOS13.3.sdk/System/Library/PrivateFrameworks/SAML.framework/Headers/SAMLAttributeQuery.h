/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/XMLWrapperDoc.h>

@class NSData, NSString, SAMLAttributeQueryElement;

@interface SAMLAttributeQuery : XMLWrapperDoc

{
    NSData *_schemaData;
    SAMLAttributeQueryElement *_requestElement;
}

@property (retain, nonatomic) SAMLAttributeQueryElement *requestElement;
@property (nonatomic, readonly) NSString *channelId;

- (void)addAttribute:(id)arg1;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (void)setSubjectFromResponse:(id)arg1;
- (void)addAttribute:(id)arg1 values:(id)arg2;

@end
