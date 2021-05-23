/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUIItemViewElement : SKUIViewElement

{
    SKUIViewElementText *_itemText;
    _Bool _selected;
}

@property (nonatomic, readonly) SKUIViewElementText *itemText;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
