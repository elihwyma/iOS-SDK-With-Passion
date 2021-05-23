/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapItemTip, MKMapItem, NSDate, NSString, NSURL;

@protocol GEOMapItemReview;

__attribute__((visibility("hidden")))
@interface _MKMapItemUserRatingSnippetReview : NSObject

{
    MKMapItem *_mapItem;
    id <GEOMapItemReview> _review;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_score) double score;
@property (nonatomic, readonly, getter=_maxScore) double maxScore;
@property (nonatomic, readonly, getter=_normalizedScore) double normalizedScore;
@property (nonatomic, readonly, getter=_localizedSnippet) NSString *localizedSnippet;
@property (nonatomic, readonly, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (nonatomic, readonly, getter=_date) NSDate *date;
@property (nonatomic, readonly, getter=_reviewerName) NSString *reviewerName;
@property (nonatomic, readonly, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property (nonatomic, readonly, getter=_geoReview) id <GEOMapItemReview> geoReview;
@property (nonatomic, readonly, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;

- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMapItem:(id)arg1 review:(id)arg2;

@end
