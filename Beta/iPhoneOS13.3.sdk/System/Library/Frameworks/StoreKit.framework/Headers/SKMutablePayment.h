/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <StoreKit/SKPayment.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKMutablePayment : SKPayment

@property (nonatomic) _Bool isStoreOriginated;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (copy, nonatomic) NSDictionary *requestParameters;
@property (copy, nonatomic) NSString *applicationUsername;
@property (copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long quantity;
@property (copy, nonatomic) NSData *requestData;
@property (nonatomic) _Bool simulatesAskToBuyInSandbox;

@end
