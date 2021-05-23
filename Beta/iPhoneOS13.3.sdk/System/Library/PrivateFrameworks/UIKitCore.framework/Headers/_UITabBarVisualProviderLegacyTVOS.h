/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITabBarVisualProvider.h>

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider

{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
}

- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (double)_shim_shadowAlpha;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)changeAppearance;
- (void)prepare;
- (void)updateArchivedSubviews:(id)arg1;
- (void)changeLayout;
- (void)updateBackgroundGroupName;
- (void)_updateBackground;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)_shim_updateFocusHighlightVisibility;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_shim_layoutItemsOnly;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (id)createViewForTabBarItem:(id)arg1;
- (_Bool)_shim_shadowHidden;
- (void)_shim_setShadowHidden:(_Bool)arg1;
- (void)_layoutTabBarItems;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (struct CGRect)_layoutRegion;
- (void)_configureItems:(id)arg1;
- (void)_updateAccessoryView;
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;
- (id)_focusedItemHighlightView;
- (id)_parentViewForItems;
- (_Bool)_focusedItemHighlightViewIsVisible;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(_Bool)arg2;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (void)_setFocusedItemHightlightVisible:(_Bool)arg1;

@end
