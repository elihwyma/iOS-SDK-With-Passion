/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class SKUIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProfileSettingDescriptionView : SKUISettingDescriptionView

{
    UILabel *_handleLabel;
    _Bool _hasDisclosureChevron;
    SKUIImageView *_imageView;
    UILabel *_nameLabel;
}

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)hasDisclosureChevron;

@end
