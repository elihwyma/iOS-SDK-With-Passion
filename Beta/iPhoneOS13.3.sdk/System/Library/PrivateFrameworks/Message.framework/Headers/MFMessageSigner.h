/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFCertificateTrustInfo, MFError, NSString;

@interface MFMessageSigner : NSObject

{
    int _status;
    MFCertificateTrustInfo *_signingCertificateTrustInfo;
    MFCertificateTrustInfo *_encryptionCertificateTrustInfo;
    NSString *_sender;
}

@property (nonatomic, readonly) MFCertificateTrustInfo *signingCertificateTrustInfo;
@property (nonatomic, readonly) MFCertificateTrustInfo *encryptionCertificateTrustInfo;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) MFError *error;

- (id)initWithSender:(id)arg1 signingTrust:(struct __SecTrust *)arg2 encryptionTrust:(struct __SecTrust *)arg3 verification:(int)arg4;

@end
