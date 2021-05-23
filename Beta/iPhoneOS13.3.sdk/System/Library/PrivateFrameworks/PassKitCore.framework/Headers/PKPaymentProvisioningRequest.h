/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSArray, NSData, NSNumber, NSString, PKDSPContext, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest

{
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    _Bool _devSigned;
    PKPaymentDeviceProvisioningData *_deviceData;
    long long _style;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    NSString *_nonce;
    NSString *_cardholderName;
    NSString *_cardSecurityCode;
    NSData *_activationData;
    PKDSPContext *_context;
    NSData *_cryptogram;
    NSData *_challengeResponse;
    NSString *_referrerIdentifier;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) PKDSPContext *context;
@property (copy, nonatomic) NSData *cryptogram;
@property (copy, nonatomic) NSData *challengeResponse;
@property (copy, nonatomic) NSString *referrerIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithEligibilityResponse:(id)arg1;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(_Bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_requestBodyWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deviceScoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateContextUsingWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
