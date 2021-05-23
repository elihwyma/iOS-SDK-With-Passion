/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIExpandViewElement : SKUIViewElement

{
    _Bool _open;
    _Bool _previousIsOpen;
}

@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (nonatomic) _Bool previousIsOpen;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;

@end
