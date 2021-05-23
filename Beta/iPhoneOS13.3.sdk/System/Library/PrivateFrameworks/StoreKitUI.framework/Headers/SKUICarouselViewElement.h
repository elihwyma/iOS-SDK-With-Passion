/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselViewElement : SKUIViewElement

{
    double _displayInterval;
}

@property (nonatomic, readonly) double displayInterval;
@property (nonatomic, readonly) SKUIProgressIndicatorViewElement *progressIndicatorElement;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
