/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class CertUITrustManager, EMCertificateTrustInformation, NSString;

@interface MFCertificateTrustInformationKeychainManager : NSObject

{
    NSString *_addressForSaving;
    EMCertificateTrustInformation *_trustInformation;
    CertUITrustManager *_keychainManager;
}

@property (nonatomic, readonly) EMCertificateTrustInformation *trustInformation;
@property (nonatomic, readonly) CertUITrustManager *keychainManager;
@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) _Bool hasTrustException;
@property (nonatomic, readonly) unsigned long long keychainStatus;
@property (nonatomic, readonly) _Bool canSaveCertificateToKeychain;
@property (copy, nonatomic, readonly) NSString *addressForSaving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithTrustInformation:(id)arg1;
- (void)addTrustException;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (void)removeCertificateFromKeychain;

@end
