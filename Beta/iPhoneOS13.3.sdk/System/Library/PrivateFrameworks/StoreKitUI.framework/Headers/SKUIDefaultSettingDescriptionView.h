/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class SKUIViewReuseView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView

{
    _Bool _hasDisclosureChevron;
    struct UIEdgeInsets _padding;
    UIView *_viewElementView;
    SKUIViewReuseView *_viewReuseView;
}

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (struct UIEdgeInsets)_paddingForStyle:(id)arg1;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)hasDisclosureChevron;

@end
