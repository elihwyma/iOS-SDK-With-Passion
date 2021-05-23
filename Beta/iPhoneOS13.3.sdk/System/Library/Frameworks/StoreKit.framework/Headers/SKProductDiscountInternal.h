/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

__attribute__((visibility("hidden")))
@interface SKProductDiscountInternal : NSObject

{
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    unsigned long long _paymentMode;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    unsigned long long _numberOfPeriods;
    unsigned long long _type;
    NSString *_identifier;
}

@end
