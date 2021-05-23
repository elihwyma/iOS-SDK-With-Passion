/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse

{
    PKServiceProviderPurchase *_updatedPurchase;
}

@property (retain, nonatomic, readonly) PKServiceProviderPurchase *updatedPurchase;

- (id)initWithData:(id)arg1;

@end
