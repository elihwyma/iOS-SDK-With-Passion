/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKApplePayTrustKey;

@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest

{
    PKApplePayTrustKey *_applePayTrustKey;
}

@property (retain, nonatomic) PKApplePayTrustKey *applePayTrustKey;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
