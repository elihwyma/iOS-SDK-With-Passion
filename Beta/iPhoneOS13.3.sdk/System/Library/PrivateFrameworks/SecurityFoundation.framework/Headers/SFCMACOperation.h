/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation

{
    id _cmacOperationInternal;
}

@property (copy, nonatomic) SFSymmetricEncryptionOperation *encryptionOperation;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionOperation:(id)arg1;

@end
