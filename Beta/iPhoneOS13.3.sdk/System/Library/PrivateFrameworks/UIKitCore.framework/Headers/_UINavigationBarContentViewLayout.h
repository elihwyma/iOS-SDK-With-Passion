/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItemGroup, UILabel, UILayoutGuide, UIView, _UIBarButtonItemData, _UIButtonBar, _UIButtonBarButton, _UINavigationBarContentView, _UITAMICAdaptorView;

@protocol _UINavigationBarAugmentedTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentViewLayout : NSObject

{
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;
    NSLayoutConstraint *_leadingBarToTitleSpacer;
    NSLayoutConstraint *_titleToTrailingBarSpacer;
    NSArray *_layoutGuideConstraints;
    NSArray *_alignmentConstraints;
    NSArray *_heightConstraints;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;
    NSArray *_leadingBarConstraints;
    NSArray *_titleViewConstraints;
    NSArray *_augmentedTitleViewContraints;
    NSArray *_trailingBarConstraints;
    UIBarButtonItemGroup *_leadingBarGroup;
    UIBarButtonItemGroup *_trailingBarGroup;
    UIView *_leadingBarSnapshot;
    UIView *_trailingBarSnapshot;
    UIView *_titleViewSnapshot;
    UIView *_backButtonSnapshot;
    _Bool _hasFakedBackButton;
    _Bool _active;
    _Bool _keepsSnapshotsInHierarchy;
    _UINavigationBarContentView *_contentView;
    UILayoutGuide *_backButtonGuide;
    UILayoutGuide *_leadingBarGuide;
    UILayoutGuide *_titleViewGuide;
    UILayoutGuide *_trailingBarGuide;
    long long _alignment;
    long long _currentContentSize;
    double _overrideSize;
    double _resolvedSize;
    long long _resolvedAlignment;
    _UIButtonBarButton *_backButton;
    double _minimumBackButtonWidth;
    double _maximumBackButtonWidth;
    UILabel *_inlineTitleView;
    double _inlineTitleViewAlpha;
    UIView *_titleView;
    _UITAMICAdaptorView *_titleViewWrapperView;
    UIView<_UINavigationBarAugmentedTitleView> *_augmentedTitleView;
    double _largeTitleHeight;
    _UIButtonBar *_leadingBar;
    _UIButtonBar *_trailingBar;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    _UIBarButtonItemData *_backButtonAppearance;
    struct UIOffset _titlePositionAdjustment;
    CDStruct_ef18196a _largeTitleHeightRange;
    struct NSDirectionalEdgeInsets _layoutMargins;
}

@property (nonatomic, readonly) _UINavigationBarContentView *contentView;
@property (nonatomic, readonly) UILayoutGuide *backButtonGuide;
@property (nonatomic, readonly) UILayoutGuide *leadingBarGuide;
@property (nonatomic, readonly) UILayoutGuide *titleViewGuide;
@property (nonatomic, readonly) UILayoutGuide *trailingBarGuide;
@property (nonatomic) long long alignment;
@property (nonatomic) long long currentContentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets layoutMargins;
@property (nonatomic) double overrideSize;
@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) double resolvedSize;
@property (nonatomic, readonly) long long resolvedAlignment;
@property (retain, nonatomic) _UIButtonBarButton *backButton;
@property (nonatomic) double minimumBackButtonWidth;
@property (nonatomic) double maximumBackButtonWidth;
@property (nonatomic) _Bool hasFakedBackButton;
@property (retain, nonatomic) UILabel *inlineTitleView;
@property (nonatomic) double inlineTitleViewAlpha;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic, readonly) _UITAMICAdaptorView *titleViewWrapperView;
@property (nonatomic, readonly) UIView *effectiveTitleView;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView;
@property (nonatomic) double largeTitleHeight;
@property (nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange;
@property (nonatomic, readonly) double baselineOffsetFromTop;
@property (nonatomic, readonly) double currentHeight;
@property (retain, nonatomic) _UIButtonBar *leadingBar;
@property (retain, nonatomic) NSArray *leadingBarItems;
@property (retain, nonatomic) _UIButtonBar *trailingBar;
@property (retain, nonatomic) NSArray *trailingBarItems;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance;
@property (nonatomic) _Bool active;
@property (nonatomic, readonly) UIView *leadingBarSnapshot;
@property (nonatomic, readonly) UIView *trailingBarSnapshot;
@property (nonatomic, readonly) UIView *titleViewSnapshot;
@property (nonatomic, readonly) UIView *backButtonSnapshot;
@property (nonatomic) _Bool keepsSnapshotsInHierarchy;

- (id)description;
- (void)freeze;
- (id)initWithContentView:(id)arg1;
- (void)replaceBackButtonWithSnapshot;
- (void)replaceLeadingBarWithSnapshot;
- (void)replaceTrailingBarWithSnapshot;
- (void)replaceTitleViewWithSnapshot;
- (void)updateAugmentedTitleViewHeight;
- (void)removeAllSnapshots;
- (void)updateAlphas;
- (void)updateSpacingConstraints;
- (void)removeContent;
- (void)updateAugmentedTitleViewLayout;
- (void)updateAugmentedTitleViewBackButtonConstraints;
- (double)_contentHeight;
- (double)_inlineTitleBaselineOffset;
- (void)_disableLayoutFlushing:(_Bool)arg1;
- (void)_updateSubviewOrder;
- (void)_updateAlignmentConstraints;
- (void)_updateHeightConstraints;
- (void)_updateBackButtonConstraints;
- (void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
- (void)_updateLeadingBarConstraints;
- (void)_updateTitleViewConstraints;
- (void)_updateTrailingBarConstraints;
- (void)_updateAugmentedTitleViewConstraints;
- (void)_deactivateAllConstraints;
- (void)_activateAllConstraints;
- (void)setBackButtonHidden:(_Bool)arg1 titleLabelHidden:(_Bool)arg2 titleViewHidden:(_Bool)arg3 barsHidden:(_Bool)arg4;
- (void)_deactivateConstraintsIfNecessary:(id)arg1;
- (void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1;
- (void)_updateMarginConstraints;
- (void)_prepareTitleViewAndWrapIfNecessary;
- (void)_updateAugmentedTitleViewLayout;
- (void)unfreeze;
- (void)cleanupAfterLayoutTransitionCompleted;
- (void)setContentHidden:(_Bool)arg1;
- (void)updateTitleHeight;

@end
