/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, FTSelectedPNRSubscriptionCache, NSRecursiveLock, NSString;

@interface FTSelectedPNRSubscription : NSObject

{
    NSRecursiveLock *_lock;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscriptionCache *_cache;
    _Bool _isCacheValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (void)subscriptionInfoDidChange;
- (void)activeSubscriptionsDidChange;
- (void)dualSimCapabilityDidChange;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)arg1;
- (_Bool)isDeviceInDualPhoneIdentityMode;
- (_Bool)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1;
- (id)selectedRegistrationPhoneNumberWithError:(id *)arg1;
- (void)_protected_invalidateCache;
- (id)_reevaluateCachedSubscriptionWithError:(id *)arg1;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)arg1;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg1;
- (_Bool)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)arg1 subscriptionInfo:(id)arg2;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(_Bool)arg3 persistUpdate:(_Bool)arg4 error:(id *)arg5;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id *)arg2;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(_Bool)arg1;
- (void)_distributed_invalidateCache;
- (_Bool)_isInDualPhoneIdentityModeBasedOnCapability:(long long)arg1;
- (_Bool)_doesSubscriptionInfoContainMultipleLabels:(id)arg1;
- (_Bool)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg1;
- (id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1;
- (id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2;
- (_Bool)_legacy_isPhoneNumberEmergencyNumber:(id)arg1;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1;
- (id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3;

@end
