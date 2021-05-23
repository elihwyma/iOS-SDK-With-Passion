/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMMediaSystem.h>

#import <Home/Swift-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;

@protocol HFHomeKitObject, HFMediaValueSource, HMMediaObjectDelegate;

@interface HMMediaSystem (HFAdditions) <Swift>

@property (nonatomic, readonly) _Bool hf_fakeStereoPairVersionMismatchSymptom;
@property (nonatomic, readonly) _Bool hf_fakeStereoPairNotFoundSymptom;
@property (nonatomic, readonly) _Bool hf_fakeStereoPairGeneralSymptom;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) id <HMMediaObjectDelegate> delegate;
@property (copy, readonly) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) _Bool isItemGroup;
@property (nonatomic, readonly) _Bool isContainedWithinItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (nonatomic, readonly) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) _Bool hasValidSettings;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;
@property (nonatomic, readonly) _Bool hf_isFavorite;
@property (nonatomic, readonly) _Bool hf_hasSetFavorite;
@property (nonatomic, readonly) _Bool hf_shouldShowInFavorites;
@property (weak, nonatomic, readonly) HMRoom *hf_parentRoom;
@property (copy, readonly) NSSet *symptoms;
@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, readonly) NSSet *mediaProfiles;
@property (nonatomic, readonly) _Bool hf_isCurrentAccessory;
@property (nonatomic, readonly) _Bool hf_isAccessorySettingsReachable;
@property (nonatomic, readonly) _Bool hf_isAppleMusicReachable;
@property (nonatomic, readonly) _Bool hf_isReachable;
@property (nonatomic, readonly) _Bool hf_supportsSoftwareUpdate;
@property (nonatomic, readonly) _Bool hf_supportsMediaSystem;
@property (nonatomic, readonly) _Bool hf_showsAudioSettings;
@property (nonatomic, readonly) NSString *hf_prettyDescription;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (copy, nonatomic, readonly) NSString *hf_categoryLocalizedDescription;
@property (nonatomic, readonly) HMAccessory *hf_backingAccessory;
@property (nonatomic, readonly) _Bool hf_homePodSupportsMultiUser;
@property (nonatomic, readonly) _Bool hf_homePodIsCapableOfShowingSplitAccountError;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) id <HFMediaValueSource> hf_mediaValueSource;
@property (copy, nonatomic, readonly) NSSet *hf_deviceIdentifiers;
@property (copy, nonatomic, readonly) NSString *hf_mediaRouteIdentifier;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (_Bool)hf_isValidObject;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_homePodSupportsMultiUserLanguage;
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (_Bool)hf_fake8021xNetworkSymptom;
- (id)hf_accessoryForRole:(id)arg1;
- (id)hf_roleForAccessory:(id)arg1;

@end
