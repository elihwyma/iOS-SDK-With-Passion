/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class NSString, SKUIFieldSettingDescription, SKUIInputViewElement, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView

{
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UITextField *_textField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)_addInputWithElement:(id)arg1;
- (id)_currentControllerValue;
- (void)_addLabelWithElement:(id)arg1;
- (void)_updateTextFieldValue:(id)arg1;
- (void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2;
- (void)_arrangeTextField:(id)arg1 andLabel:(id)arg2;
- (void)_addTextInputWithElement:(id)arg1;
- (void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(double)arg4 fitWidth:(double)arg5;
- (void)beginEdits;
- (void)commitEdits;

@end
