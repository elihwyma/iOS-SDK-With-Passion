/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSData.h>

@class CKEncryptedData;

__attribute__((visibility("hidden")))
@interface CKDChainPCSData : CKDPCSData

{
    CKEncryptedData *_encryptedChainPCSPrivateKey;
}

@property (nonatomic, readonly) CKEncryptedData *encryptedChainPCSPrivateKey;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;

@end
