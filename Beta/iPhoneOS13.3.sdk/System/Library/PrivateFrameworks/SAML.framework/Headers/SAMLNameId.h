/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SAMLNameId : SAMLBaseElement

@property (nonatomic, readonly) NSString *nameQualifier;
@property (nonatomic, readonly) NSString *spNameQualifier;
@property (nonatomic, readonly) NSString *format;
@property (nonatomic, readonly) NSString *spProvidedId;

+ (id)createElement:(id *)arg1;

@end
