/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject

{
    long long _subscriptionSource;
    NSString *_IMEI;
    NSString *_carrierNonce;
}

@property (nonatomic, readonly) long long subscriptionSource;
@property (nonatomic, readonly) NSString *IMEI;
@property (nonatomic, readonly) NSString *carrierNonce;

- (id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3;

@end
