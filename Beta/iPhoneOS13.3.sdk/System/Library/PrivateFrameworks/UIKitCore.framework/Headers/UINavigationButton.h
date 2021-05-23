/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem, UIView, _UIBarButtonItemAppearanceStorage;

@interface UINavigationButton : UIButton

{
    NSSet *_possibleTitles;
    int _style;
    long long _barStyle;
    UIColor *_navigationBarTintColor;
    struct CGSize _boundsAdjustment;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    NSSet *_possibleSystemItems;
    unsigned int _size:2;
    unsigned int _wantsLetterpressContent:1;
    UIBarButtonItem *_originatingButtonItem;
    UINavigationItem *_originatingNavigationItem;
    _Bool _createdByBarButtonItem;
    _Bool _isFontScaleInvalid;
    _Bool _wantsBlendModeForAccessibilityBackgrounds;
    _Bool __barItemHidden;
    long long _buttonItemStyle;
    NSDictionary *_stylesForSizingTitles;
    double _fontScaleAdjustment;
    UIColor *_accessibilityBackgroundTintColor;
    Class _appearanceGuideClass;
    UIView *__enclosingBar;
    double _minimumWidth;
    double _maximumWidth;
    struct UIEdgeInsets __additionalSelectionInsets;
}

@property (weak, nonatomic, setter=_setEnclosingBar:) UIView *_enclosingBar;
@property (nonatomic) double minimumWidth;
@property (nonatomic) double maximumWidth;
@property (weak, nonatomic) UINavigationItem *originatingNavigationItem;
@property (weak, nonatomic) UIBarButtonItem *originatingButtonItem;
@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (nonatomic, setter=_setButtonItemStyle:) long long _buttonItemStyle;
@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles;
@property (nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment;
@property (nonatomic, setter=_setFontScaleInvalid:) _Bool _isFontScaleInvalid;
@property (nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds;
@property (nonatomic, setter=_setBarItemHidden:) _Bool _barItemHidden;
@property (retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets;
@property (nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long barStyle;
@property (nonatomic) int style;
@property (nonatomic) int controlSize;
@property (retain, nonatomic) UIColor *tintColor;

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(_Bool)arg3 withAccessibilityBackground:(_Bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(_Bool)arg5 accessibilityBackgroundTintColor:(id)arg6;
+ (id)defaultFont;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithImage:(id)arg1;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithTitle:(id)arg1;
- (void)_updateStyle;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (struct CGRect)_selectedIndicatorBounds;
- (_Bool)_isCarPlaySystemTypeButton;
- (long long)buttonType;
- (_Bool)_wantsAccessibilityButtonShapes;
- (id)_defaultTitleColorForState:(unsigned long long)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (id)_externalTitleColorForState:(unsigned long long)arg1;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(_Bool)arg2;
- (void)_updateTitleForLetterpress;
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_activeVisualStyle;
- (long long)_barButtonItemStyle;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
- (struct UIEdgeInsets)_buttonTitleEdgeInsets;
- (void)_updateContentInsets;
- (id)_adjustedDefaultTitleFont;
- (void)_updateTitleColorsForState:(unsigned long long)arg1;
- (void)_setTitleFrozen:(_Bool)arg1;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(_Bool)arg8 forButtonItemStyle:(long long)arg9;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_adjustBounds;
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
- (long long)_activeBarMetrics;
- (id)_visualStyleForMetrics:(long long)arg1;
- (void)_setWantsLetterpressContent;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(_Bool)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (_Bool)_isModernButton;
- (_Bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setNavigationBarTintColor:(id)arg1;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_setBoundsAdjustment:(struct CGSize)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (_Bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out double *)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize)arg3;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_appearanceStorage;
- (void)_setGroupName:(id)arg1 forNavigationBar:(id)arg2;
- (_Bool)_isExternalRoundedRectButton;
- (id)_externalUnfocusedBorderColor;
- (void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(_Bool)arg2;

@end
