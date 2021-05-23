/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SAMLDSAKeyValue : SAMLBaseElement

@property (nonatomic, readonly) NSData *p;
@property (nonatomic, readonly) NSData *q;
@property (nonatomic, readonly) NSData *g;
@property (nonatomic, readonly) NSData *y;
@property (nonatomic, readonly) NSData *j;
@property (nonatomic, readonly) NSData *seed;
@property (nonatomic, readonly) NSData *pgenCounter;

+ (id)createElement:(id *)arg1;

@end
