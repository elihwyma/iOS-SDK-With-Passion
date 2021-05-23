/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAttributeQueryElement : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSString *consent;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;
@property (nonatomic, readonly) NSArray *samlAttributes;

+ (id)createElement:(id *)arg1;

- (void)addAttribute:(id)arg1;

@end
