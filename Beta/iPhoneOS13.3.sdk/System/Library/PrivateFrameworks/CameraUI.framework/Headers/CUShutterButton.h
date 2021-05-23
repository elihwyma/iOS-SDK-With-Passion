/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class CAMShutterButtonRingView, CAMTimelapseShutterRingView, UIColor, UIImageView, UIView;

@protocol CAMShutterButtonDelegate;

@interface CUShutterButton : UIButton

{
    _Bool _spinning;
    _Bool _showDisabled;
    long long _mode;
    id <CAMShutterButtonDelegate> _delegate;
    UIColor *_contentColor;
    UIColor *_stopModeBackgroundColor;
    CAMShutterButtonRingView *__outerView;
    UIImageView *__outerImageView;
    CAMTimelapseShutterRingView *__timelapseOuterView;
    UIView *__innerView;
    UIView *__innerViewContrastView;
    UIView *__stopModeBackground;
    UIView *__spinnerView;
    long long _layoutStyle;
    struct UIEdgeInsets _tappableEdgeInsets;
    struct CAMShutterButtonSpec _spec;
}

@property (nonatomic, readonly) CAMShutterButtonRingView *_outerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) CAMTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIView *_innerViewContrastView;
@property (retain, nonatomic) UIView *_stopModeBackground;
@property (retain, nonatomic) UIView *_spinnerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct CAMShutterButtonSpec spec;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id <CAMShutterButtonDelegate> delegate;
@property (nonatomic, getter=isSpinning) _Bool spinning;
@property (nonatomic) _Bool showDisabled;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *stopModeBackgroundColor;

+ (id)shutterButton;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec)arg1;
+ (id)smallShutterButton;
+ (id)shutterButtonWithLayoutStyle:(long long)arg1;
+ (id)smallShutterButtonWithLayoutStyle:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_contentColor;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)_sizeForMode:(long long)arg1;
- (double)_cornerRadiusForMode:(long long)arg1;
- (void)_updateOuterAndInnerLayers;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(_Bool)arg3;
- (void)_updateSpinningAnimations;
- (id)initWithFrame:(struct CGRect)arg1 layoutStyle:(long long)arg2 spec:(struct CAMShutterButtonSpec)arg3;
- (void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1 spec:(struct CAMShutterButtonSpec)arg2;
- (_Bool)_shouldShowBackgroundViewForMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1 layoutStyle:(long long)arg2;
- (CDStruct_8ae1ff66)_timelapseRingSpecForLayoutStyle:(long long)arg1;
- (_Bool)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2;
- (id)_innerCircleColorForMode:(long long)arg1 spinning:(_Bool)arg2;
- (_Bool)_isSpinningSupportedForLayoutStyle:(long long)arg1;

@end
