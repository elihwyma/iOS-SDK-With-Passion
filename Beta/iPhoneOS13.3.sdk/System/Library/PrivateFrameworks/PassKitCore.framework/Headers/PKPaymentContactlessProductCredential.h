/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSDictionary, NSString, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential

{
    NSString *_productIdentifier;
    NSDictionary *_readerModeMetadata;
    NSString *_cardSessionToken;
    PKPaymentSetupProduct *_product;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSDictionary *readerModeMetadata;
@property (copy, nonatomic) NSString *cardSessionToken;

- (id)init;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1;
- (long long)_cardTypeFromSetupProductType:(unsigned long long)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2;

@end
