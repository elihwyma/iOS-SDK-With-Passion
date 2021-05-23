/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCIntroductoryOffer, NSNumber, NSString;

@interface FCPurchaseLookupResult : NSObject

{
    NSString *_purchaseID;
    NSString *_offerName;
    NSString *_subscriptionPeriodInISO_8601;
    NSString *_subscriptionPriceFormatted;
    NSNumber *_price;
    NSNumber *_appAdamID;
    FCIntroductoryOffer *_introOffer;
}

@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *offerName;
@property (copy, nonatomic) NSString *subscriptionPeriodInISO_8601;
@property (copy, nonatomic) NSString *subscriptionPriceFormatted;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *appAdamID;
@property (retain, nonatomic) FCIntroductoryOffer *introOffer;

@end
