/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, IDSCTAdapterCache, IMSystemMonitor, NSHashTable, NSMutableDictionary, NSString;

@interface IDSCTAdapter : NSObject

{
    NSHashTable *_listeners;
    id _coreTelephonyClient;
    id _cache;
    NSMutableDictionary *_registrationStateByLabelID;
    struct os_unfair_lock_s _lock;
    IMSystemMonitor *_systemMonitor;
}

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) IDSCTAdapterCache *cache;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (retain, nonatomic) NSMutableDictionary *registrationStateByLabelID;
@property (retain, nonatomic) IMSystemMonitor *systemMonitor;
@property (nonatomic, readonly) _Bool dualSIMCapabilityEnabled;
@property (nonatomic, readonly) _Bool isAnySIMUsable;
@property (nonatomic, readonly) _Bool isAnySIMInserted;
@property (nonatomic, readonly) _Bool supportsIdentification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;

- (void)dealloc;
- (void)subscriptionInfoDidChange;
- (void)dualSimCapabilityDidChange;
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;
- (void)context:(id)arg1 pnrSupportChanged:(_Bool)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)operatorBundleChange:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (void)systemApplicationDidBecomeActive;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)SIMForIdentifier:(id)arg1;
- (id)currentSIMsWithError:(id *)arg1;
- (id)initWithCoreTelephonyClient:(id)arg1 systemMonitor:(id)arg2;
- (void)_locked_accessCache:(CDUnknownBlockType)arg1;
- (id)_unlocked_currentSIMsWithError:(id *)arg1;
- (_Bool)_legacy_supportsSMSIdentification;
- (id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4;
- (void)_unlocked_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_checkRegistrationStateForContext:(id)arg1;
- (id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3;
- (id)contextForSim:(id)arg1;
- (id)CTPNRForSIM:(id)arg1;
- (void)SIMStatusDidChange:(id)arg1 status:(id)arg2;

@end
