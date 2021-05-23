/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class GEOMapItemTip, NSDate, NSString, NSURL;

@protocol GEOMapItemReview;

@protocol MKMapItemProviderRatingSnippet <Swift>

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

- (unsigned short)showWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
