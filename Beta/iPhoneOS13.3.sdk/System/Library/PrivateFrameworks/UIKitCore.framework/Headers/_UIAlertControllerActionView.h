/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel, _UIAlertControllerActionViewMetrics;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <Swift>

{
    _Bool _highlighted;
    UIView *_labelContainerView;
    UILabel *_label;
    NSLayoutConstraint *_axLabelContainerWidthConstraint;
    NSLayoutConstraint *_labelContainerLeadingConstraint;
    NSLayoutConstraint *_labelContainerTrailingConstraint;
    NSLayoutConstraint *_labelContainerCenterXConstraint;
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelCenterLeadingConstraint;
    UIView *_contentViewControllerContainerView;
    NSArray *_contentViewControllerConstraints;
    UILabel *_descriptiveLabel;
    NSArray *_havingDescriptiveLabelConstraints;
    NSArray *_notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;
    UIImageView *_checkView;
    NSLayoutConstraint *_checkToMarginConstraint;
    UIImageView *_imageView;
    NSLayoutConstraint *_marginToImageConstraint;
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    _UIAlertControllerActionViewMetrics *_metrics;
    _Bool _hasDescriptiveText;
    double _axEnforcedWidth;
    UIAlertController *_alertController;
}

@property (retain) NSLayoutConstraint *labelContainerCenterXConstraint;
@property (retain) NSLayoutConstraint *labelContainerLeadingPinConstraint;
@property (retain) NSLayoutConstraint *labelContainerTrailingPinConstraint;
@property (copy, nonatomic) UIAlertAction *action;
@property (weak, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) UIAlertControllerVisualStyle *visualStyle;
@property (readonly) double currentDescriptiveLabelTextWidth;
@property (readonly) double currentLabelTextWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)_interfaceActionViewState;
- (_Bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;
- (_Bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_contentSizeChanged;
- (void)_buildConstraints;
- (void)_updateLabelAttributes;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_recomputeColors;
- (void)_updateImageViewAttributes;
- (void)_updateTextAlignmentForHavingDescriptiveText:(_Bool)arg1 titleTextAlignment:(long long)arg2;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_loadDescriptiveLabel;
- (void)_prepareConstraintsForImage:(id)arg1;
- (void)_updateImageMargins;
- (void)_buildImageViewConstraints;
- (void)_loadImageView;
- (void)_buildCheckViewConstraints;
- (void)_loadCheckView;
- (void)_updateLabelContainerConstraints;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_updateMinimumHeight;
- (long long)_effectiveTitleTextAlignment;
- (void)_removeContentViewControllerContainerViewSubviews;
- (void)_updateDescriptiveText;
- (void)_updateImageView;
- (void)_prepareConstraintsForHavingDescriptiveText:(_Bool)arg1;
- (void)_loadContentViewControllerView;
- (void)_updateStyle;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateCheckImageView;
- (void)applyMetrics:(id)arg1;
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;
- (void)underlyingInterfaceActionRepresentationDidChange;

@end
