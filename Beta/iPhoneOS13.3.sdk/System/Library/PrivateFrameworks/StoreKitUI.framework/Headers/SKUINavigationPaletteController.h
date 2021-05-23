/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteController : SKUINavigationBarSectionController

{
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (id)view;
- (id)viewForElementIdentifier:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
- (void)reloadSectionViews;
- (id)initWithPaletteViewElement:(id)arg1;

@end
