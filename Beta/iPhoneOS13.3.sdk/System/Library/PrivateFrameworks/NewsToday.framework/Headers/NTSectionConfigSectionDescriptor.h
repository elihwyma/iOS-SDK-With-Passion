/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;

@protocol NTSectionFetchDescriptor;

@interface NTSectionConfigSectionDescriptor : NSObject

{
    _Bool _displaysAsVideoPlaylist;
    _Bool _useNameColorInWidget;
    _Bool _videoPlaysMutedByDefault;
    _Bool _openVideoPlaylistInApp;
    int _readArticlesFilterMethod;
    int _seenArticlesFilterMethod;
    int _leadingCellPromotionPolicy;
    NSString *_identifier;
    NSString *_personalizationFeatureID;
    NSString *_name;
    NSString *_compactName;
    NSString *_referralBarName;
    NSString *_nameColor;
    unsigned long long _cachedResultCutoffTime;
    unsigned long long _minimumStoriesAllocation;
    unsigned long long _maximumStoriesAllocation;
    long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    unsigned long long _fallbackOrder;
    long long _supplementalInterSectionFilterOptions;
    long long _supplementalIntraSectionFilterOptions;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSString *_backgroundGradientColor;
    NSString *_actionTitle;
    NSURL *_actionURL;
    NSObject<NTSectionFetchDescriptor> *_fetchDescriptor;
}

@property (copy, nonatomic) NSObject<NTSectionFetchDescriptor> *fetchDescriptor;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *nameColor;
@property (copy, nonatomic, readonly) NSString *actionTitle;
@property (copy, nonatomic, readonly) NSURL *actionURL;
@property (nonatomic, readonly) _Bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) _Bool useNameColorInWidget;
@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSString *backgroundGradientColor;
@property (nonatomic, readonly) _Bool videoPlaysMutedByDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *compactName;
@property (copy, nonatomic, readonly) NSString *referralBarName;
@property (copy, nonatomic, readonly) NSString *personalizationFeatureID;
@property (nonatomic, readonly) unsigned long long cachedResultCutoffTime;
@property (nonatomic, readonly) unsigned long long fallbackOrder;
@property (nonatomic, readonly) unsigned long long minimumStoriesAllocation;
@property (nonatomic, readonly) unsigned long long maximumStoriesAllocation;
@property (nonatomic, readonly) int readArticlesFilterMethod;
@property (nonatomic, readonly) int seenArticlesFilterMethod;
@property (nonatomic, readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic, readonly) long long supplementalInterSectionFilterOptions;
@property (nonatomic, readonly) long long supplementalIntraSectionFilterOptions;
@property (nonatomic, readonly) int leadingCellPromotionPolicy;
@property (nonatomic, readonly) _Bool openVideoPlaylistInApp;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)initWithSectionConfig:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 todayData:(id)arg5 supplementalFeedFilterOptions:(long long)arg6;

@end
