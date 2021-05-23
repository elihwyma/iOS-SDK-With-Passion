/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <CoreTelephony/CTXPCServiceSubscriptionInfo.h>

@class NSOrderedSet;

@interface CTXPCServiceSubscriptionInfo (TelephonyPreferences)

@property (copy, nonatomic, readonly) NSOrderedSet *tps_activeSubscriptionSet;
@property (copy, nonatomic, readonly) NSOrderedSet *tps_subscriptionSet;

@end
