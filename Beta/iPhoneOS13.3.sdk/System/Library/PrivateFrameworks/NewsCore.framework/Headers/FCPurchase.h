/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCIntroductoryOffer, NSNumber, NSString, SKMutablePayment;

@interface FCPurchase : NSObject

{
    NSNumber *_appAdamID;
    NSString *_purchaseID;
    NSString *_subscriptionPriceFormatted;
    NSString *_subscriptionPeriodInISO_8601;
    NSString *_offerName;
    NSNumber *_storeExternalVersion;
    NSString *_bundleID;
    NSNumber *_price;
    FCIntroductoryOffer *_introductoryOffer;
    SKMutablePayment *_payment;
}

@property (nonatomic, readonly) NSNumber *appAdamID;
@property (nonatomic, readonly) NSString *purchaseID;
@property (nonatomic, readonly) NSString *subscriptionPriceFormatted;
@property (nonatomic, readonly) NSString *subscriptionPeriodInISO_8601;
@property (nonatomic, readonly) NSString *offerName;
@property (nonatomic, readonly) NSNumber *storeExternalVersion;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly, getter=isFreeTrialEligible) _Bool freeTrialEligible;
@property (nonatomic, readonly) FCIntroductoryOffer *introductoryOffer;
@property (nonatomic, readonly) SKMutablePayment *payment;

- (id)initWithPurchaseID:(id)arg1 appAdamID:(id)arg2 subscriptionPriceFormatted:(id)arg3 subscriptionPeriodInISO_8601:(id)arg4 offerName:(id)arg5 storeExternalVersion:(id)arg6 bundleID:(id)arg7 price:(id)arg8 introOffer:(id)arg9 payment:(id)arg10;

@end
