/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIInputViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUICheckboxInputViewElement : SKUIInputViewElement

{
    BOOL _disabled;
    _Bool _selected;
}

@property (nonatomic, getter=isSelected) _Bool selected;

- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
