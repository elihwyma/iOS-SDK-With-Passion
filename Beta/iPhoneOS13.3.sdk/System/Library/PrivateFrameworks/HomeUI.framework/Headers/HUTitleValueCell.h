/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconCell.h>

@class NSArray, NSString, UIFont, UILabel, UIStackView;

@interface HUTitleValueCell : HUIconCell

{
    _Bool _hideTitle;
    _Bool _hideValue;
    _Bool _titleColorFollowsTintColor;
    _Bool _valueColorFollowsTintColor;
    _Bool _allowCopyValueToPasteboard;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIStackView *_labelsStackView;
    NSString *_titleText;
    UIFont *_titleFont;
    NSString *_valueText;
    UIFont *_valueFont;
    NSArray *_stackViewConstraints;
}

@property (retain, nonatomic) NSArray *stackViewConstraints;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (nonatomic, readonly) UIStackView *labelsStackView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) _Bool hideTitle;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) _Bool hideValue;
@property (nonatomic) _Bool titleColorFollowsTintColor;
@property (nonatomic) _Bool valueColorFollowsTintColor;
@property (nonatomic) _Bool allowCopyValueToPasteboard;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;
- (void)setDisabled:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateTitle;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_addValueLabel;
- (void)_addTitleLabel;
- (void)_updateValue;
- (void)_ensureCorrectHeaderViewOrientation;

@end
