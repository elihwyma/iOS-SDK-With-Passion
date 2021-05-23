/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class SKUIFieldSettingDescription, SKUIInputViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView

{
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
}

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)_addInputWithElement:(id)arg1;
- (id)_currentControllerValue;
- (void)_addSubmitInputWithElement:(id)arg1;

@end
