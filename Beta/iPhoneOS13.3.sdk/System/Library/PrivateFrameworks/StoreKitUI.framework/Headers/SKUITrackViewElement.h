/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

__attribute__((visibility("hidden")))
@interface SKUITrackViewElement : SKUIViewElement

{
    BOOL _enabled;
    _Bool _selected;
}

@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) SKUIActionsViewElement *swipeActions;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;

@end
