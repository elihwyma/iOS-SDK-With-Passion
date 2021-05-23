/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2AuthenticationProtocol : NSObject

{
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property (nonatomic) unsigned long long method;
@property (nonatomic) unsigned long long digitalSignatureAlgorithm;
@property (nonatomic, readonly) _Bool isCertificate;
@property (nonatomic, readonly) _Bool isDigitalSignature;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMethod:(unsigned long long)arg1;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithDigitalSignathure:(unsigned long long)arg1;

@end
