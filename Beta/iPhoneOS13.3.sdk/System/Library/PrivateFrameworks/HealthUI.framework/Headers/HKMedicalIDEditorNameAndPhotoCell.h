/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorMultilineStringCell.h>

@class NSString, UIButton, UIImage, UIView;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell

{
    UIView *_nameBottomSeparator;
    UIButton *_editPhotoButton;
    UIButton *_editPhotoLabelButton;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *photo;
@property (nonatomic, readonly) UIButton *editPhotoButton;
@property (nonatomic, readonly) UIButton *editPhotoLabelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)showsLabelAndValue;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (struct CGRect)_separatorFrame;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)_largeTextLayoutSubviews;
- (void)_regularLayoutSubviews;

@end
