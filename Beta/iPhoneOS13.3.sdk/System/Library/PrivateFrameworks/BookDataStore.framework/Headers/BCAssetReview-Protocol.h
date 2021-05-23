/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSString;

@protocol BCAssetReview <Swift>

@property (copy, nonatomic, readonly) NSString *assetReviewID;
@property (nonatomic, readonly) short starRating;
@property (nonatomic, readonly) double normalizedStarRating;
@property (copy, nonatomic, readonly) NSString *reviewTitle;
@property (copy, nonatomic, readonly) NSString *reviewBody;

@end
