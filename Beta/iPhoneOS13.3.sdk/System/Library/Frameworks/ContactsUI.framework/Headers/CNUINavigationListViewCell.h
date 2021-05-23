/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class CNUINavigationListStyleApplier, NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCell : UITableViewCell

{
    _Bool _accessoryControlExpanded;
    _Bool _contentViewConstraintsLoaded;
    _Bool _showSeparator;
    UIImageView *_accessoryImageView;
    UILabel *_subtitleLabel;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    id <CNUINavigationListStyle> _navigationListStyle;
    CNUINavigationListStyleApplier *_styleApplier;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelTrailingAnchorConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorConstraint;
    UILayoutGuide *_accessoryImageViewLayoutGuide;
    UILayoutGuide *_titleImageViewLayoutGuide;
}

@property (nonatomic, getter=isAccessoryControlExpanded) _Bool accessoryControlExpanded;
@property (nonatomic, getter=isContentViewConstraintsLoaded) _Bool contentViewConstraintsLoaded;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint;
@property (nonatomic, readonly) UILayoutGuide *accessoryImageViewLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *titleImageViewLayoutGuide;
@property (nonatomic) _Bool showSeparator;
@property (nonatomic, readonly) UIImageView *accessoryImageView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UIImageView *titleImageView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle;
@property (retain, nonatomic) CNUINavigationListStyleApplier *styleApplier;

+ (id)reuseIdentifier;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (id)accessoryImageViewAccessibilityLabel;
+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (id)disclosureImage;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)setSeparatorStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)styleUpdated;
- (double)minimumContentHeight;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (void)loadContentViewConstraints;
- (void)applyStyle;
- (void)loadContentView;
- (void)setAccessoryControlExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateConstraintsConstants;
- (void)updateVisualStateAnimated:(_Bool)arg1;

@end
