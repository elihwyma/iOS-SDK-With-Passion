/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData, NSString, NSURL;

@interface PKPeerPaymentWebServiceContext

{
    _Bool _devSigned;
    NSURL *_serviceURL;
    NSString *_deviceIdentifier;
    NSString *_pushTopic;
    NSString *_pushToken;
    NSString *_companionSerialNumber;
    NSData *_signedEnrollmentDataSignature;
}

@property (copy, nonatomic, readonly) NSURL *serviceURL;
@property (copy, nonatomic, readonly) NSString *deviceIdentifier;
@property (copy, nonatomic, readonly) NSString *pushTopic;
@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic) _Bool devSigned;
@property (copy, nonatomic, readonly) NSString *companionSerialNumber;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithArchive:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateContextWithDeviceRegistrationData:(id)arg1 registrationResponse:(id)arg2;

@end
