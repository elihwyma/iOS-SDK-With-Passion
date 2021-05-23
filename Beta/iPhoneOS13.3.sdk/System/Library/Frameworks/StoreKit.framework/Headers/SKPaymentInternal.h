/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

__attribute__((visibility("hidden")))
@interface SKPaymentInternal : NSObject

{
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    _Bool _simulatesAskToBuyInSandbox;
    _Bool _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
