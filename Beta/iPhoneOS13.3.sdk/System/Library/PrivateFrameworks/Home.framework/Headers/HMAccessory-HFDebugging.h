/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessory.h>

#import <Home/Swift-Protocol.h>

@class HFServiceNameComponents, HMHome, HMResidentDevice, HMRoom, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface HMAccessory (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isFavorite;
@property (nonatomic, readonly) _Bool hf_hasSetFavorite;
@property (nonatomic, readonly) _Bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) _Bool hf_isMediaAccessory;
@property (nonatomic, readonly) _Bool hf_isHomePod;
@property (nonatomic, readonly) _Bool hf_isAppleTV;
@property (nonatomic, readonly) _Bool hf_isDumbSpeaker;
@property (nonatomic, readonly) _Bool hf_isAirPortExpressSpeaker;
@property (nonatomic, readonly) _Bool hf_isSpeaker;
@property (nonatomic, readonly) unsigned long long hf_mediaAccessControlCapabilities;
@property (nonatomic, readonly) _Bool hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property (nonatomic, readonly) _Bool hf_fakeUnreachableError;
@property (nonatomic, readonly) _Bool hf_fakeWiFiSymptom;
@property (nonatomic, readonly) _Bool hf_fakeWiFiPerformanceSymptom;
@property (nonatomic, readonly) _Bool hf_fakeInternetFixSymptom;
@property (nonatomic, readonly) _Bool hf_fakeHardwareFixSymptom;
@property (nonatomic, readonly) _Bool hf_fakeGeneralFixSymptom;
@property (nonatomic, readonly) _Bool hf_fakeHomeKitSymptom;
@property (nonatomic, readonly) _Bool hf_fakeICloudSymptom;
@property (nonatomic, readonly) _Bool hf_fakeITunesSymptom;
@property (nonatomic) _Bool hf_fakeWiFiMismatchSymptom;
@property (nonatomic, readonly) _Bool hf_fakeVPNProfileExpired;
@property (nonatomic, readonly) _Bool hf_fake8021xNetworkSymptom;
@property (nonatomic, readonly) _Bool hf_fakeNetworkProfileFixSymptom;
@property (nonatomic, readonly) _Bool hf_fakeNetworkProfileInstallSymptom;
@property (nonatomic, readonly) _Bool hf_fakeNetworkNotShareableSymptom;
@property (nonatomic, readonly) _Bool hf_fakeShouldDisplayManualFixOption;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) _Bool hf_requiresFirmwareUpdate;
@property (nonatomic, readonly) _Bool hf_isBridge;
@property (nonatomic, readonly) _Bool hf_isVisibleAsBridge;
@property (nonatomic, readonly) _Bool hf_isVisibleAsBridgedAccessory;
@property (nonatomic, readonly) _Bool hf_isCamera;
@property (nonatomic, readonly) _Bool hf_isTelevision;
@property (nonatomic, readonly) _Bool hf_isNetworkRouter;
@property (nonatomic, readonly) _Bool hf_isNetworkRouterSatellite;
@property (nonatomic, readonly) _Bool hf_isNotificationSupportedCamera;
@property (nonatomic, readonly) _Bool hf_isPowerStrip;
@property (nonatomic, readonly) _Bool hf_isProgrammableSwitch;
@property (nonatomic, readonly) _Bool hf_isRemoteControl;
@property (nonatomic, readonly) _Bool hf_areAllServicesInGroups;
@property (nonatomic, readonly) _Bool hf_isSingleServiceAccessory;
@property (nonatomic, readonly) _Bool hf_isMultiServiceAccessory;
@property (nonatomic, readonly) _Bool hf_isVisibleAccessory;
@property (nonatomic, readonly) _Bool hf_isNonServiceBasedAccessory;
@property (nonatomic, readonly) _Bool hf_showAsAccessoryTile;
@property (nonatomic, readonly) _Bool hf_showAsIndividualServices;
@property (nonatomic, readonly) _Bool hf_shouldSeparateAccessoryName;
@property (nonatomic, readonly) HMResidentDevice *hf_linkedResidentDevice;
@property (copy, nonatomic, readonly) NSSet *hf_visibleServices;
@property (copy, nonatomic, readonly) NSSet *hf_componentServices;
@property (copy, nonatomic, readonly) NSSet *hf_standardServices;
@property (copy, nonatomic, readonly) NSSet *hf_displayNamesForVisibleTiles;
@property (nonatomic, readonly) long long hf_appPunchOutReason;
@property (nonatomic, readonly) unsigned long long hf_numberOfProgrammableSwitches;
@property (nonatomic, readonly) NSSet *hf_programmableSwitchNamespaceServices;
@property (nonatomic, readonly) NSSet *hf_servicesBehindBridge;
@property (nonatomic, readonly) NSArray *hf_bridgedAccessories;
@property (nonatomic, readonly) HMAccessory *hf_owningBridgeAccessory;
@property (nonatomic, readonly) NSArray *hf_networkRouterProfiles;
@property (nonatomic, readonly) NSArray *hf_networkConfigurationProfiles;
@property (nonatomic, readonly) _Bool hf_needsReprovisioningCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (weak, nonatomic, readonly) HMHome *home;
@property (weak, nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

- (id)accessories;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_isValidObject;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (_Bool)hf_anyServiceIsFavorite;
- (void)_pushSymptomUpdate;
- (_Bool)hf_supportsMultiUserLanguage:(id)arg1;
- (id)hf_identifyHomePod;
- (_Bool)hf_shouldDisplayManualFixOptionForSymptom:(long long)arg1;
- (id)hf_primaryService;
- (id)hf_serviceOfType:(id)arg1;
- (id)hf_setShowAsIndividualServices:(_Bool)arg1;

@end
