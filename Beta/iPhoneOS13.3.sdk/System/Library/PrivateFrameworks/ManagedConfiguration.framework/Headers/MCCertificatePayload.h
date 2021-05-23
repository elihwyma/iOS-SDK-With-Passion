/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSDate, NSNumber, NSString;

@interface MCCertificatePayload : MCPayload

{
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
    NSNumber *_isIdentity;
    NSNumber *_isRoot;
    NSNumber *_expiryInterval;
    NSString *_certSubject;
    NSString *_certIssuer;
}

@property (copy, nonatomic) NSString *installedOnDeviceID;
@property (retain, nonatomic) NSData *certificatePersistentID;
@property (nonatomic, readonly) _Bool isRoot;
@property (nonatomic, readonly) _Bool isFullyTrustedRootCert;
@property (nonatomic, readonly) _Bool isIdentity;
@property (retain, nonatomic, readonly) NSDate *expiry;
@property (nonatomic, readonly) _Bool isSigned;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (struct __SecCertificate *)copyCertificate;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (id)certificateSubject;
- (id)issuer;

@end
