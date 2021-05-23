/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface PKPaymentDeviceRegistrationData : NSObject <Swift>

{
    _Bool _devSigned;
    NSString *_signedAuthToken;
    NSDictionary *_secureElementStateInformation;
    NSString *_secureElementIdentifier;
    NSString *_deviceSerialNumber;
    NSArray *_additionalDeviceSerialNumbers;
    NSString *_companionSerialNumber;
    NSString *_productType;
    NSData *_platformData;
    NSData *_platformDataSignature;
    NSArray *_legacyStateInformation;
}

@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *secureElementStateInformation;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *deviceSerialNumber;
@property (copy, nonatomic) NSArray *additionalDeviceSerialNumbers;
@property (copy, nonatomic) NSString *companionSerialNumber;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSData *platformData;
@property (copy, nonatomic) NSData *platformDataSignature;
@property (nonatomic) _Bool devSigned;
@property (nonatomic, readonly) NSArray *legacyStateInformation;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
