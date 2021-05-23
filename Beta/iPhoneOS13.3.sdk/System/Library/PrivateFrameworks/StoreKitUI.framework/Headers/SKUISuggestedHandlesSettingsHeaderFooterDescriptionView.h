/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class NSMutableArray, SKUISuggestedHandlesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView

{
    NSMutableArray *_buttons;
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}

+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (id)_helpLabelWithDescription:(id)arg1 forWidth:(double)arg2;

- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)_buttonAction:(id)arg1;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end
