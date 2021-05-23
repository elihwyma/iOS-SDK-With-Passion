/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSString;

@protocol NTSectionDescriptor <Swift>

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

@end
