/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUICardViewElement : SKUIViewElement

{
    BOOL _enabled;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly, getter=isAdCard) _Bool adCard;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
