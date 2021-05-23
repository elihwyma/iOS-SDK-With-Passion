/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, WLKStoreOfferPeriod;

@interface WLKStoreOffer : NSObject

{
    NSString *_buyParameters;
    NSString *_formattedPrice;
    NSNumber *_price;
    unsigned long long _offerType;
    unsigned long long _subscriptionType;
    NSString *_title;
    NSDictionary *_dictionary;
    WLKStoreOfferPeriod *_renewalPeriod;
    WLKStoreOfferPeriod *_freeTrialPeriod;
    WLKStoreOfferPeriod *_introOfferPeriod;
}

@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic, readonly) unsigned long long subscriptionType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) WLKStoreOfferPeriod *renewalPeriod;
@property (nonatomic, readonly) WLKStoreOfferPeriod *freeTrialPeriod;
@property (nonatomic, readonly) WLKStoreOfferPeriod *introOfferPeriod;

+ (id)offersWithSubscriptionDictionaries:(id)arg1;
+ (id)offersWithMAPIDictionaries:(id)arg1;

- (id)sui_buttonTitle;
- (id)sui_buttonSubtitleWithServiceName:(id)arg1;
- (_Bool)specialOfferEligible;
- (id)initWithSubscriptionDictionary:(id)arg1;
- (id)initWithMAPIDictionary:(id)arg1;

@end
