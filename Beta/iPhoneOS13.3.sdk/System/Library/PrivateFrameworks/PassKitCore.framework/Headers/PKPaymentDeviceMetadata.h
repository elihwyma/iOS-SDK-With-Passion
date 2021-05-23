/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CLLocation, NSNumber, NSString;

@interface PKPaymentDeviceMetadata : NSObject <Swift>

{
    NSString *_deviceName;
    NSNumber *_primaryJSBLSequenceCounter;
    NSString *_secureElementIdentifier;
    NSString *_uniqueDeviceIdentifier;
    NSString *_serialNumber;
    NSString *_phoneNumber;
    NSString *_signedPhoneNumber;
    NSString *_signedPhoneNumberVersion;
    CLLocation *_location;
}

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumberVersion;
@property (copy, nonatomic) CLLocation *location;
@property (weak, nonatomic, readonly) NSString *extensiveLatitude;
@property (weak, nonatomic, readonly) NSString *extensiveLongitude;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isEqualToPaymentDeviceMetadata:(id)arg1;

@end
