/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton

{
    _Bool _animatingTouchDown;
    CDUnknownBlockType _touchUpAnimationCompleteHandler;
    UIColor *_imageViewTintColor;
    UIColor *_backgroundImageColor;
    UIImageView *_transformingImageView;
}

@property (retain, nonatomic) UIColor *imageViewTintColor;
@property (retain, nonatomic) UIColor *backgroundImageColor;
@property (nonatomic) _Bool animatingTouchDown;
@property (retain, nonatomic) UIImageView *transformingImageView;
@property (copy, nonatomic) CDUnknownBlockType touchUpAnimationCompleteHandler;

+ (id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (void)_touchDown;
- (void)_touchUp;
- (void)_setupInternalTouchActions;
- (void)_animateHighlighted:(_Bool)arg1;
- (void)turnIntoSolidDotWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)backgroundImageFrame;

@end
