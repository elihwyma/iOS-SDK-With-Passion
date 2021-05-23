/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, NSOrderedSet;

@interface PSSpecifier (TelephonyPreferences)

@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *tps_subscriptionContext;
@property (copy, nonatomic, readonly) NSOrderedSet *tps_subscriptions;

@end
