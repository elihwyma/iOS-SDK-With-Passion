/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;

@protocol NTSectionDescriptor, NTSectionQueueDescriptor;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject

{
    id <NTSectionDescriptor> _sectionDescriptor;
    id <NTSectionQueueDescriptor> _parentSectionQueueDescriptor;
}

@property (copy, nonatomic, readonly) id <NTSectionDescriptor> sectionDescriptor;
@property (copy, nonatomic, readonly) id <NTSectionQueueDescriptor> parentSectionQueueDescriptor;
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
- (id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2;

@end
