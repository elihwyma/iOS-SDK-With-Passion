/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDPlace, GEOPDReview, NSDate, NSString;

@interface _GEOPlaceDataReview : NSObject

{
    GEOPDPlace *_placeData;
    GEOPDReview *_review;
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
@property (nonatomic, readonly, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property (nonatomic, readonly, getter=_identifier) NSString *identifier;

- (id)initWithPlaceData:(id)arg1 review:(id)arg2;

@end
