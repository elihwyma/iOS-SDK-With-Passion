/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject

{
    float _averageUserRating;
    long long _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    long long _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property (nonatomic) float averageUserRating;
@property (nonatomic) long long numberOfUserRatings;
@property (copy, nonatomic) NSString *numberOfUserRatingsString;
@property (nonatomic) long long numberOfUserReviews;
@property (copy, nonatomic) NSString *numberOfUserReviewsString;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
