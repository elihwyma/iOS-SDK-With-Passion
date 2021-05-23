/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@interface AMSDevice : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)operatingSystem;
+ (id)productVersion;
+ (id)deviceName;
+ (id)serialNumber;
+ (id)language;
+ (id)productType;
+ (id)macAddress;
+ (id)buildVersion;
+ (_Bool)isRunningInStoreDemoMode;
+ (id)screenScale;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (_Bool)deviceIsiPhone;
+ (_Bool)deviceIsiPad;
+ (id)ROMAddress;
+ (id)MLBSerialNumber;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)deviceGUID;
+ (id)deviceOffers;
+ (_Bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5;
+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4;
+ (void)_performAuth;
+ (_Bool)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2;
+ (_Bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (void)saveDeviceOfferEligibility:(id)arg1;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long *)arg2;
+ (_Bool)isEligibleForOffers;
+ (_Bool)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (_Bool)expressedIntent;
+ (_Bool)isGift;
+ (_Bool)deviceOffersContainType:(unsigned long long)arg1;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (_Bool)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2;
+ (_Bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (_Bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (id)localIPAddress;
+ (id)uniqueDeviceId;
+ (id)hardwarePlatform;
+ (_Bool)deviceIsAppleTV;
+ (_Bool)deviceIsAppleWatch;
+ (_Bool)deviceIsiPod;
+ (_Bool)deviceIsMac;
+ (_Bool)deviceIsAudioAccessory;
+ (id)compatibleProductType;
+ (_Bool)isSecureElementAvailable;
+ (id)macAddressData;
+ (id)thinnedAppVariantId;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_systemVersionDictionary;
+ (_Bool)deviceIsInternalBuild;
+ (_Bool)deviceIsSeedBuild;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1;
+ (void)stopListeningForDeviceLanguageChange;

@end
