/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class CALayer, NSString, SKUIClientContext, SKUIEditProfileSettingDescription, SKUIImageView, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescriptionView : SKUISettingDescriptionView

{
    CALayer *_divider1;
    SKUIClientContext *_clientContext;
    UIButton *_editButton;
    UITextField *_nameField;
    UITextField *_handleField;
    SKUIImageView *_imageView;
    SKUIEditProfileSettingDescription *_settingDescription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (id)_baselineFontForTextStyle:(id)arg1;

- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)_editProfilePhoto;
- (id)_textFieldWithPlaceholder:(id)arg1;
- (void)_updateHandleTextFieldValidity;

@end
