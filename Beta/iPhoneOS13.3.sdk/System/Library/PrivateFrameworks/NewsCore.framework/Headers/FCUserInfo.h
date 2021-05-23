/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterLock, FCTagSettings, NSDate, NSDictionary, NSNumber, NSString;

@interface FCUserInfo : FCPrivateDataController

{
    _Bool _useParsecResults;
    FCTagSettings *_tagSettings;
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}

@property (retain, nonatomic) NSDictionary *readOnlyUserInfo;
@property (retain, nonatomic) FCMTWriterLock *userInfoLock;
@property (copy, nonatomic) NSNumber *onboardingVersionNumber;
@property (copy, nonatomic) NSString *feldsparID;
@property (copy, nonatomic, readonly) NSString *notificationsUserID;
@property (copy, nonatomic) NSDate *dateLastOpened;
@property (retain, nonatomic) FCTagSettings *tagSettings;
@property (copy, nonatomic) NSDate *userStartDate;
@property (nonatomic, readonly) _Bool useParsecResults;
@property (nonatomic, readonly) _Bool shouldShowDefaultForYou;
@property (nonatomic, readonly) unsigned long long progressivePersonalization;
@property (nonatomic) _Bool hasShownProgressivePersonalizationWelcomeBrick;
@property (nonatomic) _Bool userHasCompletedFavoritesSetup;
@property (copy, nonatomic) NSString *editorialArticleVersion;
@property (copy, nonatomic) NSString *canonicalLanguage;
@property (nonatomic) _Bool marketingNotificationsEnabled;
@property (nonatomic) _Bool newIssueNotificationsEnabled;
@property (copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property (copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property (nonatomic, readonly) _Bool mightNeedToUpdateOnboardingVersion;
@property (nonatomic, readonly) NSDate *dateLastViewedSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)desiredKeys;
+ (_Bool)requiresPushNotificationSupport;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)overrideFeldsparID;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)arg1;
+ (id)iCloudDataKeys;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)asCKRecord;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)prepareForUse;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)_userInfoValueForKey:(id)arg1;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (void)handleSyncWithDeletedUserInfoRecord;
- (void)_modifyUserInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)refreshOnboardingVersion:(CDUnknownBlockType)arg1;
- (void)updateOnboardingVersion;
- (void)maybeUpdateOnboardingVersion:(CDUnknownBlockType)arg1;
- (void)markSavedAsViewed;

@end
