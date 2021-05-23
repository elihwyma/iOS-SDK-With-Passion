/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SSVSubscriptionEntitlementsSubscription : NSObject

{
    _Bool _newsAppPurchase;
    NSNumber *_appAdamId;
    NSNumber *_appVersion;
    NSString *_chargeCountryCode;
    NSString *_chargeCurrencyCode;
    NSNumber *_chargeStoreFrontIdentifier;
    NSDate *_expireDate;
    NSNumber *_familyId;
    NSNumber *_inAppAdamId;
    NSString *_inAppVersion;
    NSString *_offerIdentifier;
    NSNumber *_originalPurchaseDownloadId;
    NSNumber *_purchasabilityType;
    NSNumber *_purchaseDownloadId;
    NSNumber *_quantity;
    NSString *_vendorIdentifier;
}

@property (copy, nonatomic) NSNumber *appAdamId;
@property (copy, nonatomic) NSNumber *appVersion;
@property (copy, nonatomic) NSString *chargeCountryCode;
@property (copy, nonatomic) NSString *chargeCurrencyCode;
@property (copy, nonatomic) NSNumber *chargeStoreFrontIdentifier;
@property (copy, nonatomic) NSDate *expireDate;
@property (copy, nonatomic) NSNumber *familyId;
@property (copy, nonatomic) NSNumber *inAppAdamId;
@property (copy, nonatomic) NSString *inAppVersion;
@property (nonatomic, getter=isNewsAppPurchase) _Bool newsAppPurchase;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (copy, nonatomic) NSNumber *originalPurchaseDownloadId;
@property (copy, nonatomic) NSNumber *purchasabilityType;
@property (copy, nonatomic) NSNumber *purchaseDownloadId;
@property (copy, nonatomic) NSNumber *quantity;
@property (copy, nonatomic) NSString *vendorIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
