/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class NSString, SKUIFieldSettingDescription, SKUIInputViewElement, UILabel, UISwitch;

__attribute__((visibility("hidden")))
@interface SKUICheckboxFieldSettingDescriptionView : SKUIFieldSettingDescriptionView

{
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UISwitch *_switch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)_addInputWithElement:(id)arg1;
- (void)_addLabelWithElement:(id)arg1;
- (void)_addSwitchWithElement:(id)arg1;
- (void)_switchValueChanged:(id)arg1;

@end
