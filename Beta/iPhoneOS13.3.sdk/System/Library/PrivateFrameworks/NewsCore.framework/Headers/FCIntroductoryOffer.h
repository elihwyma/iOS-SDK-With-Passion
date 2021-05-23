/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCIntroductoryOffer : NSObject

{
    int _offerType;
    unsigned long long _numOfPeriods;
    NSString *_priceFormatted;
    NSString *_subscriptionPeriodInISO_8601;
}

@property (copy, nonatomic) NSString *priceFormatted;
@property (copy, nonatomic) NSString *subscriptionPeriodInISO_8601;
@property (nonatomic) int offerType;
@property (nonatomic) unsigned long long numOfPeriods;

- (id)initWithOfferType:(int)arg1 priceFormatted:(id)arg2 recurringSubscriptionPeriod:(id)arg3 numOfPeriods:(unsigned long long)arg4;

@end
