/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLSignature, SAMLStatus;

__attribute__((visibility("hidden")))
@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *relatedRequest;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, readonly) SAMLStatus *status;
@property (nonatomic, readonly) NSArray *assertions;

+ (id)createElement:(id *)arg1;

- (_Bool)assertionMeetsConditions:(id *)arg1;
- (id)authnStatement;

@end
