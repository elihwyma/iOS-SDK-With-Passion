/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIBarRatingViewElement : SKUIViewElement

{
    float _ratingValue;
}

@property (nonatomic, readonly) float ratingValue;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
