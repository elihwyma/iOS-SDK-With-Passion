/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFCertificateTrustInfo, MFError;

@interface MFMessageSigner : NSObject

{
    int _status;
    MFCertificateTrustInfo *_signingCertificateTrustInfo;
    MFCertificateTrustInfo *_encryptionCertificateTrustInfo;
}

@property (nonatomic, readonly) MFCertificateTrustInfo *signingCertificateTrustInfo;
@property (nonatomic, readonly) MFCertificateTrustInfo *encryptionCertificateTrustInfo;
@property (nonatomic, readonly) _Bool hasSeparateSigningAndEncryptionCertificates;
@property (nonatomic, readonly) MFError *error;

- (void)dealloc;
- (id)initWithSender:(id)arg1 signingTrust:(struct __SecTrust *)arg2 encryptionTrust:(struct __SecTrust *)arg3 verification:(int)arg4;

@end
