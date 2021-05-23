/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFUserNameFormatter, HMHome, HMSettings, HMUser, NSSet, NSString, NSUUID;

@protocol HFHomeKitObject;

@interface HFUserItem : HFItem <Swift>

{
    _Bool _isItemGroup;
    _Bool _isContainedWithinItemGroup;
    HMHome *_home;
    HMUser *_user;
    unsigned long long _numberOfItemsContainedWithinGroup;
    NSUUID *_uniqueIdentifier;
    HFUserNameFormatter *_userNameFormatter;
    HMHome *_hf_home;
}

@property (nonatomic, readonly) HFUserNameFormatter *userNameFormatter;
@property (retain, nonatomic) HMHome *hf_home;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) unsigned long long nameStyle;
@property (nonatomic, readonly) _Bool isItemGroup;
@property (nonatomic, readonly) _Bool isContainedWithinItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (nonatomic, readonly) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) _Bool hasValidSettings;
@property (readonly) HMSettings *settings;

+ (void)set_fakeHMSettings:(id)arg1;
+ (id)_fakeHMSettings;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_privateSettings;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;
- (_Bool)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_privateSettingsValueManager;
- (_Bool)_hasValidPrivateSettings;
- (void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2;
- (_Bool)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;
- (id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;
- (_Bool)hasDismissedVoiceProfileOnboarding;
- (id)setDismissIdentifyVoiceOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedIdentifyVoiceReminderBanner;
- (id)setDismissIdentifyVoiceReminderBanner:(_Bool)arg1;
- (_Bool)hasDismissedTVViewingProfilesOnboarding;
- (id)setDismissTVViewingProfilesOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedTVViewingProfilesReminderBanner;
- (id)setDismissTVViewingProfilesReminderBanner:(_Bool)arg1;
- (_Bool)hasDismissedCameraRecordingOnboarding;
- (id)setDismissCameraRecordingOnboarding:(_Bool)arg1;
- (_Bool)hasDismissedCameraRecordingReminderBanner;
- (id)setDismissCameraRecordingReminderBanner:(_Bool)arg1;
- (id)setEnableIdentifyVoice:(_Bool)arg1;
- (_Bool)isIdentifyVoiceEnabled;
- (id)setPlaybackInfluencesForYou:(_Bool)arg1;
- (_Bool)isPlaybackInfluencesForYouEnabled;
- (id)setDismissUserSplitMediaAccountWarning:(_Bool)arg1;
- (_Bool)hasDismissedUserSplitMediaAccountWarning;

@end
