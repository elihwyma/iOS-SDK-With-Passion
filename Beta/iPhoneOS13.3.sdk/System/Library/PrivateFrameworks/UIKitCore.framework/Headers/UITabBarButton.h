/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSArray, NSMutableDictionary, NSString, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVibrancyEffect, UIView, UIVisualEffectView, _UIBadgeView, _UITabBarItemData;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl

{
    struct CGRect _hitRect;
    UITabBarSwappableImageView *_imageView;
    UIVisualEffectView *_vibrancyEffectView;
    UITabBarButtonLabel *_label;
    _UIBadgeView *_badge;
    UIImageView *_selectedIndicator;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _imageLandscapeInsets;
    UIImage *_customSelectedIndicatorImage;
    struct UIOffset _labelOffset;
    NSMutableDictionary *_buttonTintColorsForState;
    NSMutableDictionary *_contentTintColorsForState;
    UIColor *_defaultUnselectedLabelTintColor;
    UIColor *_badgeColor;
    NSMutableDictionary *_badgeTextAttributesForState;
    struct UIOffset _badgeOffset;
    UIView *_highContrastFocusIndicator;
    _Bool _selected;
    _Bool _showsHighlightedState;
    UIView *_focusView;
    Class _appearanceGuideClass;
    long long _layoutStyle;
    _UITabBarItemData *_itemAppearanceData;
    UIVibrancyEffect *_itemVibrantEffect;
    UITabBar *_tabBar;
    NSArray *_carplayConstraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;
@property (retain, nonatomic) NSArray *carplayConstraints;
@property (nonatomic, readonly) UIView *focusView;
@property (nonatomic, readonly, getter=isDefaultTVLayout) _Bool _defaultTVLayout;
@property (nonatomic) long long layoutStyle;
@property (retain, nonatomic) _UITabBarItemData *itemAppearanceData;
@property (retain, nonatomic) UIVibrancyEffect *itemVibrantEffect;
@property (weak, nonatomic, readonly) UITabBar *tabBar;
@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
@property (nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState;
@property (nonatomic, readonly) UIColor *_defaultUnselectedLabelTintColor;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;

+ (id)_defaultLabelColor;

- (void)setEnabled:(_Bool)arg1;
- (id)_info;
- (void)setImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_isEligibleForFocusInteraction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (struct UIOffset)_titlePositionAdjustment;
- (id)_tabBar;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_updateToMatchCurrentState;
- (void)_setBadgeColor:(id)arg1;
- (id)badgeTextAttributesForState:(long long)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets)arg6 landscapeInsets:(struct UIEdgeInsets)arg7 tabBar:(id)arg8;
- (void)_setBadgeOffset:(struct UIOffset)arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_setTabBarHitRect:(struct CGRect)arg1;
- (long long)_currentItemState;
- (id)defaultColorForState:(long long)arg1;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;
- (void)_setupCarplayConstraints;
- (void)_updateVibrancyEffectView;
- (id)_selectedIndicatorImage;
- (void)_updateSelectedIndicatorView;
- (_Bool)iconShouldUseVibrancyForState:(long long)arg1;
- (id)iconColorForState:(long long)arg1;
- (_Bool)isDefaultColor:(id)arg1 forState:(long long)arg2;
- (long long)defaultCompositingModeForState:(long long)arg1;
- (double)defaultAlphaForState:(long long)arg1;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;
- (void)_positionBadge;
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;
- (id)badgeBackgroundColorForState:(long long)arg1;
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;
- (void)_removeCarplayConstraints;
- (void)_updateSelectedIndicatorFrame;
- (struct CGSize)_horizontalLayout_sizeThatFits:(struct CGSize)arg1;
- (void)_appleTV_layoutSubviews;
- (void)_ios_layoutSubviews;
- (_Bool)labelShouldUseVibrancyForState:(long long)arg1;
- (struct CGRect)_responderSelectionRect;
- (id)_selectedIndicatorView;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;
- (struct CGRect)_tabBarHitRect;
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;
- (void)_sendFocusAction;
- (struct CGRect)_defaultFocusRegionFrame;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (long long)_focusTouchSensitivityStyle;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)set_info:(id)arg1;

@end
