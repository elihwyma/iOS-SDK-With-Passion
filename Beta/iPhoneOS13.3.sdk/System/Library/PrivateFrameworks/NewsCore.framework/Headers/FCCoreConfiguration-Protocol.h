/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCForYouGroupsConfiguration, FCNotificationsConfiguration, FCPaidBundleConfiguration, FCTopStoriesConfiguration, FCVideoGroupsConfig, NSArray, NSDictionary, NSNumber, NSString;

@protocol FCCoreConfiguration <Swift>

@property (nonatomic, readonly) long long appConfigRefreshRate;
@property (nonatomic, readonly) long long trendingTopicsRefreshRate;
@property (nonatomic, readonly, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled;
@property (nonatomic, readonly) FCNotificationsConfiguration *notificationsConfig;
@property (nonatomic, readonly) long long notificationEnabledChannelsRefreshFrequency;
@property (nonatomic, readonly) long long savedArticlesCutoffTime;
@property (nonatomic, readonly) long long savedArticlesOpenedCutoffTime;
@property (nonatomic, readonly) long long savedArticlesMaximumCountWiFi;
@property (nonatomic, readonly) long long savedArticlesMaximumCountCellular;
@property (nonatomic, readonly) long long subscriptionsGlobalMeteredCount;
@property (nonatomic, readonly) NSArray *presubscribedFeedIDs;
@property (nonatomic, readonly) _Bool useSecureConnectionForAssets;
@property (nonatomic, readonly, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed;
@property (nonatomic, readonly, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired;
@property (nonatomic, readonly) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property (nonatomic, readonly, getter=isPrivateDataMigrationCleanupEnabled) _Bool privateDataMigrationCleanupEnabled;
@property (nonatomic, readonly) NSDictionary *endpointConfigsByEnvironment;
@property (nonatomic, readonly) FCTopStoriesConfiguration *topStoriesConfig;
@property (nonatomic, readonly) NSString *breakingNewsChannelID;
@property (nonatomic, readonly) NSString *topVideosChannelID;
@property (nonatomic, readonly) NSString *moreVideosChannelID;
@property (nonatomic, readonly) NSString *briefingsTagID;
@property (nonatomic, readonly) NSString *trendingTagID;
@property (nonatomic, readonly) NSString *featuredStoriesTagID;
@property (nonatomic, readonly) NSString *savedStoriesTagID;
@property (nonatomic, readonly) NSString *editorialChannelID;
@property (nonatomic, readonly) NSString *editorialGemsSectionID;
@property (nonatomic, readonly) long long articleRapidUpdatesTimeout;
@property (nonatomic, readonly) NSArray *hiddenFeedIDs;
@property (nonatomic, readonly) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property (nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekday;
@property (nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekend;
@property (nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekday;
@property (nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekend;
@property (nonatomic, readonly) long long expiredPaidSubscriptionGroupCutoffTime;
@property (nonatomic, readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property (nonatomic, readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property (nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPad;
@property (nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPhone;
@property (nonatomic, readonly) _Bool diversifyOptionalTopStories;
@property (nonatomic, readonly) long long optionalTopStoriesRefreshRate;
@property (nonatomic, readonly) double minimumTrendingUnseenRatio;
@property (copy, nonatomic, readonly) FCVideoGroupsConfig *forYouVideoGroupsConfig;
@property (nonatomic, readonly) double endOfArticleMinPaidHeadlineRatio;
@property (nonatomic, readonly) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property (nonatomic, readonly) long long minimumDistanceBetweenImageOnTopTiles;
@property (nonatomic, readonly) NSString *forYouRecordConfigID;
@property (nonatomic, readonly) NSString *experimentalizableFieldPostfix;
@property (nonatomic, readonly) NSNumber *currentTreatment;
@property (nonatomic, readonly) long long expirePinnedArticlesAfter;
@property (nonatomic, readonly) _Bool shouldShowAlternateHeadlines;
@property (nonatomic, readonly) long long singleTopicFeedMinFeedItemsPerRequest;
@property (nonatomic, readonly) long long singleChannelFeedMinFeedItemsPerRequest;
@property (nonatomic, readonly) _Bool isSpecialEventsMicaAnimationDisabled;
@property (nonatomic, readonly) long long maxRetriesForDroppedFeeds;
@property (nonatomic, readonly) double delayBeforeRetryingDroppedFeeds;
@property (nonatomic, readonly) FCPaidBundleConfiguration *paidBundleConfig;
@property (nonatomic, readonly) NSString *magazinesConfigRecordID;
@property (nonatomic, readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property (nonatomic, readonly) long long subscriptionsPlacardGlobalMaximumPerDay;
@property (nonatomic, readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic, readonly) long long entitlementsCacheRecoveryAttemptDurationInSeconds;
@property (nonatomic, readonly) NSString *spotlightChannelID;
@property (nonatomic, readonly) double feedLineHeightMultiplier;
@property (nonatomic, readonly) NSArray *aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
@property (nonatomic, readonly) NSString *todayFeedKnobs;

- (unsigned short)personalizationTreatmentForFeldsparID: /* Error: Ran out of types for this method. */;
- (unsigned short)todayConfigWithQueueConfigs:maxSlotCount: /* Error: Ran out of types for this method. */;
- (unsigned short)analyticsEnvelopeContentTypeConfigsForEnvironment: /* Error: Ran out of types for this method. */;

@end
