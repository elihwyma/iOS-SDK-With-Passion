/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSTextView;

@interface PSTextViewTableCell

{
    PSTextView *_textView;
}

@property (retain, nonatomic) PSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setValue:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)textContentViewDidEndEditing:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)cellRemovedFromView;
- (void)_adjustTextView:(id)arg1 updateTable:(_Bool)arg2 withSpecifier:(id)arg3;
- (void)drawTitleInRect:(struct CGRect)arg1 selected:(_Bool)arg2;

@end
