/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentApplication, PKPaymentPass, PKWrappedPayment;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKWrappedPayment *_wrappedPayment;
    NSData *_applicationData;
}

@property (nonatomic, readonly) NSString *endpointName;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (copy, nonatomic) NSData *applicationData;

- (id)bodyDictionary;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4;

@end
