/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIImage, _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView, _UIFloatingContentCornerRadiusAnimatingView, _UIFloatingContentTransformView, _UIFocusAnimationConfiguration;

@protocol _UIFloatingContentViewDelegate;

@interface _UIFloatingContentView : UIView

{
    id <_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
    _UIFloatingContentTransformView *_transformView;
    _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView *_containerView;
    _UIFloatingContentCornerRadiusAnimatingView *_highlightView;
    _UIFloatingContentCornerRadiusAnimatingView *_visualEffectContainerView;
    UIView *_shadowView;
    UIView *_contentView;
    UIView *_highContrastFocusIndicatorView;
    struct __CFDictionary *_backgroundColorsByState;
    NSMutableArray *_contentMotionEffects;
    double _shadowOpacityLight;
    double _shadowOpacityDark;
    struct CGPoint _focusDirection;
    struct CGPoint _contentRotation;
    struct CGPoint _contentTranslation;
    _Bool _customScale;
    _Bool _symmetricScale;
    _Bool _stretchableShadowImage;
    _Bool _useShadowImage;
    _Bool _shadowEnabled;
    _Bool _contentOpaque;
    _Bool _scalesBackwards;
    _Bool _roundContentWhenDeselected;
    _Bool __disableOutsetShadowPath;
    _Bool _showsHighContrastFocusIndicator;
    double _cornerRadius;
    double _visualEffectContainerViewScaleFactor;
    _UIFocusAnimationConfiguration *_focusAnimationConfiguration;
    double _shadowRadius;
    double _shadowVerticalOffset;
    double _unfocusedShadowRadius;
    double _unfocusedShadowOpacity;
    double _unfocusedShadowVerticalOffset;
    UIImage *_shadowImage;
    unsigned long long _controlState;
    long long _highlightStyle;
    NSString *_cornerCurve;
    CDUnknownBlockType _focusAnimationConfigurationHandler;
    struct CGPoint _focusScaleAnchorPoint;
    struct CGSize _shadowSize;
    struct CGSize _unfocusedShadowExpansion;
    struct CGSize _shadowExpansion;
    struct CGSize _asymmetricScaleFactor;
    struct CGSize _asymmetricFocusedSizeIncrease;
    struct CGRect _shadowContentsCenter;
}

@property (nonatomic) _Bool scalesBackwards;
@property (nonatomic) _Bool roundContentWhenDeselected;
@property (nonatomic) struct CGSize asymmetricScaleFactor;
@property (nonatomic) struct CGSize asymmetricFocusedSizeIncrease;
@property (nonatomic) _Bool _disableOutsetShadowPath;
@property (nonatomic) _Bool showsHighContrastFocusIndicator;
@property (nonatomic) NSString *cornerCurve;
@property (copy, nonatomic) CDUnknownBlockType focusAnimationConfigurationHandler;
@property (weak, nonatomic) id <_UIFloatingContentViewDelegate> floatingContentDelegate;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *visualEffectContainerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isContinuousCornerEnabled) _Bool continuousCornerEnabled;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct CGPoint focusScaleAnchorPoint;
@property (nonatomic) double visualEffectContainerViewScaleFactor;
@property (copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic) _Bool useShadowImage;
@property (nonatomic, getter=isShadowEnabled) _Bool shadowEnabled;
@property (nonatomic) struct CGSize shadowSize;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) double unfocusedShadowRadius;
@property (nonatomic) double unfocusedShadowOpacity;
@property (nonatomic) double unfocusedShadowVerticalOffset;
@property (nonatomic) struct CGSize unfocusedShadowExpansion;
@property (nonatomic) struct CGSize shadowExpansion;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) struct CGRect shadowContentsCenter;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) _Bool clipsContentToBounds;
@property (nonatomic) long long highlightStyle;
@property (nonatomic, getter=isContentOpaque) _Bool contentOpaque;

+ (id)_defaultFocusAnimationConfiguration;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)highlightView;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2;
- (void)_updateHighContrastFocusIndicatorView;
- (unsigned long long)_primaryStateForState:(unsigned long long)arg1;
- (_Bool)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1;
- (void)_updateTransformForPrimaryState:(unsigned long long)arg1;
- (void)addContentMotionEffect:(id)arg1;
- (void)_updateCornerRadiusLayers;
- (_Bool)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1;
- (void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1;
- (void)_updateShadowLayer;
- (void)_setShadowImageIfNeeded;
- (void)_updateScaleFactor;
- (void)_layoutShadow;
- (void)_layoutHighContrastFocusIndicator;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;
- (void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)_updateContainerLayerQualityForPrimaryState:(unsigned long long)arg1;
- (void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1;
- (void)_updateHighContrastFocusIndicatorForPrimaryState:(unsigned long long)arg1;
- (void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1;
- (void)_uninstallContentMotionEffects;
- (void)_installContentMotionEffects;
- (double)shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (double)_effectiveShadowOpacity;
- (void)setShadowImage:(id)arg1 stretchable:(_Bool)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)setContentMotionRotation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)removeContentMotionEffect:(id)arg1;
- (id)transformView;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (double)_effectiveShadowRadius;
- (double)_currentShadowOpacity;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;

@end
