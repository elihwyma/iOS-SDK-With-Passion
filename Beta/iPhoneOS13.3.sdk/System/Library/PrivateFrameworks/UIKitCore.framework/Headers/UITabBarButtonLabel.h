/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel

{
    double _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    _Bool _isSelected;
    _Bool _isHighlighted;
    _Bool _hasSeenIdiom;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
    UITabBarButton *_tabBarButton;
}

@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (retain, nonatomic) UIColor *unselectedTintColor;
@property (weak, nonatomic) UITabBarButton *tabBarButton;

+ (double)_fontPointSizeForIdiom:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_fontForIdiom:(long long)arg1;
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;
- (void)updateTextColorsForState;
- (void)_legacyApperance_updateTextColorsForState;
- (void)_updateLabelsVibrancy;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (long long)_idiomForFontGivenIdiom:(long long)arg1;
- (_Bool)_shouldCeilSizeToViewScale;
- (id)initWithTabBarDisplayStyle:(long long)arg1;
- (void)resizeToFitWidth:(double)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end
