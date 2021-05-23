/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SAMLRequestedAuthNContext : SAMLBaseElement

@property (nonatomic, readonly) NSString *comparison;
@property (nonatomic, readonly) NSString *classRef;
@property (nonatomic, readonly) NSString *declRef;

+ (id)createElement:(id *)arg1;

@end
