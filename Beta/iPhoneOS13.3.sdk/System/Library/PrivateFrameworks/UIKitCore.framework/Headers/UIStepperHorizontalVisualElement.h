/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView, UIViewPropertyAnimator;

@protocol UIStepperControl;

__attribute__((visibility("hidden")))
@interface UIStepperHorizontalVisualElement : UIView

{
    _Bool _isRtoL;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIImageView *_leftHighlight;
    UIImageView *_rightHighlight;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    long long _repeatCount;
    NSMutableDictionary *_dividerImages;
    UIViewPropertyAnimator *_leftAlphaAnimator;
    UIViewPropertyAnimator *_rightAlphaAnimator;
    UIViewPropertyAnimator *_leftFrameAnimator;
    UIViewPropertyAnimator *_rightFrameAnimator;
    _Bool _autorepeat;
    _Bool _continuous;
    _Bool _enabled;
    _Bool _wraps;
    double _value;
    double _maximumValue;
    double _minimumValue;
    id <UIStepperControl> _stepperControl;
    double _stepValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (nonatomic) _Bool wraps;
@property (nonatomic) _Bool autorepeat;
@property (weak, nonatomic) id <UIStepperControl> stepperControl;

+ (struct CGSize)initialSize;
+ (struct CGSize)initialIntrinsicSize;
+ (struct UIEdgeInsets)initialAlignmentRectInsets;
+ (id)_highlightOpacityAnimation;
+ (id)_highlightSizeAnimation;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_commonStepperInit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forControl:(id)arg2;
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1 forControl:(id)arg2;
- (struct UIEdgeInsets)alignmentRectInsetsForControl:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (id)decrementImageForState:(unsigned long long)arg1;
- (void)_updateButtonEnabled;
- (void)_updateBackgroundForButtonState;
- (void)_updateDividerImageForButtonState;
- (struct CGRect)_leftHighlightFrame;
- (struct CGRect)_rightHighlightFrame;
- (id)_alphaAnimator:(_Bool)arg1;
- (void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(_Bool)arg3;
- (void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(_Bool)arg6;
- (void)_startTimer;
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateCount:(id)arg1;
- (void)_stopTimer;
- (struct CGRect)_leftHighlightInsetFrame;
- (struct CGRect)_rightHighlightInsetFrame;

@end
