/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIStackView, UITextField;

@interface WFTextFieldCell : UITableViewCell

{
    _Bool _editable;
    _Bool _hideLabel;
    UILabel *_label;
    UITextField *_textField;
    CDUnknownBlockType _textChangeHandler;
    CDUnknownBlockType _returnKeyHandler;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    NSLayoutConstraint *_stackViewLeadingConstraint;
}

@property (weak, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (weak, nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) UITextField *textField;
@property (copy, nonatomic) CDUnknownBlockType textChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType returnKeyHandler;
@property (nonatomic) _Bool editable;
@property (nonatomic) _Bool hideLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (double)_verticalPadding;
- (void)textFieldDidEndEditingExit:(id)arg1;
- (void)_adjustStackViewPadding;
- (void)_updateStackViewForTraitCollection;

@end
