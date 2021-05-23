/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject

{
    _Bool _newsAppPurchase;
    _Bool _isTrialPeriod;
    _Bool _isPurchaser;
    _Bool _isAmplifyUser;
    NSNumber *_appAdamID;
    NSString *_chargeCurrencyCode;
    NSNumber *_inAppAdamID;
}

@property (nonatomic, readonly) NSNumber *appAdamID;
@property (nonatomic, readonly) NSString *chargeCurrencyCode;
@property (nonatomic, readonly) NSNumber *inAppAdamID;
@property (nonatomic, readonly, getter=isNewsAppPurchase) _Bool newsAppPurchase;
@property (nonatomic, readonly) _Bool isTrialPeriod;
@property (nonatomic, readonly) _Bool isPurchaser;
@property (nonatomic, readonly) _Bool isAmplifyUser;

- (id)description;
- (id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(_Bool)arg4 isTrailPeriod:(_Bool)arg5 isPurchaser:(_Bool)arg6 isAmplifyUser:(_Bool)arg7;

@end
