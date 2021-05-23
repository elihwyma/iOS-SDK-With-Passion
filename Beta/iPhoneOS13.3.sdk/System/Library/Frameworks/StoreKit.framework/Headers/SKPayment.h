/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKPayment : NSObject

{
    id _internal;
}

@property (copy, nonatomic, readonly) NSString *partnerIdentifier;
@property (copy, nonatomic, readonly) NSString *partnerTransactionIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *requestParameters;
@property (nonatomic, readonly) _Bool isStoreOriginated;
@property (copy, nonatomic, readonly) NSString *productIdentifier;
@property (copy, nonatomic, readonly) NSData *requestData;
@property (nonatomic, readonly) long long quantity;
@property (copy, nonatomic, readonly) NSString *applicationUsername;
@property (nonatomic, readonly) _Bool simulatesAskToBuyInSandbox;
@property (copy, nonatomic, readonly) SKPaymentDiscount *paymentDiscount;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
