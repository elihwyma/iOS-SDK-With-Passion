/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationBar, UINavigationItem, _UINavigationBarItemStack, _UINavigationControllerRefreshControlHost;

@protocol _UIBarAppearanceChangeObserver;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProvider : NSObject

{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    NSString *_backdropGroupName;
    UINavigationItem *_itemForMeasuring;
}

@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (retain, nonatomic) _UINavigationBarItemStack *stack;
@property (nonatomic, readonly) long long currentContentSize;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic, readonly) _Bool wantsLargeTitleDisplayed;
@property (nonatomic) _Bool useInlineBackgroundHeightWhenLarge;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double titleAlpha;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long appearanceAPIVersion;
@property (nonatomic, readonly) id <_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) _Bool forceScrollEdgeAppearance;

- (id)description;
- (void)teardown;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusedView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)safeAreaInsetsDidChange;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (double)_shim_shadowAlpha;
- (void)_shim_setShadowAlpha:(double)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (double)_shim_backgroundHeight;
- (void)changeAppearance;
- (id)_shim_userContentGuide;
- (void)_shim_setUseContentView:(_Bool)arg1;
- (void)prepare;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)updateTopNavigationItemTitleView;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (id)_shim_promptText;
- (id)initWithNavigationBar:(id)arg1;
- (id)_shim_contentView;
- (void)setupTopNavigationItem;
- (void)updateArchivedSubviews:(id)arg1;
- (struct CGSize)sizeForRestoringFromCancelledTransition;
- (void)prepareForPush;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeLayout;
- (_Bool)shouldUseHeightRangeFittingWidth;
- (CDStruct_39925896)layoutHeightsFittingWidth:(double)arg1;
- (id)restingHeights;
- (struct NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (_Bool)_shim_throwConstraintExceptions;
- (long long)statusBarStyle;
- (_Bool)supportsRefreshControlHosting;
- (_Bool)topItemHasVariableHeight;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (_Bool)_shim_34415965;
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)recordBarSize:(struct CGSize)arg1;
- (void)barSizeChanged;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (void)_shim_30244716;
- (long long)_shim_backdropStyle;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (_Bool)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (void)stackDidChangeFrom:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)appendToDescription:(id)arg1;
- (void)presentSearchWithTransitionCoordinator:(id)arg1;
- (id)_shim_layoutView;
- (id)_shim_backIndicatorView;

@end
