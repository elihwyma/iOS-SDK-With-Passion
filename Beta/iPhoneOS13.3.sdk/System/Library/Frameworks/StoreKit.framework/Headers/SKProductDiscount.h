/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (nonatomic, readonly) unsigned long long numberOfPeriods;
@property (nonatomic, readonly) unsigned long long paymentMode;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setType:(unsigned long long)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setNumberOfPeriods:(unsigned long long)arg1;
- (void)_setPaymentMode:(unsigned long long)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;

@end
