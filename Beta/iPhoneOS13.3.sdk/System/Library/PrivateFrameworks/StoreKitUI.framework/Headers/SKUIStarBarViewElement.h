/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIStarBarViewElement : SKUIViewElement

{
    long long _numberOfRatings;
    long long _numberOfStars;
    float _value;
}

@property (nonatomic, readonly) long long numberOfRatings;
@property (nonatomic, readonly) long long numberOfStars;
@property (nonatomic, readonly) float value;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
