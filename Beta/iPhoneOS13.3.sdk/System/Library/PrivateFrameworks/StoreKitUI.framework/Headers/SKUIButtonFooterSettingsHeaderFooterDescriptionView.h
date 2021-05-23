/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class SKUIButtonViewElement, SKUIViewElement, UIButton;

__attribute__((visibility("hidden")))
@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView

{
    UIButton *_button;
    SKUIButtonViewElement *_buttonElement;
    SKUIViewElement *_viewElement;
}

+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (id)_buttonWithButtonElement:(id)arg1;

- (void)layoutSubviews;
- (void)_buttonTapped:(id)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)_reloadWithButtonElement:(id)arg1 context:(id)arg2;

@end
