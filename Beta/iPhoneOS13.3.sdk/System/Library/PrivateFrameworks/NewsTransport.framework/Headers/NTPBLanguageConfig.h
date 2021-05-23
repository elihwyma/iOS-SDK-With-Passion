/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBCategory, NTPBCoverArticlesConfig, NTPBTopStoriesConfig, NTPBVideoPlayerConfig;

@interface NTPBLanguageConfig : PBCodable

{
    NSString *_appleEditorialChannelId;
    NSString *_breakingNewsChannelId;
    NSString *_briefingsTagId;
    NTPBCoverArticlesConfig *_coverArticlesConfig;
    NSString *_editorialGemsSectionId;
    NSString *_exploreArticleId;
    NSString *_featuredStoriesTagId;
    NSString *_forYouConfigId;
    NSString *_hiddenFeedId;
    NSString *_languageTag;
    NSMutableArray *_mediaSharingBlacklistedChannelIds;
    NSString *_moreVideosChannelId;
    NSMutableArray *_onboardingTagIds;
    NSMutableArray *_preSubscribedFeedIds;
    NSMutableArray *_preSubscribedNotificationsChannelIds;
    NSMutableArray *_recommendedNotificationChannels;
    NTPBCategory *_rootCategory;
    NSString *_savedStoriesTagId;
    NTPBVideoPlayerConfig *_shareVideoPlayerConfig;
    NSString *_specialEventsChannelId;
    NTPBTopStoriesConfig *_topStoriesConfig;
    NSString *_topVideosChannelId;
    NSString *_trendingTagId;
    NSString *_widgetSectionConfigId;
}

@property (nonatomic, readonly) _Bool hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (nonatomic, readonly) _Bool hasHiddenFeedId;
@property (retain, nonatomic) NSString *hiddenFeedId;
@property (nonatomic, readonly) _Bool hasRootCategory;
@property (retain, nonatomic) NTPBCategory *rootCategory;
@property (retain, nonatomic) NSMutableArray *preSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *onboardingTagIds;
@property (nonatomic, readonly) _Bool hasTopStoriesConfig;
@property (retain, nonatomic) NTPBTopStoriesConfig *topStoriesConfig;
@property (retain, nonatomic) NSMutableArray *preSubscribedNotificationsChannelIds;
@property (retain, nonatomic) NSMutableArray *recommendedNotificationChannels;
@property (nonatomic, readonly) _Bool hasCoverArticlesConfig;
@property (retain, nonatomic) NTPBCoverArticlesConfig *coverArticlesConfig;
@property (nonatomic, readonly) _Bool hasAppleEditorialChannelId;
@property (retain, nonatomic) NSString *appleEditorialChannelId;
@property (nonatomic, readonly) _Bool hasForYouConfigId;
@property (retain, nonatomic) NSString *forYouConfigId;
@property (nonatomic, readonly) _Bool hasBriefingsTagId;
@property (retain, nonatomic) NSString *briefingsTagId;
@property (nonatomic, readonly) _Bool hasTrendingTagId;
@property (retain, nonatomic) NSString *trendingTagId;
@property (nonatomic, readonly) _Bool hasFeaturedStoriesTagId;
@property (retain, nonatomic) NSString *featuredStoriesTagId;
@property (nonatomic, readonly) _Bool hasSavedStoriesTagId;
@property (retain, nonatomic) NSString *savedStoriesTagId;
@property (nonatomic, readonly) _Bool hasWidgetSectionConfigId;
@property (retain, nonatomic) NSString *widgetSectionConfigId;
@property (nonatomic, readonly) _Bool hasEditorialGemsSectionId;
@property (retain, nonatomic) NSString *editorialGemsSectionId;
@property (nonatomic, readonly) _Bool hasExploreArticleId;
@property (retain, nonatomic) NSString *exploreArticleId;
@property (nonatomic, readonly) _Bool hasBreakingNewsChannelId;
@property (retain, nonatomic) NSString *breakingNewsChannelId;
@property (retain, nonatomic) NSMutableArray *mediaSharingBlacklistedChannelIds;
@property (nonatomic, readonly) _Bool hasSpecialEventsChannelId;
@property (retain, nonatomic) NSString *specialEventsChannelId;
@property (nonatomic, readonly) _Bool hasTopVideosChannelId;
@property (retain, nonatomic) NSString *topVideosChannelId;
@property (nonatomic, readonly) _Bool hasMoreVideosChannelId;
@property (retain, nonatomic) NSString *moreVideosChannelId;
@property (nonatomic, readonly) _Bool hasShareVideoPlayerConfig;
@property (retain, nonatomic) NTPBVideoPlayerConfig *shareVideoPlayerConfig;

+ (Class)preSubscribedFeedIdsType;
+ (Class)onboardingTagIdsType;
+ (Class)preSubscribedNotificationsChannelIdsType;
+ (Class)recommendedNotificationChannelsType;
+ (Class)mediaSharingBlacklistedChannelIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPreSubscribedFeedIds:(id)arg1;
- (void)addOnboardingTagIds:(id)arg1;
- (void)addPreSubscribedNotificationsChannelIds:(id)arg1;
- (void)addRecommendedNotificationChannels:(id)arg1;
- (void)addMediaSharingBlacklistedChannelIds:(id)arg1;
- (void)clearPreSubscribedFeedIds;
- (unsigned long long)preSubscribedFeedIdsCount;
- (id)preSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (void)clearOnboardingTagIds;
- (unsigned long long)onboardingTagIdsCount;
- (id)onboardingTagIdsAtIndex:(unsigned long long)arg1;
- (void)clearPreSubscribedNotificationsChannelIds;
- (unsigned long long)preSubscribedNotificationsChannelIdsCount;
- (id)preSubscribedNotificationsChannelIdsAtIndex:(unsigned long long)arg1;
- (void)clearRecommendedNotificationChannels;
- (unsigned long long)recommendedNotificationChannelsCount;
- (id)recommendedNotificationChannelsAtIndex:(unsigned long long)arg1;
- (void)clearMediaSharingBlacklistedChannelIds;
- (unsigned long long)mediaSharingBlacklistedChannelIdsCount;
- (id)mediaSharingBlacklistedChannelIdsAtIndex:(unsigned long long)arg1;

@end
