/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SAMLPGPData : SAMLBaseElement

@property (nonatomic, readonly) NSData *keyId;
@property (nonatomic, readonly) NSData *packet;

+ (id)createElement:(id *)arg1;

@end
