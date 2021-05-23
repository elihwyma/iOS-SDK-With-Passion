/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution

{
    GEOMapItemReviewsAttribution *_geoReviewsAttribution;
}

@property (nonatomic, readonly) NSArray *addReviewURLs;

- (id)urlsForReview:(id)arg1;
- (id)urlsForSelectedItemWithItems:(id)arg1;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end
