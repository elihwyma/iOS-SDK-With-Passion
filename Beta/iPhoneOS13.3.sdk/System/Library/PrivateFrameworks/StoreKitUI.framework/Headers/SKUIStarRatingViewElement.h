/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement

{
    float _ratingValue;
    SKUIViewElementText *_text;
    long long _starType;
    _Bool _enabled;
}

@property (nonatomic, readonly) long long starType;
@property (nonatomic, readonly) float ratingValue;
@property (nonatomic, readonly) SKUIViewElementText *text;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
