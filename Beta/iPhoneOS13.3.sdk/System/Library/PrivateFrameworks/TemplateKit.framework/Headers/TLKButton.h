/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, TLKImageView, TLKTapContainerButton, UIImage;

@interface TLKButton : UIView

{
    _Bool _toggled;
    _Bool _indeterminate;
    UIImage *_untoggledImage;
    UIImage *_toggledImage;
    UIImage *_overlayImage;
    TLKTapContainerButton *_button;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_innerProgressLayer;
    double _progress;
    TLKImageView *_imageView;
    struct CGSize _fixedSize;
}

@property (retain, nonatomic) TLKTapContainerButton *button;
@property (retain, nonatomic) CAShapeLayer *outerProgressLayer;
@property (retain, nonatomic) CAShapeLayer *innerProgressLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) TLKImageView *imageView;
@property (nonatomic, getter=isToggled) _Bool toggled;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImage *untoggledImage;
@property (retain, nonatomic) UIImage *toggledImage;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) struct CGSize fixedSize;
@property (nonatomic, readonly, getter=isIndeterminate) _Bool indeterminate;
@property (readonly) UIImage *imageOnImageView;
@property (readonly) UIView *hitView;

+ (id)blurColorForColor:(id)arg1;
+ (CDStruct_afa449f9)_calculateStatistics:(struct CGImage *)arg1 withSize:(struct CGSize)arg2;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)iconColor;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)endIndeterminateAnimation;
- (void)showPlayIndicator:(_Bool)arg1;
- (void)beginIndeterminateAnimation;
- (void)_updateInnerProgressLayerStroke;
- (void)updateOuterProgressLayerStroke;
- (void)_beginIndeterminateAnimation;
- (id)_outerProgressLayer;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)setButtonSelectionState:(_Bool)arg1;
- (void)addTarget:(id)arg1 forAction:(SEL)arg2;

@end
