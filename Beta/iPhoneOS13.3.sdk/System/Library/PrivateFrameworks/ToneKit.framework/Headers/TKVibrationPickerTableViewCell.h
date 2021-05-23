/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerTableViewCell.h>

@class NSString, UIColor, UIFont, UITextField;

@protocol TKVibrationPickerTableViewCellDelegate;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell

{
    UITextField *_removableTextField;
    _Bool _editable;
    id <TKVibrationPickerTableViewCellDelegate> _delegate;
    UIColor *_regularTextColor;
}

@property (weak, nonatomic) id <TKVibrationPickerTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIFont *regularTextFont;
@property (retain, nonatomic) UIColor *regularTextColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (void)_makeRemovableTextFieldEditable:(_Bool)arg1;
- (_Bool)_isDisplayingRemovableTextField;
- (void)_layoutRemovableTextField;

@end
