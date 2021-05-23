/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIItemViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuViewElement : SKUIViewElement

{
    BOOL _enabled;
    SKUILabelViewElement *_menuLabel;
}

@property (nonatomic, readonly) NSArray *menuItemTitles;
@property (nonatomic, readonly) SKUILabelViewElement *menuLabel;
@property (nonatomic, readonly) long long selectedItemIndex;
@property (nonatomic, readonly) SKUIItemViewElement *titleItem;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;

@end
