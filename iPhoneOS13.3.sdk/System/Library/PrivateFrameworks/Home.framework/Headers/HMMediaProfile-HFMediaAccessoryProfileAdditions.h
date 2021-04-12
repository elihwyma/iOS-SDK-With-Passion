//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMMediaProfile.h>

#import <Home/HFMediaProfileContainer-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMHome, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString;
@protocol HFHomeKitObject, HFMediaValueSource;

@interface HMMediaProfile (HFMediaAccessoryProfileAdditions) <HFMediaProfileContainer>
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (id)hf_idsDeviceIdentifierWithError:(id )arg1;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (id)hf_homePodSupportsMultiUserLanguage;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_appleMusicCurrentLoggedInAccount;
@property(readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property(readonly, nonatomic) BOOL isItemGroup;
@property(readonly, nonatomic) BOOL hasValidSettings;
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) BOOL hf_homePodIsCapableOfShowingSplitAccountError;
@property(readonly, nonatomic) BOOL hf_homePodSupportsMultiUser;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, copy, nonatomic) NSString *hf_categoryLocalizedDescription;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) BOOL hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) BOOL hf_isAppleMusicReachable;
@property(readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) BOOL hf_showsAudioSettings;
@property(readonly, nonatomic) BOOL hf_supportsMediaSystem;
@property(readonly, nonatomic) BOOL hf_isReachable;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
- (BOOL)hf_offersAutomation;
@property(readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *mediaProfiles;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@end

