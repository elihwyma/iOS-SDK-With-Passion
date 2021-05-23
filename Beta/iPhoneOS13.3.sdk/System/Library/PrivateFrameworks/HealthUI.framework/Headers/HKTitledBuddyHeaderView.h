/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;

@protocol HKTitledBuddyHeaderViewDelegate;

@interface HKTitledBuddyHeaderView : UIView

{
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    long long _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    id <HKTitledBuddyHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id <HKTitledBuddyHeaderViewDelegate> delegate;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *bodyText;
@property (nonatomic) long long bodyTextAlignment;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (void)_linkButtonTapped:(id)arg1;
- (id)bodyTextView;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (void)setBodyText:(id)arg1 alignment:(long long)arg2;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2;
- (void)_updateBodyTextViewConstraints;

@end
