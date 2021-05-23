/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarViewElement : SKUIViewElement

{
    _Bool _hidesShadow;
    _Bool _hidesBackButton;
}

@property (nonatomic, readonly) _Bool hidesShadow;
@property (nonatomic, readonly) _Bool hidesBackButton;
@property (nonatomic, readonly) _Bool isTransparent;
@property (nonatomic, readonly) NSArray *mainViewElements;
@property (nonatomic, readonly) NSArray *navigationPalettes;
@property (nonatomic, readonly) UIColor *tintColor;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
