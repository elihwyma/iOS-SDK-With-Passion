/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMHome.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSDate, NSNumber, NSObject, NSString, NSUUID, UIImage;

@protocol OS_dispatch_source;

@interface HMHome (HFUserHandleAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *homepodLanguageSettingSyncCompleteTimer;
@property (retain, nonatomic) NSNumber *homepodLanguageSettingSyncCompleteCheckCount;
@property (nonatomic, readonly) _Bool hf_isAbleToAddTrigger;
@property (nonatomic, readonly) _Bool hf_hasAutomatableServices;
@property (nonatomic, readonly) _Bool hf_hasAutomatableProfiles;
@property (nonatomic, readonly) UIImage *hf_wallpaperImage;
@property (copy, nonatomic, readonly) NSArray *hf_userNotificationServiceTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

+ (_Bool)hf_prefersAutoSynthesizedDescription;
+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;
+ (id)_hf_groupedServiceTypeTopics;
+ (id)_hf_standaloneTopicNameForPrimaryServiceType:(id)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_handleForUser:(id)arg1;
- (id)hf_home;
- (_Bool)hf_currentUserIsAdministrator;
- (id)hf_reorderableServicesList;
- (id)hf_reorderableActionSetsList;
- (id)hf_reorderableCamerasList;
- (id)hf_reorderableRoomsList;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_mediaSystemForAccessory:(id)arg1;
- (unsigned long long)hf_remoteAccessState;
- (id)hf_characteristicValueManager;
- (_Bool)hf_currentUserIsOwner;
- (id)hf_userForHandle:(id)arg1;
- (id)hf_allUsersIncludingCurrentUser;
- (_Bool)hf_supportsSharedEventAutomation;
- (_Bool)hf_isCurrentLocationHome;
- (id)hf_allRooms;
- (id)hf_personalRequestAccessories;
- (id)hf_tvViewingProfilesAccessories;
- (_Bool)hf_homeHasMigratedIntoHomeApp;
- (_Bool)hf_homeHasMigratedServicesToAccessories;
- (id)hf_accessoryWithIdentifier:(id)arg1;
- (id)hf_allMediaProfiles;
- (unsigned long long)hf_favoriteCameraCountExcludingHomeKitObjects:(id)arg1;
- (unsigned long long)hf_favoriteServiceLikeObjectCountExcludingHomeKitObjects:(id)arg1;
- (_Bool)hf_shouldDefaultFavoriteForHomeKitObject:(id)arg1 excludingHomeKitObjects:(id)arg2;
- (id)hf_allCameraProfiles;
- (id)hf_accessControlDescriptor;
- (id)hf_updateAccessControlDescriptor:(id)arg1;
- (id)hf_setHomeHasMigratedServicesToAccessories:(_Bool)arg1;
- (_Bool)hf_isNetworkRouterSupported;
- (id)hf_allNetworkRouterProfiles;
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;
- (id)hf_accessoryForSymptomsHandler:(id)arg1;
- (id)hf_visibleAccessories;
- (id)hf_roomWithIdentifier:(id)arg1;
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)hf_allAccessoryProfiles;
- (id)hf_enabledResidentDevices;
- (_Bool)hf_hasEnabledResident;
- (_Bool)hf_isAutomatable;
- (_Bool)hf_userIsAllowedToCreateTrigger;
- (id)hf_allVisibleServices;
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_activeRooms;
- (_Bool)hf_isUserAtHome;
- (id)hf_roomWithName:(id)arg1;
- (id)hf_selectedRoom;
- (void)hf_setSelectedRoom:(id)arg1;
- (id)hf_zoneWithIdentifier:(id)arg1;
- (_Bool)hf_isNetworkProtectionSupportedForAccessories;
- (_Bool)hf_isNetworkProtectionSupportedForHome;
- (id)hf_localizedDescriptionForNetworkProtectionSupport;
- (_Bool)hf_isNetworkProtectionEnabled;
- (id)hf_updateNetworkProtection:(long long)arg1;
- (id)hf_allNonEmptyActionSets;
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;
- (id)hf_allBridgeAccessories;
- (id)hf_allProgrammableSwitchAccessories;
- (id)hf_allTargetControlAccessories;
- (id)hf_primaryResidentDevice;
- (id)hf_actionSetWithUUID:(id)arg1;
- (id)hf_serviceGroupsForService:(id)arg1;
- (id)availableSoftwareUpdates;
- (id)hf_serviceWithIdentifier:(id)arg1;
- (id)hf_allServices;
- (id)hf_accessoryProfilesWithClass:(Class)arg1;
- (id)hf_allNetworkConfigurationProfiles;
- (id)hf_cameraProfileWithIdentifier:(id)arg1;
- (id)hf_allCameraProfilesSupportingRecording;
- (id)hf_unitaryCameraProfile;
- (_Bool)hf_hasSecureRecordingCameras;
- (id)hf_allHomePodProfiles;
- (id)hf_resetAllNetworkConfigurationProfiles;
- (id)hf_accessoriesRequiringManualWiFiReconfiguration;
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1;
- (id)hf_mediaAccessories;
- (id)hf_appleTVs;
- (id)hf_homePods;
- (id)hf_allResidentAccessories;
- (id)hf_notesApplicationData;
- (id)hf_setNotesApplicationData:(id)arg1;
- (id)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:(_Bool)arg1;
- (_Bool)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;
- (_Bool)hf_supportsPerUserRemoteAccess;
- (_Bool)hf_supportsRemoteAccessRestrictions;
- (_Bool)hf_enabledResidentsSupportsMediaActions;
- (id)hf_allNonAdminUsers;
- (id)hf_allNonOwnerUsers;
- (_Bool)hf_isPresenceAuthorizedForUser:(id)arg1;
- (_Bool)hf_isMediaAccessoryProfileValid:(id)arg1;
- (_Bool)hf_hasMediaAccessories;
- (_Bool)hf_hasHomePods;
- (unsigned long long)hf_numberOfHomePods;
- (_Bool)hf_hasAppleTVs;
- (_Bool)hf_hasCameraRecordingResident;
- (void)hf_startReprovisioningAccessory:(id)arg1;
- (_Bool)hf_cameraRecordingHasBeenOnboarded;
- (void)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;
- (_Bool)hf_hasAnyVisibleTriggers;
- (_Bool)hf_userCanCreateTrigger;
- (id)hf_colorPalette;
- (id)hf_updateColorPalette:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
- (id)_hf_accessoryTopics;
- (id)hf_userNotificationTopicForService:(id)arg1;
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;
- (id)hf_userNotificationTopicForObject:(id)arg1;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;

@end
