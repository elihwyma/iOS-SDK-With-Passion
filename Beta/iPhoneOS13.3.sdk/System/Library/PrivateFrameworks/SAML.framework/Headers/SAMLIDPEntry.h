/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SAMLIDPEntry : SAMLBaseElement

@property (nonatomic, readonly) NSString *providerId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *loc;

+ (id)createElement:(id *)arg1;

@end
