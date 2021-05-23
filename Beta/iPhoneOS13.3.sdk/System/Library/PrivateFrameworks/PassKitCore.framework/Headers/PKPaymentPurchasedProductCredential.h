/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential

{
    PKPaymentSetupProduct *_product;
    NSString *_productIdentifier;
    PKServiceProviderPurchase *_purchase;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic, readonly) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic, readonly) NSArray *metadata;
@property (copy, nonatomic, readonly) NSString *statusDescription;
@property (copy, nonatomic, readonly) NSString *summaryMetadataDescription;

- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2;

@end
