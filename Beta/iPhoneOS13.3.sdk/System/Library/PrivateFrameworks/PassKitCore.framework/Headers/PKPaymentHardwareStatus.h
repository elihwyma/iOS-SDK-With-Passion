/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKPaymentHardwareStatus : NSObject <Swift>

{
    _Bool _hasSecureElement;
    _Bool _hasRemoteDevices;
    _Bool _inFailForward;
    _Bool _canMakeRemotePayments;
    _Bool _canDecryptBAAEncryptedData;
}

@property (nonatomic) _Bool hasSecureElement;
@property (nonatomic) _Bool hasRemoteDevices;
@property (nonatomic, getter=isInFailForward) _Bool inFailForward;
@property (nonatomic) _Bool canMakeRemotePayments;
@property (nonatomic) _Bool canDecryptBAAEncryptedData;
@property (nonatomic, readonly, getter=_isDemoModeActive) _Bool _isDemoModeActive;
@property (nonatomic, readonly) _Bool canMakePayments;
@property (nonatomic, readonly) _Bool canMakeLocalPayments;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
