/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UILabel, UILayoutGuide;

@interface PXOnboardingWelcomeUIView : UIView

{
    CDStruct_6d279c03 _needsUpdateFlags;
    UIButton *_startButton;
    UIView *_iconView;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_buttonTitle;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_constraints;
    NSLayoutConstraint *_iconTopCnst;
    NSLayoutConstraint *_startBottomCnst;
    long long _layoutStyle;
    UILayoutGuide *_leadingWhitespace;
    UILayoutGuide *_middleWhitespace;
    UILayoutGuide *_trailingWhitespace;
    UIFont *_buttonFont;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *iconTopCnst;
@property (retain, nonatomic) NSLayoutConstraint *startBottomCnst;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) UILayoutGuide *leadingWhitespace;
@property (nonatomic, readonly) UILayoutGuide *middleWhitespace;
@property (nonatomic, readonly) UILayoutGuide *trailingWhitespace;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) UIButton *startButton;
@property (retain, nonatomic) UIView *iconView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonTitle;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (void)_invalidateConstraints;
- (id)_createPortraitConstraintsPhone;
- (id)_createLandscapeConstraintsPhone;
- (id)_createPadConstraints;

@end
