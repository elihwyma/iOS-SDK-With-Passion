/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUITomatoRatingViewElement : SKUIViewElement

{
    long long _freshness;
    float _tomatoRating;
    SKUIViewElementText *_ratingText;
}

@property (nonatomic, readonly) long long freshness;
@property (nonatomic, readonly) float tomatoRating;
@property (nonatomic, readonly) SKUIViewElementText *ratingText;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
