/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReviewList : NSObject <Swift>

{
    NSDictionary *_dictionary;
    NSMutableArray *_reviews;
}

@property (nonatomic, readonly) NSArray *reviews;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic, readonly) long long ratingCount;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) long long fiveStarRatingCount;
@property (nonatomic, readonly) long long fourStarRatingCount;
@property (nonatomic, readonly) long long oneStarRatingCount;
@property (nonatomic, readonly) long long threeStarRatingCount;
@property (nonatomic, readonly) long long twoStarRatingCount;
@property (nonatomic, readonly) NSURL *writeReviewURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithReviewListDictionary:(id)arg1;
- (void)addReviews:(id)arg1;

@end
