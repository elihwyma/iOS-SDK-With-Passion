/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationItemView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView : _UINavigationItemView <Swift>

{
    long long _style;
    _Bool _pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    _Bool _customBackgroundImageChangedToOrFromNil;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    _Bool _wantsBlendModeForAccessibilityBackgrounds;
    unsigned long long _abbreviatedTitleIndex;
    UIColor *_accessibilityBackgroundTintColor;
}

@property (nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex;
@property (nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds;
@property (retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)title;
- (void)setStyle:(long long)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setPressed:(_Bool)arg1;
- (_Bool)pressed;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (id)backgroundImageView;
- (_Bool)_wantsAccessibilityButtonShapes;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_appearanceStorage;
- (Class)_appearanceGuideClass;
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)initWithNavigationItem:(id)arg1;
- (_Bool)_suppressesBackIndicatorView;
- (_Bool)customBackgroundImageChangedToOrFromNil;
- (struct CGSize)imageSize;
- (id)_defaultFont;
- (_Bool)hasCustomBackgroundImage;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (double)_titleYAdjustmentCustomization;
- (void)_resetRenderingModesForAccessibilityBackgrounds;
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_updateBackSelectGestureRecognizer;
- (void)_installBackSelectGestureRecognizer;
- (void)_uninstallBackSelectGestureRecognizer;
- (void)_backSelectGestureChanged:(id)arg1;
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;

@end
