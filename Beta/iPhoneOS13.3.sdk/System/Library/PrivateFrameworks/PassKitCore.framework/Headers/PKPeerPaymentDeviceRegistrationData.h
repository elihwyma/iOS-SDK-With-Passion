/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <Swift>

{
    _Bool _devSigned;
    NSString *_signedAuthToken;
    NSDictionary *_enrollmentData;
    NSData *_signedEnrollmentDataSignature;
    NSString *_companionSerialNumber;
}

@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) _Bool devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1;

@end
