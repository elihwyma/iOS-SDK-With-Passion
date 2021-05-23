/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarContentView.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UIColor, UIImage, UIView, _UIBarButtonItemData, _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext;

@protocol _UINavigationBarContentViewDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentView : _UIBarContentView

{
    _UINavigationBarTransitionContext *_transitionContext;
    _Bool _deferResolvedSizeChange;
    _Bool _outstandingDeferredResolvedSizeChange;
    UIImage *_backIndicatorImage;
    _Bool _needsBackButtonUpdate;
    double _backButtonMargin;
    double _backButtonMaximumWidth;
    _Bool _hitTestingExtensionsAreValid;
    _Bool _isHidingBackButton;
    _Bool _isShowingBackButton;
    _Bool _isHidingLeadingBar;
    NSMutableArray *_currentAnimations;
    NSMutableArray *_currentCompletions;
    _Bool _backButtonHidden;
    _Bool _leadingItemsSupplementBackItem;
    NSDictionary *_effectiveTitleAttributes;
    id <_UINavigationBarContentViewDelegate> _delegate;
    UIBarButtonItem *_backButtonItem;
    NSArray *_leadingBarButtonItems;
    NSArray *_trailingBarButtonItems;
    NSString *_title;
    UIView *_titleView;
    double _inlineTitleViewAlpha;
    NSDictionary *_titleAttributes;
    UIColor *_textColor;
    double _overrideSize;
    long long _requestedContentSize;
    long long _barMetrics;
    _UINavigationBarContentViewLayout *_layout;
    struct UIOffset _titlePositionAdjustment;
}

@property (nonatomic, readonly) NSDictionary *effectiveTitleAttributes;
@property (weak, nonatomic) id <_UINavigationBarContentViewDelegate> delegate;
@property (retain, nonatomic) UIBarButtonItem *backButtonItem;
@property (nonatomic) _Bool backButtonHidden;
@property (nonatomic) double backButtonMargin;
@property (copy, nonatomic) NSArray *leadingBarButtonItems;
@property (nonatomic) _Bool leadingItemsSupplementBackItem;
@property (copy, nonatomic) NSArray *trailingBarButtonItems;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) double inlineTitleViewAlpha;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) double overrideSize;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance;
@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic, readonly) UIView *accessibilityBackButtonView;
@property (nonatomic) long long requestedContentSize;
@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic, readonly) double currentHeight;
@property (nonatomic) long long barMetrics;
@property (nonatomic, setter=_setBackButtonMaximumWidth:) double backButtonMaximumWidth;
@property (nonatomic, readonly) _UINavigationBarContentViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isRTL;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_appearanceChanged;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;
- (id)backIndicatorImage;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (_Bool)compactMetrics;
- (long long)barType;
- (double)defaultEdgeSpacing;
- (void)backButtonTitleDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackIndicatorImage:(id)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)titleViewChangedLayout:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedDisplayItemAlpha:(id)arg1;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (double)titleViewLargeTitleHeight:(id)arg1;
- (CDStruct_c3b9c2ee)titleViewLargeTitleHeightRange:(id)arg1;
- (double)titleViewContentBaselineOffsetFromTop:(id)arg1;
- (double)titleViewContentBaseHeight:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (long long)_currentContentSize;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (id)_newLayout;
- (void)_addCoordinatedAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__backButtonAction:(id)arg1;
- (void)setNeedsBackButtonUpdate;
- (void)_clearAllAnimations;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (double)_intrinsicHeight;
- (void)_setupTitleViewAnimated:(_Bool)arg1;
- (void)_setupBackButtonAnimated:(_Bool)arg1;
- (void)_setupLeadingButtonBarAnimated:(_Bool)arg1;
- (void)_setupTrailingButtonBarAnimated:(_Bool)arg1;
- (void)_runAllScheduledAnimations:(_Bool)arg1;
- (void)updateContentAnimated:(_Bool)arg1;
- (void)updateContent;
- (id)_layoutForAugmentedTitleView:(id)arg1;
- (struct CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (void)resolvedSizeDidChange;
- (void)_setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)clearTransitionContext;
- (void)adoptLayout:(id)arg1;
- (void)adoptNewLayout;
- (void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg1 from:(id)arg2;

@end
