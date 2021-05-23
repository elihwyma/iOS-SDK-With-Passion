/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor, UIImage, UIImageView;

@interface SKUICircleProgressIndicator : UIView

{
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    _Bool _highlighted;
    UIImageView *_indeterminateView;
    _Bool _isAnimating;
    double _progress;
    UIColor *_unhighlightedBackgroundColor;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (nonatomic, getter=isIndeterminate) _Bool indeterminate;
@property (nonatomic) double progress;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

+ (id)_fillImage;
+ (id)_borderImage;
+ (id)_indeterminateImage;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_startIndeterminateAnimation;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_setHidesBorderView:(_Bool)arg1;

@end
