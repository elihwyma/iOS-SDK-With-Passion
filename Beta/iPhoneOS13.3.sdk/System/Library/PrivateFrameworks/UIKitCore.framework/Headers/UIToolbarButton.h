/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class UIColor, UILabel, UIView;

@interface UIToolbarButton : UIControl

{
    struct CGRect _hitRect;
    UIView *_info;
    UILabel *_label;
    long long _barStyle;
    long long _style;
    struct UIEdgeInsets _glowAdjust;
    _Bool _onState;
    _Bool _barHeight;
    _Bool _bezel;
    double _minimumWidth;
    double _maximumWidth;
    double _labelHeight;
    struct UIEdgeInsets _infoInsets;
    UIColor *_toolbarTintColor;
    id _appearanceStorage;
    _Bool _isInTopBar;
    Class _appearanceGuideClass;
    struct UIEdgeInsets __additionalSelectionInsets;
}

@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets;

+ (id)_defaultLabelColor;
+ (id)defaultButtonFont;
+ (id)_defaultLabelFont;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)_info;
- (void)setImage:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)_buttonBarHitRect;
- (void)_setTouchHasHighlighted:(_Bool)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_setButtonBarHitRect:(struct CGRect)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityShouldActivateOnHUDLift;
- (_Bool)_wantsAccessibilityButtonShapes;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(_Bool)arg1;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
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
- (void)_setWantsLetterpressContent;
- (void)setBarStyle:(long long)arg1;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_adjustPushButtonForMiniBar:(_Bool)arg1 isChangingBarHeight:(_Bool)arg2;
- (_Bool)_infoIsButton;
- (void)_adjustToolbarButtonInfo;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setLastHighlightSuccessful:(_Bool)arg1;
- (_Bool)_isBordered;
- (_Bool)_isBorderedOtherThanAccessibility;
- (_Bool)_shouldApplyPadding;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(_Bool)arg1;
- (void)_updateInfoTextColorsForState:(unsigned long long)arg1;
- (void)_setInTopBar:(_Bool)arg1;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(struct UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(_Bool)arg11 imageInsets:(struct UIEdgeInsets)arg12 glowInsets:(struct UIEdgeInsets)arg13 landscape:(_Bool)arg14;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (void)_setPressed:(_Bool)arg1;
- (void)setUseSelectedImage:(_Bool)arg1;
- (void)_setInfoWidth:(float)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(_Bool)arg2;
- (void)_setInfoFlexibleWidth:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (_Bool)_canGetPadding;
- (double)_paddingForLeft:(_Bool)arg1;
- (void)_setBarHeight:(float)arg1;
- (_Bool)_useBarHeight;
- (void)setToolbarTintColor:(id)arg1;

@end
