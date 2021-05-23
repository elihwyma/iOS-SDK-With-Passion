/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface NEHotspotEAPSettings : NSObject

{
    _Bool _tlsClientCertificateRequired;
    NSArray *_supportedEAPTypes;
    NSString *_username;
    NSString *_outerIdentity;
    long long _ttlsInnerAuthenticationType;
    NSString *_password;
    NSArray *_trustedServerNames;
    long long _preferredTLSVersion;
    NSArray *_clientTrustChainReference;
    NSData *_identityReference;
    NSArray *_trustedServerCertificateReferences;
}

@property (copy) NSArray *clientTrustChainReference;
@property (copy) NSData *identityReference;
@property (copy) NSArray *trustedServerCertificateReferences;
@property (copy) NSArray *supportedEAPTypes;
@property (copy) NSString *username;
@property (copy) NSString *outerIdentity;
@property long long ttlsInnerAuthenticationType;
@property (copy) NSString *password;
@property (copy) NSArray *trustedServerNames;
@property (getter=isTLSClientCertificateRequired) _Bool tlsClientCertificateRequired;
@property long long preferredTLSVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)setIdentity:(struct __SecIdentity *)arg1;
- (_Bool)setTrustedServerCertificates:(id)arg1;

@end
