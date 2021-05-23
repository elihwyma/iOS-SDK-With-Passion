/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUControlHostView, HUQuickControlAuxiliaryHostView, HUQuickControlButtonRowView, HUQuickControlSummaryView, NSArray, NSLayoutConstraint, UIButton, UILayoutGuide;

@protocol HUQuickControlContainerViewDelegate;

@interface HUQuickControlContainerView : UIView

{
    _Bool _shouldShowActiveControl;
    _Bool _shouldShowDetailsButton;
    _Bool _controlViewSupportsTransformTransition;
    double _controlTransitionProgress;
    double _chromeTransitionProgress;
    double _initialSourceViewScale;
    unsigned long long _edgesForExtendedLayout;
    UIView *_activeControlView;
    UILayoutGuide *_controlViewPreferredFrameLayoutGuide;
    UILayoutGuide *_standardViewportFromParentGuide;
    HUQuickControlSummaryView *_summaryView;
    id <HUQuickControlContainerViewDelegate> _delegate;
    HUControlHostView *_controlHostView;
    UILayoutGuide *_controlViewLayoutGuide;
    UILayoutGuide *_cardViewLayoutGuide;
    NSArray *_contentConstraints;
    NSArray *_maxHeightConstraints;
    NSLayoutConstraint *_compactControlBottomConstraint;
    HUQuickControlAuxiliaryHostView *_auxiliaryHostView;
    HUQuickControlButtonRowView *_buttonRowView;
    UIButton *_detailsButton;
    UILayoutGuide *_contentToAuxiliarySpacingLayoutGuide;
    UILayoutGuide *_topToSummarySpacingLayoutGuide;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) HUControlHostView *controlHostView;
@property (retain, nonatomic) UILayoutGuide *controlViewLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *controlViewPreferredFrameLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *cardViewLayoutGuide;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (retain, nonatomic) NSArray *maxHeightConstraints;
@property (retain, nonatomic) NSLayoutConstraint *compactControlBottomConstraint;
@property (retain, nonatomic) HUQuickControlAuxiliaryHostView *auxiliaryHostView;
@property (retain, nonatomic) HUQuickControlButtonRowView *buttonRowView;
@property (retain, nonatomic) UIButton *detailsButton;
@property (retain, nonatomic) HUQuickControlSummaryView *summaryView;
@property (retain, nonatomic) UILayoutGuide *contentToAuxiliarySpacingLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *topToSummarySpacingLayoutGuide;
@property (nonatomic) double controlTransitionProgress;
@property (nonatomic) double chromeTransitionProgress;
@property (nonatomic) double initialSourceViewScale;
@property (nonatomic) _Bool shouldShowActiveControl;
@property (nonatomic) _Bool shouldShowDetailsButton;
@property (nonatomic) unsigned long long edgesForExtendedLayout;
@property (retain, nonatomic) UIView *activeControlView;
@property (retain, nonatomic) UILayoutGuide *standardViewportFromParentGuide;
@property (nonatomic) _Bool controlViewSupportsTransformTransition;
@property (nonatomic, readonly) struct CGRect presentedControlFrame;
@property (nonatomic, readonly) struct CGRect sourceRect;
@property (weak, nonatomic, readonly) id <HUQuickControlContainerViewDelegate> delegate;

+ (_Bool)requiresConstraintBasedLayout;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_updateLayoutMargins;
- (long long)_sizeSubclass;
- (void)_detailsButtonTapped:(id)arg1;
- (void)_updateContentAlignment;
- (void)_updateDetailsButtonVisibility;
- (void)_updateCompactControlBottomConstraint;
- (_Bool)_useCompactHeightLayout;
- (struct CGSize)_presentedControlHostSize;
- (struct CGAffineTransform)_controlHostTransformForPresentationProgress:(double)arg1;
- (struct CGPoint)_controlHostCenterForPresentationProgress:(double)arg1;
- (void)_configureRegularHeightConstraints:(id)arg1;
- (void)_configureControlViewLayoutGuideConstraints:(id)arg1;
- (void)_configureCardViewLayoutGuideConstraints:(id)arg1;
- (_Bool)_shouldShowControlView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)showAuxiliaryView:(id)arg1;
- (void)hideAuxiliaryView;
- (struct CGAffineTransform)_controlHostTransform;
- (struct CGPoint)_controlHostCenter;
- (double)_summaryFirstBaselineToControlTopSpacing;
- (struct CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1;

@end
