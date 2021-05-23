/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, _TVAnimatedLabel;

@interface _TVStackingPosterView : UIView

{
    _Bool _requiresReconfiguration;
    NSLayoutConstraint *_topAnchorConstraint;
    NSLayoutConstraint *_bottomAnchorConstraint;
    NSLayoutConstraint *_topImageConstraint;
    NSLayoutConstraint *_bottomImageConstraint;
    double _topAnchorConstant;
    double _bottomAnchorConstant;
    double _topImageConstant;
    double _bottomImageConstant;
    double _labelWidthExpansionAmount;
    NSArray *_labelWidthConstraints;
    _Bool _configuresForCollectionViewCell;
    _Bool _highlighted;
    NSArray *_components;
    UIView *_overlayView;
    NSArray *_filteredComponents;
    UIView *_mainImageComponent;
    _TVAnimatedLabel *_animatedLabel;
    NSArray *_marqueeLabels;
    NSArray *_visibleLabelWidths;
    struct CGSize _maxBoundsSize;
    struct TVCellMetrics _cellMetrics;
}

@property (nonatomic) struct TVCellMetrics cellMetrics;
@property (copy, nonatomic) NSArray *filteredComponents;
@property (retain, nonatomic) UIView *mainImageComponent;
@property (retain, nonatomic) _TVAnimatedLabel *animatedLabel;
@property (copy, nonatomic) NSArray *marqueeLabels;
@property (copy, nonatomic) NSArray *visibleLabelWidths;
@property (nonatomic) struct CGSize maxBoundsSize;
@property (copy, nonatomic) NSArray *components;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic) _Bool configuresForCollectionViewCell;
@property (nonatomic) struct CGPoint focusDirection;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_configureSubviews;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;
- (void)setComponents:(id)arg1 mainImageComponent:(id)arg2;
- (void)_resetSubviews;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;
- (void)_updateFocusSizeIncrease;
- (struct TVCellMetrics)_cellMetricsForMaxSize:(struct CGSize)arg1;
- (void)_updateComponentConstraints;
- (void)_updateSubviewHeirarchyWithComponents:(id)arg1;
- (double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3;
- (void)setNeedsUpdateComponentLayout;

@end
