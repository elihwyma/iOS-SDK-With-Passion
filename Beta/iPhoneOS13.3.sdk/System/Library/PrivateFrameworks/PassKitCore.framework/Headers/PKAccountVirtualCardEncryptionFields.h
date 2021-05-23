/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject

{
    NSData *_publicCertificate;
    NSString *_encryptionVersion;
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (id)dictionaryRepresentation;
- (void)prepareCertificateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
