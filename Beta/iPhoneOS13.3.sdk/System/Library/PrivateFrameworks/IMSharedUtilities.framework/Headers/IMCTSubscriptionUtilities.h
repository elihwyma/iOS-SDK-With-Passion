/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, IDSPhoneSubscriptionSelector, IMCTXPCServiceSubscriptionInfo, NSArray, NSMutableDictionary, NSString;

@interface IMCTSubscriptionUtilities : NSObject

{
    CoreTelephonyClient *_coreTelephonyClient;
    NSMutableDictionary *_cachedCarrierSettings;
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;
    IDSPhoneSubscriptionSelector *_phoneSubscriptionSelector;
    NSArray *_registeredSIMIDs;
    NSArray *_registeredPhoneNumbers;
    NSArray *_registeredSubscriptions;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSMutableDictionary *cachedCarrierSettings;
@property (retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector;
@property (copy, nonatomic) NSArray *registeredSIMIDs;
@property (copy, nonatomic) NSArray *registeredPhoneNumbers;
@property (copy, nonatomic) NSArray *registeredSubscriptions;
@property (copy, nonatomic, readonly) NSString *ctPhoneNumber;
@property (nonatomic, readonly) NSArray *ctServiceSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)subscriptionInfoDidChange;
- (void)carrierBundleChange:(id)arg1;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1;
- (id)_createSettingsDictionaryForUniqueID:(id)arg1;
- (id)stringForBundleType:(long long)arg1;
- (id)_getCarrierSettingsForUniqueID:(id)arg1;
- (void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2;
- (void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3;
- (id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4;
- (id)ctSubscriptionInfoWithError:(id)arg1;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)arg1;
- (void)_resetSubscriptionInfo;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (unsigned long long)numberOfSubscriptions;
- (_Bool)deviceSupportsMultipleSubscriptions;

@end
