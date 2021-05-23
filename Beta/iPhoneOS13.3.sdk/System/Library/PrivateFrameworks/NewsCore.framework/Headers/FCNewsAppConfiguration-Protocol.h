/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCIAdConfiguration, FCPrefetchConfiguration, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCNewsAppConfiguration <Swift>

@property (nonatomic, readonly) NSArray *onboardingFeedIDs;
@property (nonatomic, readonly) long long autoScrollToTopFeedTimeout;
@property (nonatomic, readonly) double interstitialAdLoadDelay;
@property (nonatomic, readonly) double prerollLoadingTimeout;
@property (nonatomic, readonly) double tileProminenceScoreBalanceValue;
@property (nonatomic, readonly) FCIAdConfiguration *iAdConfig;
@property (nonatomic, readonly) FCPrefetchConfiguration *prefetchConfig;
@property (nonatomic, readonly) long long newFavoriteNotificationAlertsFrequency;
@property (nonatomic, readonly) long long notificationArticleCacheTimeout;
@property (nonatomic, readonly) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic, readonly) NSString *embedConfigurationAssetID;
@property (nonatomic, readonly) _Bool universalLinksEnabled;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) NSString *widgetConfigID;
@property (nonatomic, readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property (nonatomic, readonly) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (nonatomic, readonly) long long analyticsEndpointMaxPayloadSize;
@property (nonatomic, readonly) NSString *personalizationBundleIdMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationUrlMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationWhitelistResourceId;
@property (nonatomic, readonly) NSString *personalizationFavorabilityResourceId;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForArticleList;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForSingleArticle;
@property (nonatomic, readonly) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property (nonatomic, readonly) NSString *exploreArticleID;
@property (nonatomic, readonly) NSArray *externalAnalyticsConfigurations;
@property (nonatomic, readonly) NSArray *mediaSharingBlacklistedChannelIDs;
@property (nonatomic, readonly) long long stateRestorationAllowedTimeWindow;
@property (nonatomic, readonly) long long autoRefreshMinimumInterval;
@property (nonatomic, readonly) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property (copy, nonatomic, readonly) NSArray *topStoriesPublishDates;
@property (nonatomic, readonly) unsigned long long trendingStyle;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property (nonatomic, readonly) NSString *articleRecirculationComponentPlacementConfigJSON;
@property (nonatomic, readonly) _Bool isExpired;
@property (nonatomic, readonly) long long articleRecirculationPopularFeedQueryTimeRange;
@property (nonatomic, readonly) _Bool disableThumbnailsForArticleRecirculation;
@property (nonatomic, readonly) NSString *feedNavigationConfigJSON;
@property (nonatomic, readonly) NSString *webEmbedContentBlockers;
@property (nonatomic, readonly) NSString *webEmbedContentBlockerOverrides;
@property (nonatomic, readonly) NSString *anfRenderingConfiguration;
@property (nonatomic, readonly) _Bool enableBadgeInSpotlightTabBar;
@property (nonatomic, readonly) NSString *translationMapResourceID;
@property (nonatomic, readonly) NSString *issueArticleRecirculationConfigJSON;
@property (nonatomic, readonly, getter=isArticleToolbarCompressionEnabled) _Bool articleToolbarCompressionEnabled;
@property (nonatomic, readonly) long long lowStorageThreshold;
@property (nonatomic, readonly) long long criticalStorageThreshold;
@property (nonatomic, readonly) long long feedContentExposureTestMaximumInterval;
@property (nonatomic, readonly) long long maximumTrendingGroupSizeiPad;
@property (nonatomic, readonly) long long maximumTrendingGroupSizeiPhone;
@property (nonatomic, readonly) unsigned long long likeDislikeBehavior;
@property (nonatomic, readonly) unsigned long long bestOfBundleFeedGroupKind;
@property (nonatomic, readonly) long long emailSignupRequiredAppLaunchCount;
@property (nonatomic, readonly) _Bool enableLocationBasedAutofavorites;
@property (nonatomic, readonly) NSString *localAreasMappingResourceId;

@end
