/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentCredential;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest

{
    PKPaymentCredential *_paymentCredential;
    NSString *_cardholderName;
    NSString *_primaryAccountNumber;
    NSString *_referrerIdentifier;
    NSString *_passOwnershipToken;
}

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *referrerIdentifier;

- (id)initWithPaymentCredential:(id)arg1;
- (id)_cardDictionary;
- (id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(_Bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
