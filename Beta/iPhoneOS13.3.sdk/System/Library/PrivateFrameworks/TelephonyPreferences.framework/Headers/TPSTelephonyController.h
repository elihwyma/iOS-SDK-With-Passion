/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSController.h>

@class CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSDictionary, NSObject, NSOrderedSet, NSString;

@protocol OS_dispatch_queue;

@interface TPSTelephonyController : TPSController

{
    struct os_unfair_lock_s _accessorLock;
    NSOrderedSet *_activeSubscriptions;
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    NSOrderedSet *_subscriptions;
    NSDictionary *_systemCapabilities;
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (nonatomic) struct os_unfair_lock_s accessorLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (copy, nonatomic) NSOrderedSet *activeSubscriptions;
@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (copy, nonatomic) NSOrderedSet *subscriptions;
@property (copy, nonatomic) NSDictionary *systemCapabilities;
@property (nonatomic, readonly) CoreTelephonyClient *telephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)subscriptionInfoDidChange;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (id)fetchSubscriptionInfo;
- (id)fetchSystemCapabilitiesForSubscriptions:(id)arg1;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityWithName:(id)arg1 subscriptionContext:(id)arg2;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1 error:(id *)arg2;
- (_Bool)supportsCellularNetworkSelectionForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)arg1;

@end
