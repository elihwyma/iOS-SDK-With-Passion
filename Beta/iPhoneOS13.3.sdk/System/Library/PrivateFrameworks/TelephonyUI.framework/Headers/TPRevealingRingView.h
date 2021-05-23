/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class UIColor, _TPTemplatedColoredImageView;

@interface TPRevealingRingView : UIView

{
    CDStruct_f15746dd _outerViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerView;
    CDStruct_f15746dd _innerViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerView;
    UIColor *_colorOutsideRing;
    UIColor *_colorInsideRing;
    struct UIEdgeInsets _paddingOutsideRing;
    double _defaultRingStrokeWidth;
    double _revealAnimationDuration;
    double _unrevealAnimationDuration;
    double _cornerRadius;
    _Bool _isCircularRing;
    _Bool _revealed;
    double _alphaInsideRing;
    double _alphaOutsideRing;
    UIColor *_colorInsidegamRing;
}

@property (nonatomic, readonly) struct CGSize ringSize;
@property (nonatomic, readonly) struct UIEdgeInsets paddingOutsideRing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double defaultRingStrokeWidth;
@property (retain, nonatomic) UIColor *colorOutsideRing;
@property (retain, nonatomic) UIColor *colorInsideRing;
@property (nonatomic) double revealAnimationDuration;
@property (nonatomic) double unrevealAnimationDuration;
@property (nonatomic) double alphaOutsideRing;
@property (nonatomic) double alphaInsideRing;

+ (id)classIdentifier;

- (id)description;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets)arg1;
- (void)_evaluateCircularness;
- (void)_animateForReveal:(_Bool)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (void)_computeOuterViewDrawingPropertiesWithScale:(double)arg1;
- (void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1;
- (void)_calculateOuter:(struct CGRect *)arg1 inner:(struct CGRect *)arg2 newXOffset:(double *)arg3 newYOffset:(double *)arg4 withScale:(double)arg5;
- (_Bool)_shouldDrawAsCircle:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (_Bool)_isSquare:(struct CGSize)arg1;

@end
