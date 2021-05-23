/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest

{
    NSString *_action;
    PKServiceProviderPurchase *_purchase;
}

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithAction:(id)arg1 purchase:(id)arg2;

@end
