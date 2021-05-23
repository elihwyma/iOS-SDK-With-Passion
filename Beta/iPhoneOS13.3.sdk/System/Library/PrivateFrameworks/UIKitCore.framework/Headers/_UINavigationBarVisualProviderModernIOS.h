/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarVisualProvider.h>

@class NSString, UILabel, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarLargeTitleView, _UINavigationBarModernPromptView, _UINavigationBarTransitionContext, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider

{
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    UIView *_canvasView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    struct CGSize _previousBarSize;
    double _backgroundAlpha;
    double _titleAlpha;
    double _shadowAlpha;
    _Bool _hasIdiom;
    _Bool _runningPaletteBasedSearchPresentation;
    _Bool _useInlineBackgroundHeightWhenLarge;
    _Bool _backgroundTransparentWhenNotCollapsed;
    _Bool _providesExtraSpaceForExcessiveLineHeights;
    _Bool _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    _Bool _useModernAppearanceAPI;
    _Bool _forceScrollEdgeAppearance;
    long long _appearanceAPIVersion;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)teardown;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (_Bool)useInlineBackgroundHeightWhenLarge;
- (void)setUseInlineBackgroundHeightWhenLarge:(_Bool)arg1;
- (double)backgroundAlpha;
- (void)setBackgroundAlpha:(double)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (double)_shim_shadowAlpha;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)titleAlpha;
- (void)setTitleAlpha:(double)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (void)changeAppearance;
- (id)appearanceObserver;
- (long long)appearanceAPIVersion;
- (void)setAppearanceAPIVersion:(long long)arg1;
- (void)prepare;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (struct CGSize)sizeForRestoringFromCancelledTransition;
- (void)prepareForPush;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeLayout;
- (long long)currentContentSize;
- (CDStruct_39925896)layoutHeightsFittingWidth:(double)arg1;
- (id)restingHeights;
- (struct NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (long long)statusBarStyle;
- (_Bool)supportsRefreshControlHosting;
- (void)setRefreshControlHost:(id)arg1;
- (id)refreshControlHost;
- (_Bool)forceScrollEdgeAppearance;
- (void)setForceScrollEdgeAppearance:(_Bool)arg1;
- (_Bool)topItemHasVariableHeight;
- (_Bool)wantsLargeTitleDisplayed;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)recordBarSize:(struct CGSize)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (_Bool)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (double)_effectiveBackIndicatorLeftMargin;
- (_Bool)navigationItemIsTopItem:(id)arg1;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigationItemIsBackItem:(id)arg1;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;
- (void)navigationItemUpdatedPromptContent:(id)arg1;
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;
- (void)navigationItemUpdatedCanvasView:(id)arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)_updateBackground;
- (void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1;
- (void)_enforceLayoutOrdering;
- (void)_updateContentPriorities;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (_Bool)_isInInteractiveScroll;
- (_Bool)wantsExtendedContentView;
- (_Bool)_stackWantsExtendedContentViewForItem:(id)arg1;
- (_Bool)_stackWantsLargeTitleDisplayedForItem:(id)arg1;
- (_Bool)useManualScrollEdgeAppearanceForItem:(id)arg1;
- (_Bool)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg1;
- (_Bool)_stackWantsBottomPaletteDisplayedForItem:(id)arg1;
- (_Bool)_stackWantsLargeTitleDisplayedForItem:(id)arg1 hideLargeTitleForActiveSearch:(_Bool)arg2;
- (_Bool)allowLargeTitleView;
- (_Bool)_isInnerNavigationBarOfNestedNavigationController;
- (void)_updateAugmentedTitleDataSources;
- (void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg1;
- (id)_defaultWeeTitleAttributes;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3;
- (double)_contentBackgroundExtension;
- (id)_backgroundLayoutOfClass:(Class)arg1 fromLayout:(id)arg2;
- (void)_updateModernLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(_Bool)arg3;
- (void)_updateLegacyLayout:(id)arg1 forNavigationItem:(id)arg2;
- (id)_updateBackgroundLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(_Bool)arg3;
- (void)_ensureLayoutsConfiguredForEntry:(id)arg1;
- (void)_configureMarginsOnContentViewsAndPalette:(id)arg1 withContentMargin:(double)arg2;
- (void)_updatePromptViewAndActuallyHide:(_Bool)arg1;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2;
- (void)_updateCanvasView;
- (void)_layoutInBounds:(struct CGRect)arg1 wantsExtendedContentView:(_Bool)arg2 wantsLargeTitle:(_Bool)arg3;
- (void)_updateTitleViewWithLargeTitle:(_Bool)arg1;
- (id)emptyLayout;
- (void)_presentOrDismissSearch:(int)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setupTransitionContextForTransition:(int)arg1;
- (void)_endTransitionCompleted:(_Bool)arg1;
- (void)_performAnimationWithTransitionCompletion:(CDUnknownBlockType)arg1 transition:(int)arg2;
- (void)_updateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg1;
- (void)_prepareLayouts;
- (void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
- (void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
- (void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg1;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1;
- (void)_setupTopNavigationItemAnimated:(_Bool)arg1;

@end
