/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIButtonViewElement, SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUIDividerViewElement : SKUIViewElement

{
    SKUIButtonViewElement *_button;
    long long _dividerType;
    _Bool _dividerTypeWasInitialized;
    SKUIViewElementText *_text;
}

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) long long dividerType;
@property (nonatomic, readonly) SKUIViewElementText *text;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
