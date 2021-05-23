/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest

{
    NSString *_purchaseState;
    NSString *_serviceProviderIdentifier;
    NSString *_productIdentifier;
    NSString *_actionIdentifier;
    NSString *_countryCode;
}

@property (copy, nonatomic) NSString *purchaseState;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *countryCode;

- (id)initWithPurchaseState:(id)arg1 serviceProviderIdentifier:(id)arg2 productIdentifier:(id)arg3 actionIdentifier:(id)arg4 serviceProviderCountryCode:(id)arg5;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
