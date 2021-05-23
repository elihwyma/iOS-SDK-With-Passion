/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

@class UIColor, UIImageView;

@interface NTKChronoButton : UIControl

{
    UIImageView *_ringView;
    UIImageView *_fillView;
    struct CGPoint _originalCenter;
    UIColor *_color;
    UIColor *_swapColor;
    UIColor *_highlightColor;
    UIColor *_ringColor;
    UIColor *_ringSwapColor;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *swapColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *ringColor;
@property (retain, nonatomic) UIColor *ringSwapColor;
@property (nonatomic) struct UIEdgeInsets touchEdgeInsets;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_updateColors;
- (void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3;

@end
