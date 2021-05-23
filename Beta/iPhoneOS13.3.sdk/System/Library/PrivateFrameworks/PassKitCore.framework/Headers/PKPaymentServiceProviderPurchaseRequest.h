/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest

{
    NSString *_purchaseIdentifier;
}

@property (copy, nonatomic) NSString *purchaseIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPurchaseIdentifier:(id)arg1;

@end
