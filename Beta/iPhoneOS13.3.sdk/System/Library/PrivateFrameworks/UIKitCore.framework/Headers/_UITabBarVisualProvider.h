/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITabBar;

@protocol _UIBarAppearanceChangeObserver;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProvider : NSObject

{
    UITabBar *_tabBar;
    NSString *_backdropGroupName;
}

@property (nonatomic, readonly) UITabBar *tabBar;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) _Bool useModernAppearance;
@property (nonatomic, readonly) id <_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) double minimumWidthForHorizontalLayout;

- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (double)_shim_shadowAlpha;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)changeAppearance;
- (void)prepare;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)changeLayout;
- (double)defaultAnimationDuration;
- (void)updateBackgroundGroupName;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (id)_shim_shadowView;
- (id)initWithTabBar:(id)arg1;
- (double)_shim_heightForCustomizingItems;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (id)defaultTintColor;
- (void)_shim_updateFocusHighlightVisibility;
- (void)tabBarSizeChanged:(struct CGSize)arg1;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_shim_layoutItemsOnly;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(_Bool)arg4;
- (id)createViewForTabBarItem:(id)arg1;
- (_Bool)wantsFocus;
- (_Bool)_shim_shadowHidden;
- (void)_shim_setShadowHidden:(_Bool)arg1;

@end
