/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformPaymentResponse

{
    PKServiceProviderPurchase *_purchase;
}

@property (retain, nonatomic, readonly) PKServiceProviderPurchase *purchase;

- (id)initWithData:(id)arg1;

@end
