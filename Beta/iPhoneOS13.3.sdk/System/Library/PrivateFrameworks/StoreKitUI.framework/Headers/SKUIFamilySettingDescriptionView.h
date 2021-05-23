/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class SKUISettingsFamilyViewElement, SKUIViewElementLayoutContext, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView

{
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_iconImageView;
    UILabel *_labelView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISettingsFamilyViewElement *_viewElement;
    long long _viewState;
}

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)_setViewState:(long long)arg1;
- (void)_layoutWithActivityIndicator;
- (void)_layoutWithLockup;
- (id)_attributedStringForKey:(id)arg1;
- (id)_attributedStringForViewState;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end
