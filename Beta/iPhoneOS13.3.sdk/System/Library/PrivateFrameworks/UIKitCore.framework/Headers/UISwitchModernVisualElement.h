/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UISwitchVisualElement.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwitchMVEGestureTrackingSession, UIView;

__attribute__((visibility("hidden")))
@interface UISwitchModernVisualElement : UISwitchVisualElement <Swift>

{
    UIView *_switchWellView;
    UIView *_leftSwitchWellView;
    UIView *_switchWellContainerView;
    UIView *_leftSwitchWellContainerView;
    UIImageView *_switchWellImageView;
    UIView *_switchWellImageViewContainer;
    UIImageView *_switchWellOffImageView;
    UIImageView *_switchWellOnImageView;
    UIImageView *_knobView;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    _Bool _on;
    _Bool _pressed;
    _Bool _isAlwaysAccessible;
    _Bool _showsOnOffLabel;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    UISwitchMVEGestureTrackingSession *_gestureTrackingSession;
    UILongPressGestureRecognizer *_longPress;
    UIPanGestureRecognizer *_pan;
}

@property (retain, nonatomic) UIColor *thumbTintColor;
@property (retain, nonatomic) UIImage *onImage;
@property (retain, nonatomic) UIImage *offImage;
@property (nonatomic) _Bool on;
@property (nonatomic) _Bool pressed;
@property (nonatomic) _Bool showsOnOffLabel;
@property (retain, nonatomic) UISwitchMVEGestureTrackingSession *gestureTrackingSession;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)preferredContentSize;
+ (id)_modernGradientImageWithOnColor:(id)arg1 traitCollection:(id)arg2;
+ (id)_modernThumbImageWithColor:(id)arg1 mask:(unsigned long long)arg2 traitCollection:(id)arg3;

- (id)_settings;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setTintColor:(id)arg1;
- (void)tintColorDidChange;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_orderSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setOnTintColor:(id)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)displayedOn;
- (void)interactiveChangeToDisplayedOn:(_Bool)arg1;
- (void)sendStateChangeActions;
- (void)_updateDisplayAnimated:(_Bool)arg1;
- (void)_invalidateControl;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePan:(id)arg1;
- (_Bool)_feedbackEnabled;
- (void)performStateChangeFeedback;
- (void)_handleLongPressWithGestureLocationInBounds:(struct CGPoint)arg1 gestureState:(long long)arg2;
- (void)_handlePanWithGestureLocationInBounds:(struct CGPoint)arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(CDUnknownBlockType)arg4;
- (void)_invalidateWell;
- (void)_invalidateKnob;
- (void)_invalidateOnOffImages;
- (id)_effectiveThumbImage;
- (id)_effectiveOnTintColor;
- (id)_effectiveGradientImage;
- (id)_effectiveTintColor;
- (double)_wellBorderWidthPressed:(_Bool)arg1 on:(_Bool)arg2;
- (void)_transitionWellViewToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_transitionWellViewToPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionWellViewToOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionKnobToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_transitionKnobToPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionKnobToOn:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_effectiveOffImage;
- (id)_effectiveOnImage;
- (struct CGPoint)_offImagePosition;
- (struct CGPoint)_onImagePosition;
- (id)_effectiveOffImageTintColor;
- (id)_effectiveOnImageTintColor;
- (void)_transitionImagesToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_updateDisplayWithAnimationIfNeeded;
- (struct CGRect)_knobBoundsPressed:(_Bool)arg1;
- (struct CGPoint)_knobPositionOn:(_Bool)arg1 pressed:(_Bool)arg2 forBounds:(struct CGRect)arg3;
- (void)_switchToStaticMode:(_Bool)arg1;
- (id)_switchKnobWidthSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 pressed:(_Bool)arg3;
- (id)_switchKnobPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2;
- (struct CGRect)_switchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_switchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGRect)_leftSwitchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_leftSwitchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_switchWellPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(_Bool)arg4;
- (struct CGPoint)_wellPositionOn:(_Bool)arg1 forBounds:(struct CGRect)arg2;
- (id)_switchTrackPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;
- (struct CGColor *)_wellColorOn:(_Bool)arg1;
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;
- (id)_defaultOnTintColor;
- (id)_accessibleOnImage;
- (id)_accessibleOffImage;
- (_Bool)_shouldUseLightTintOverColor:(id)arg1;
- (id)_switchTrackPositionAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;
- (id)_labelOpacityAnimation;
- (id)_effectiveOffTextColor;
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 shouldAnimateLabels:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
