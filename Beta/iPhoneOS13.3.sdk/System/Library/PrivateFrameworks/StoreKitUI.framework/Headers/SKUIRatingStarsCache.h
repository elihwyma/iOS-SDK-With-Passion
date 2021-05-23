/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIImage;

@interface SKUIRatingStarsCache : NSObject

{
    NSMutableDictionary *_cachedImages;
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
    UIImage *_halfStarImage;
}

+ (id)cacheWithProperties:(long long)arg1;

- (id)initWithProperties:(long long)arg1;
- (id)ratingStarsImageForRating:(double)arg1;

@end
