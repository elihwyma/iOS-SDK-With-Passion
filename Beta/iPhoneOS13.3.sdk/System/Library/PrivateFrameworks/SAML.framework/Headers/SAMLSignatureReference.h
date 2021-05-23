/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignatureReference : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *uri;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *transforms;
@property (nonatomic, readonly) NSString *digestMethod;
@property (nonatomic, readonly) NSData *digestValue;

+ (id)createElement:(id *)arg1;

@end
