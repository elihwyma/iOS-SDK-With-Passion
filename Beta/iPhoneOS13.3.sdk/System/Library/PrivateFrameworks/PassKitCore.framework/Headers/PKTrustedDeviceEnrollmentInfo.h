/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <Swift>

{
    _Bool _supportsAccessExpressMode;
    NSString *_deviceName;
    NSString *_deviceSerialNumber;
    NSString *_deviceUDID;
    NSString *_productType;
    NSString *_secureElementIdentifier;
}

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceSerialNumber;
@property (retain, nonatomic) NSString *deviceUDID;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) _Bool supportsAccessExpressMode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
