/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFCertificateTrustInfo : NSObject

{
    NSString *_uncommentedSender;
    unsigned long long _certificateType;
    NSString *_sender;
    struct __SecTrust *_trust;
}

@property (nonatomic, readonly) unsigned long long certificateType;
@property (copy, nonatomic, readonly) NSString *sender;
@property (copy, nonatomic, readonly) NSString *commonName;
@property (copy, nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) struct __SecTrust *trust;
@property (nonatomic, readonly) struct __SecCertificate *certificate;
@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) unsigned long long keychainStatus;
@property (nonatomic, readonly) _Bool canSaveCertificateToKeychain;
@property (nonatomic, readonly) _Bool hasTrustException;

- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust *)arg2 sender:(id)arg3;
- (void)addTrustException;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (void)removeCertificateFromKeychain;

@end
