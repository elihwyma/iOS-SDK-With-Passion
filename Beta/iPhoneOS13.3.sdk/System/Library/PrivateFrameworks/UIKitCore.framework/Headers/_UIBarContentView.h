/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarContentView : UIView

{
    _Bool _barWantsLetterpress;
    _Bool _barIsBlack;
    _Bool _centerTextButtons;
    Class _appearanceGuideClass;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    UIImage *_backIndicatorMaskImage;
}

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (nonatomic, readonly) long long barType;
@property (nonatomic, readonly) _Bool compactMetrics;
@property (nonatomic) _Bool barWantsLetterpress;
@property (nonatomic) _Bool barIsBlack;
@property (nonatomic) _Bool centerTextButtons;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorMaskImage;
@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isRTL;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_appearanceChanged;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;

@end
