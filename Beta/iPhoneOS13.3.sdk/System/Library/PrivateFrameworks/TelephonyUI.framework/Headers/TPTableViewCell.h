/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UITableViewCell.h>

@class NSLayoutConstraint, UIColor, UIView;

@interface TPTableViewCell : UITableViewCell

{
    _Bool _accessiblityConstraintsEnabled;
    _Bool _constraintsLoaded;
    _Bool _foregroundViewLoaded;
    UIView *_foregroundView;
    NSLayoutConstraint *_foregroundViewLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewTopAnchorLayoutConstraint;
    NSLayoutConstraint *_foregroundViewBottomAnchorLayoutConstraint;
}

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) _Bool accessiblityConstraintsEnabled;
@property (nonatomic, getter=isConstraintsLoaded) _Bool constraintsLoaded;
@property (nonatomic, getter=isForegroundViewLoaded) _Bool foregroundViewLoaded;
@property (retain, nonatomic) UIView *foregroundView;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets intrinsicSeparatorInset;

+ (_Bool)requiresConstraintBasedLayout;
+ (struct UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateFonts;
- (void)loadContentView;
- (void)updateConstraintsConstants;
- (void)loadConstraints;
- (void)unloadConstraints;

@end
