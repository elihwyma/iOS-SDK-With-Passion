/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBArticleIDsTodaySectionSpecificConfig, NTPBArticleListTodaySectionSpecificConfig, NTPBDiscoverMoreVideosInfo, NTPBForYouTodaySectionSpecificConfig, NTPBItemsTodaySectionSpecificConfig, NTPBPersonalizedSectionPresenceConfig, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPBTodaySectionConfig : PBCodable

{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _queueMemberships;
    unsigned long long _cachedResultCutoffTime;
    unsigned long long _fallbackOrder;
    unsigned long long _interSectionFilteringOptions;
    unsigned long long _intraSectionFilteringOptions;
    unsigned long long _maximumStoriesAllocation;
    unsigned long long _minimumStoriesAllocation;
    unsigned long long _personalizedPresenceFeatureClickPrior;
    unsigned long long _personalizedPresenceFeatureImpressionPrior;
    unsigned long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    NTPBArticleIDsTodaySectionSpecificConfig *_articleIDsTodaySectionConfig;
    NTPBArticleListTodaySectionSpecificConfig *_articleListTodaySectionConfig;
    NSString *_backgroundGradientColor;
    NSString *_compactName;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBForYouTodaySectionSpecificConfig *_forYouTodaySectionConfig;
    NSString *_groupActionTitle;
    NSString *_groupActionUrl;
    NSString *_identifier;
    NTPBItemsTodaySectionSpecificConfig *_itemsTodaySectionConfig;
    int _leadingCellPromotionPolicy;
    NSString *_name;
    NSString *_nameColor;
    NSString *_personalizationFeatureID;
    NTPBPersonalizedSectionPresenceConfig *_personalizedPresenceConfig;
    NSString *_personalizedPresenceFeatureID;
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedTodaySectionConfig;
    int _readArticlesFilterMethod;
    NSString *_referralBarName;
    int _sectionType;
    int _seenArticlesFilterMethod;
    _Bool _displaysAsVideoPlaylist;
    _Bool _glanceable;
    _Bool _openVideoPlaylistInApp;
    _Bool _presenceDeterminedByPersonalization;
    _Bool _shownInFavoritesOnlyMode;
    _Bool _useNameColorInWidget;
    _Bool _videoPlaysMutedByDefault;
    struct {
        unsigned int cachedResultCutoffTime:1;
        unsigned int fallbackOrder:1;
        unsigned int interSectionFilteringOptions:1;
        unsigned int intraSectionFilteringOptions:1;
        unsigned int maximumStoriesAllocation:1;
        unsigned int minimumStoriesAllocation:1;
        unsigned int personalizedPresenceFeatureClickPrior:1;
        unsigned int personalizedPresenceFeatureImpressionPrior:1;
        unsigned int seenArticlesMinimumTimeSinceFirstSeenToFilter:1;
        unsigned int leadingCellPromotionPolicy:1;
        unsigned int readArticlesFilterMethod:1;
        unsigned int sectionType:1;
        unsigned int seenArticlesFilterMethod:1;
        unsigned int displaysAsVideoPlaylist:1;
        unsigned int glanceable:1;
        unsigned int openVideoPlaylistInApp:1;
        unsigned int presenceDeterminedByPersonalization:1;
        unsigned int shownInFavoritesOnlyMode:1;
        unsigned int useNameColorInWidget:1;
        unsigned int videoPlaysMutedByDefault:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasFallbackOrder;
@property (nonatomic) unsigned long long fallbackOrder;
@property (nonatomic) _Bool hasSectionType;
@property (nonatomic) int sectionType;
@property (nonatomic) _Bool hasCachedResultCutoffTime;
@property (nonatomic) unsigned long long cachedResultCutoffTime;
@property (nonatomic) _Bool hasReadArticlesFilterMethod;
@property (nonatomic) int readArticlesFilterMethod;
@property (nonatomic, readonly) _Bool hasArticleListTodaySectionConfig;
@property (retain, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListTodaySectionConfig;
@property (nonatomic, readonly) _Bool hasForYouTodaySectionConfig;
@property (retain, nonatomic) NTPBForYouTodaySectionSpecificConfig *forYouTodaySectionConfig;
@property (nonatomic) _Bool hasMinimumStoriesAllocation;
@property (nonatomic) unsigned long long minimumStoriesAllocation;
@property (nonatomic) _Bool hasMaximumStoriesAllocation;
@property (nonatomic) unsigned long long maximumStoriesAllocation;
@property (nonatomic) _Bool hasIntraSectionFilteringOptions;
@property (nonatomic) unsigned long long intraSectionFilteringOptions;
@property (nonatomic) _Bool hasInterSectionFilteringOptions;
@property (nonatomic) unsigned long long interSectionFilteringOptions;
@property (nonatomic) _Bool hasSeenArticlesFilterMethod;
@property (nonatomic) int seenArticlesFilterMethod;
@property (nonatomic, readonly) _Bool hasArticleIDsTodaySectionConfig;
@property (retain, nonatomic) NTPBArticleIDsTodaySectionSpecificConfig *articleIDsTodaySectionConfig;
@property (nonatomic) _Bool hasShownInFavoritesOnlyMode;
@property (nonatomic) _Bool shownInFavoritesOnlyMode;
@property (nonatomic, readonly) _Bool hasNameColor;
@property (retain, nonatomic) NSString *nameColor;
@property (nonatomic, readonly) _Bool hasPersonalizedTodaySectionConfig;
@property (retain, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedTodaySectionConfig;
@property (nonatomic) _Bool hasSeenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic) unsigned long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic, readonly) _Bool hasPersonalizationFeatureID;
@property (retain, nonatomic) NSString *personalizationFeatureID;
@property (nonatomic) _Bool hasDisplaysAsVideoPlaylist;
@property (nonatomic) _Bool displaysAsVideoPlaylist;
@property (nonatomic) _Bool hasPresenceDeterminedByPersonalization;
@property (nonatomic) _Bool presenceDeterminedByPersonalization;
@property (nonatomic, readonly) _Bool hasPersonalizedPresenceConfig;
@property (retain, nonatomic) NTPBPersonalizedSectionPresenceConfig *personalizedPresenceConfig;
@property (nonatomic, readonly) unsigned long long queueMembershipsCount;
@property (nonatomic, readonly) unsigned long long *queueMemberships;
@property (nonatomic, readonly) _Bool hasBackgroundGradientColor;
@property (retain, nonatomic) NSString *backgroundGradientColor;
@property (nonatomic) _Bool hasGlanceable;
@property (nonatomic) _Bool glanceable;
@property (nonatomic) _Bool hasLeadingCellPromotionPolicy;
@property (nonatomic) int leadingCellPromotionPolicy;
@property (nonatomic) _Bool hasVideoPlaysMutedByDefault;
@property (nonatomic) _Bool videoPlaysMutedByDefault;
@property (nonatomic, readonly) _Bool hasCompactName;
@property (retain, nonatomic) NSString *compactName;
@property (nonatomic, readonly) _Bool hasPersonalizedPresenceFeatureID;
@property (retain, nonatomic) NSString *personalizedPresenceFeatureID;
@property (nonatomic) _Bool hasPersonalizedPresenceFeatureImpressionPrior;
@property (nonatomic) unsigned long long personalizedPresenceFeatureImpressionPrior;
@property (nonatomic) _Bool hasPersonalizedPresenceFeatureClickPrior;
@property (nonatomic) unsigned long long personalizedPresenceFeatureClickPrior;
@property (nonatomic, readonly) _Bool hasReferralBarName;
@property (retain, nonatomic) NSString *referralBarName;
@property (nonatomic, readonly) _Bool hasGroupActionTitle;
@property (retain, nonatomic) NSString *groupActionTitle;
@property (nonatomic, readonly) _Bool hasGroupActionUrl;
@property (retain, nonatomic) NSString *groupActionUrl;
@property (nonatomic, readonly) _Bool hasItemsTodaySectionConfig;
@property (retain, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsTodaySectionConfig;
@property (nonatomic) _Bool hasUseNameColorInWidget;
@property (nonatomic) _Bool useNameColorInWidget;
@property (nonatomic) _Bool hasOpenVideoPlaylistInApp;
@property (nonatomic) _Bool openVideoPlaylistInApp;
@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosInfo;
@property (retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)queueMembershipAtIndex:(unsigned long long)arg1;
- (void)addQueueMembership:(unsigned long long)arg1;
- (void)clearQueueMemberships;
- (void)setQueueMemberships:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
