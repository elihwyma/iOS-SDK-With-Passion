/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUIOrdinalViewElement : SKUIViewElement

{
    SKUIViewElementText *_text;
}

@property (nonatomic, readonly) SKUIViewElementText *text;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
