/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKCurrencyAmount, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

{
    NSString *_productIdentifier;
    PKServiceProviderPurchase *_purchase;
    PKCurrencyAmount *_balance;
    PKPaymentSetupProduct *_product;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic, readonly) NSArray *metadata;

- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3;

@end
