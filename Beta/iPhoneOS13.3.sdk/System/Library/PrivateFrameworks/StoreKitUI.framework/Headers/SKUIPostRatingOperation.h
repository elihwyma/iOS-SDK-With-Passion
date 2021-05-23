/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIPostRatingOperation : ISOperation

{
    NSDictionary *_responseDictionary;
    NSString *_itemID;
    long long _rating;
    SKUIReviewConfiguration *_reviewConfiguration;
}

@property (readonly) NSDictionary *responseDictionary;

- (void)run;
- (id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3;

@end
