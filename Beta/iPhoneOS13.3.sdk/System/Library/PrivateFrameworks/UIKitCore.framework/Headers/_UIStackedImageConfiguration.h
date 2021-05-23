/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <Swift>

{
    _Bool _overlayFixedFrame;
    _Bool _adjustMotionForSize;
    _Bool _flatImageContainsCornerRadius;
    _Bool _useSeparateUnfocusedShadowImage;
    _Bool _allowsNonOpaqueShadow;
    _Bool _boostBrightness;
    _Bool _hueShift;
    _Bool _disableMask;
    _Bool _focusCursorEnabled;
    _Bool _fullBleedCenteredGrowth;
    unsigned long long _maximumParallaxImages;
    double _maximumParallaxDepth;
    double _overlayDepth;
    double _zDepth;
    double _rotationAmount;
    double _scaleSizeIncrease;
    double _pressedScaleAdjustment;
    double _cornerRadius;
    double _continuousCornerRadiusEnabled;
    double _specularHighlightHorizontalPositionSensitivity;
    double _specularHighlightVerticalPosition;
    double _specularHighlightVerticalPositionSensitivity;
    double _specularOpacity;
    double _defaultFocusedShadowOpacity;
    double _defaultHighlightedShadowOpacity;
    double _defaultUnfocusedShadowOpacity;
    double _fullBleedFocusedShadowOpacity;
    double _fullBleedUnfocusedShadowOpacity;
    double _focusCursorShadowOpacityAdjustment;
    double _defaultFocusedShadowRadius;
    double _defaultHighlightedShadowRadius;
    double _defaultUnfocusedShadowRadius;
    double _fullBleedFocusedShadowRadius;
    double _fullBleedUnfocusedShadowRadius;
    double _defaultFocusedShadowVerticalOffset;
    double _defaultHighlightedShadowVerticalOffset;
    double _defaultUnfocusedShadowVerticalOffset;
    double _defaultSelectedShadowVerticalOffset;
    UIImage *_placeholderImage;
    double _focusCursorBorderWidth;
    double _radiosityOffset;
    double _radiosityStrength;
    double _shadowSelectionDuration;
    double _shadowUnselectionDuration;
    double _repositionUnselectionDuration;
    double _layerSelectionDuration;
    double _layerUnselectionDuration;
    double _minimumFocusDuration;
    double _pressedDuration;
    double _unpressedDuration;
    double _fullBleedOffset;
    struct CGPoint _translationOffset;
}

@property (nonatomic) unsigned long long maximumParallaxImages;
@property (nonatomic) double maximumParallaxDepth;
@property (nonatomic) double overlayDepth;
@property (nonatomic) _Bool overlayFixedFrame;
@property (nonatomic) double zDepth;
@property (nonatomic) _Bool adjustMotionForSize;
@property (nonatomic) double rotationAmount;
@property (nonatomic) double scaleSizeIncrease;
@property (nonatomic) double pressedScaleAdjustment;
@property (nonatomic) struct CGPoint translationOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isContinuousCornerRadiusEnabled) double continuousCornerRadiusEnabled;
@property (nonatomic) _Bool flatImageContainsCornerRadius;
@property (nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property (nonatomic) double specularHighlightVerticalPosition;
@property (nonatomic) double specularHighlightVerticalPositionSensitivity;
@property (nonatomic) double specularOpacity;
@property (nonatomic) double defaultFocusedShadowOpacity;
@property (nonatomic) double defaultHighlightedShadowOpacity;
@property (nonatomic) double defaultUnfocusedShadowOpacity;
@property (nonatomic) double fullBleedFocusedShadowOpacity;
@property (nonatomic) double fullBleedUnfocusedShadowOpacity;
@property (nonatomic) double focusCursorShadowOpacityAdjustment;
@property (nonatomic) double defaultFocusedShadowRadius;
@property (nonatomic) double defaultHighlightedShadowRadius;
@property (nonatomic) double defaultUnfocusedShadowRadius;
@property (nonatomic) double fullBleedFocusedShadowRadius;
@property (nonatomic) double fullBleedUnfocusedShadowRadius;
@property (nonatomic) double defaultFocusedShadowVerticalOffset;
@property (nonatomic) double defaultHighlightedShadowVerticalOffset;
@property (nonatomic) double defaultUnfocusedShadowVerticalOffset;
@property (nonatomic) double defaultSelectedShadowVerticalOffset;
@property (nonatomic) _Bool useSeparateUnfocusedShadowImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) _Bool allowsNonOpaqueShadow;
@property (nonatomic) _Bool boostBrightness;
@property (nonatomic) _Bool hueShift;
@property (nonatomic) _Bool disableMask;
@property (nonatomic) _Bool focusCursorEnabled;
@property (nonatomic) double focusCursorBorderWidth;
@property (nonatomic) double radiosityOffset;
@property (nonatomic) double radiosityStrength;
@property (copy, nonatomic, readonly) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic) double shadowSelectionDuration;
@property (nonatomic) double shadowUnselectionDuration;
@property (nonatomic) double repositionUnselectionDuration;
@property (nonatomic) double layerSelectionDuration;
@property (nonatomic) double layerUnselectionDuration;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) double pressedDuration;
@property (nonatomic) double unpressedDuration;
@property (nonatomic) _Bool fullBleedCenteredGrowth;
@property (nonatomic) double fullBleedOffset;

+ (id)newStandardConfiguration;
+ (id)newAppIconConfiguration;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_highContrastFocusIndicatorChanged:(id)arg1;

@end
