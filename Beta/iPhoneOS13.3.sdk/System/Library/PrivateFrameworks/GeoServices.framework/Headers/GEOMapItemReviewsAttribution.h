/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *addReviewURLs;

- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)urlsForReview:(id)arg1;
- (id)urlsForSelectedItemWithItems:(id)arg1;

@end
