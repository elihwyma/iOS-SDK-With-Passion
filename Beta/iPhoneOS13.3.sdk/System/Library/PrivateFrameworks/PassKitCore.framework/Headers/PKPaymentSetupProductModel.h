/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject

{
    NSMutableDictionary *_paymentSetupProducts;
}

- (id)init;
- (id)productsForFeatureIdentifier:(unsigned long long)arg1;
- (void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2;
- (void)addPaymentSetupProducts:(id)arg1;
- (id)setupProductsOfType:(unsigned long long)arg1;
- (void)setPaymentSetupProducts:(id)arg1;
- (id)allSetupProducts;

@end
