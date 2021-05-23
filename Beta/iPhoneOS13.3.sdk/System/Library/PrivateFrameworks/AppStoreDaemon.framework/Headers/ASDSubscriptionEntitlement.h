/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSubscriptionEntitlement : NSObject <Swift>

{
    NSDictionary *_dictionary;
    unsigned long long _segment;
}

@property (copy, readonly) NSNumber *appAdamID;
@property (copy, readonly) NSNumber *appVersion;
@property (readonly) _Bool autoRenewEnabled;
@property (copy, readonly) NSString *chargeCountryCode;
@property (copy, readonly) NSString *chargeCurrencyCode;
@property (copy, readonly) NSNumber *chargeStoreFrontID;
@property (copy, readonly) NSDate *expiryDate;
@property (copy, readonly) NSNumber *familyID;
@property (copy, readonly) NSNumber *inAppAdamID;
@property (copy, readonly) NSString *inAppVersion;
@property (readonly) _Bool isTrialPeriod;
@property (readonly) _Bool isOfferPeriod;
@property (readonly) _Bool isPurchaser;
@property (readonly, getter=isNewsAppPurchase) _Bool newsAppPurchase;
@property (copy, readonly) NSString *offerID;
@property (copy, readonly) NSNumber *originalPurchaseDownloadID;
@property (copy, readonly) NSNumber *purchasabilityType;
@property (copy, readonly) NSNumber *purchaseDownloadID;
@property (readonly) unsigned long long segment;
@property (copy, readonly) NSNumber *quantity;
@property (copy, readonly) NSString *vendorID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2;
- (id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3;

@end
