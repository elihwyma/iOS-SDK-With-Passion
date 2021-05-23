/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload

{
    NSData *_pemData;
}

@property (retain, nonatomic, readonly) NSData *pemData;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (struct __SecCertificate *)copyCertificate;
- (_Bool)isIdentity;
- (struct __SecIdentity *)copyIdentityFromKeychain;

@end
