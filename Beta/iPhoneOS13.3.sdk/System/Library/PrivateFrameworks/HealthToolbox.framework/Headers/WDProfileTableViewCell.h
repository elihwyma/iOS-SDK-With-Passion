/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIColor, UILabel, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface WDProfileTableViewCell : UITableViewCell

{
    UILabel *_displayNameLabel;
    UIButton *_clearButton;
    UIColor *_normalDisplayValueColor;
    UIColor *_selectedDisplayValueColor;
    _Bool _shouldUseSelectedColorForDisplayValue;
    _Bool _shouldDisplayClearButtonDuringEditing;
    NSString *_displayName;
    NSString *_displayValue;
    NSString *_placeholderValue;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextField *_displayValueTextField;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displayValue;
@property (retain, nonatomic) NSString *placeholderValue;
@property (nonatomic) _Bool shouldUseSelectedColorForDisplayValue;
@property (nonatomic) _Bool shouldDisplayClearButtonDuringEditing;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UITextField *displayValueTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)editingRightEdgeMargin;
+ (double)notEditingRightEdgeMargin;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_setupUI;
- (void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)_updateClearButtonState;

@end
