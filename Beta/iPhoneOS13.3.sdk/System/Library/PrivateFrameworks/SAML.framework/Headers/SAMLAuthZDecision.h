/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString, SAMLEvidence;

__attribute__((visibility("hidden")))
@interface SAMLAuthZDecision : SAMLBaseElement

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) SAMLEvidence *evidence;
@property (nonatomic, readonly) NSString *decision;
@property (nonatomic, readonly) NSString *resource;

+ (id)createElement:(id *)arg1;

@end
