/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <Swift>

{
    EMCertificateTrustInformation *_signingCertificateTrustInfo;
    EMCertificateTrustInformation *_encryptionCertificateTrustInfo;
    NSError *_error;
}

@property (retain, nonatomic) EMCertificateTrustInformation *signingCertificateTrustInfo;
@property (retain, nonatomic) EMCertificateTrustInformation *encryptionCertificateTrustInfo;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) _Bool hasSeparateSigningAndEncryptionCertificates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)evaluateTrustsWithOptions:(unsigned long long)arg1;

@end
