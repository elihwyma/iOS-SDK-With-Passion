/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSEditableTableCell.h>

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell

{
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id _textChangeObserver;
    _Bool _textFieldIsEmpty;
    _Bool _skipDelegateCallback;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
}

@property (retain, nonatomic) CNFRegShadowView *shadowView;
@property (nonatomic) _Bool skipDelegateCallback;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *customCheckmarkImage;
@property (retain, nonatomic) UIImage *customCheckmarkImageSelected;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setChecked:(_Bool)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)textFieldChangedExternally;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;
- (void)_handleTextChanged;
- (_Bool)_textFieldIsCurrentlyEmpty;
- (void)notifyTextFieldEmptyStateChanged:(_Bool)arg1;
- (void)notifyTextFieldDidBeginEditing;
- (void)notifyTextFieldDidEndEditing;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;

@end
