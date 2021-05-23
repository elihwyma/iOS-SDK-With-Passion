/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, PKPaymentPass, PKSecureElementCertificateSet, PKServiceProviderOrder;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest

{
    PKSecureElementCertificateSet *_certificates;
    PKPaymentPass *_pass;
    PKServiceProviderOrder *_serviceProviderOrder;
    NSData *_nonce;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKServiceProviderOrder *serviceProviderOrder;
@property (copy, nonatomic) NSData *nonce;

- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
