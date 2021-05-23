/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NTPBFeedItem, NTPBTodaySectionConfigWebEmbed, SFSearchResult;

@protocol FCFeedTransformationItem;

@interface NTFeedTransformationWebEmbedItem : NSObject

{
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
}

@property (copy, nonatomic, readonly) NTPBTodaySectionConfigWebEmbed *webEmbed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
- (id)initWithWebEmbed:(id)arg1;

@end
