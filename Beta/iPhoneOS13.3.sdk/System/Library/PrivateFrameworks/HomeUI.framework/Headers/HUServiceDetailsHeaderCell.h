/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UITextView;

@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <Swift>

{
    HFItem *_item;
    id <HUResizableCellDelegate> _resizingDelegate;
    UIButton *_actionButton;
    UITextView *_messageTextView;
    NSArray *_hiddenMessageTextViewConstraints;
    NSArray *_visibleMessageTextViewConstraints;
    UIStackView *_titleSpinnerStackView;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
    UILabel *_titleLabel;
    NSLayoutConstraint *_spinnerBottomConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    NSLayoutConstraint *_actionBottomConstraint;
}

@property (retain, nonatomic) NSArray *hiddenMessageTextViewConstraints;
@property (retain, nonatomic) NSArray *visibleMessageTextViewConstraints;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIStackView *titleSpinnerStackView;
@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *spinnerBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionBottomConstraint;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;

+ (_Bool)requiresConstraintBasedLayout;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_configureConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (void)_updateErrorLabelConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (id)_visibleMessageTextViewConstraints;

@end
