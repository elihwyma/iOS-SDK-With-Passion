/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class MISSING_TYPE, NSDate, NSString, NTPBFeedItem, SFSearchResult;

@protocol FCFeedTransformationItem;

@protocol NTFeedTransformationItem <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long todayItemType;
@property (copy, nonatomic, readonly) NSString *clusterID;
@property (copy, nonatomic, readonly) NSDate *cacheCutoffTimeRelativeDate;
@property (copy, nonatomic, readonly) NSDate *cacheExpirationDate;
@property (copy, nonatomic, readonly) SFSearchResult *searchResult;
@property (nonatomic, readonly, getter=isEligibleForLeadingCellAppearance) _Bool eligibleForLeadingCellAppearance;
@property (nonatomic, readonly) _Bool usesDynamicSlotAllocation;
@property (nonatomic, readonly) id <FCFeedTransformationItem> feedTransformationItem;
@property (nonatomic, readonly) _Bool needsFeedItemHeadlinesFetch;
@property (copy, nonatomic, readonly) NTPBFeedItem *feedItemForHeadlineFetch;
@property (nonatomic, readonly) unsigned long long preferredDynamicSlotAllocation;

- (MISSING_TYPE *)protoitemWithFetchedFeedItemHeadline: /* Error: Ran out of types for this method. */;

@end
