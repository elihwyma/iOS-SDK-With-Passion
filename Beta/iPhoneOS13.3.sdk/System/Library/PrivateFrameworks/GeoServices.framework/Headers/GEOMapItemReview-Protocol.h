/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol GEOMapItemReview <Swift>

@property (nonatomic, readonly, getter=_score) double score;
@property (nonatomic, readonly, getter=_maxScore) double maxScore;
@property (nonatomic, readonly, getter=_normalizedScore) double normalizedScore;
@property (nonatomic, readonly, getter=_localizedSnippet) NSString *localizedSnippet;
@property (nonatomic, readonly, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (nonatomic, readonly, getter=_date) NSDate *date;
@property (nonatomic, readonly, getter=_reviewerName) NSString *reviewerName;
@property (nonatomic, readonly, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property (nonatomic, readonly, getter=_identifier) NSString *identifier;

@end
