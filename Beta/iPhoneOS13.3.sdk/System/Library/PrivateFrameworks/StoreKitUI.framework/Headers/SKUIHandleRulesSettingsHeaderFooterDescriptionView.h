/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class NSMutableArray, SKUIHandleRulesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIHandleRulesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView

{
    NSMutableArray *_buttons;
    SKUIHandleRulesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}

+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (id)_labelWithDescription:(id)arg1 forWidth:(double)arg2;

- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end
