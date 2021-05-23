/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSTelephonyController.h>

@interface TPSCarrierBundleController : TPSTelephonyController

- (void)carrierBundleChange:(id)arg1;
- (void)operatorBundleChange:(id)arg1;
- (id)localizedCarrierNameForSubscriptionContext:(id)arg1;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2;
- (id)localizedStringForKey:(id)arg1 subscriptionContext:(id)arg2 error:(id *)arg3;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2 error:(id *)arg3;
- (id)localizedStringForKey:(id)arg1 subscriptionContext:(id)arg2;

@end
