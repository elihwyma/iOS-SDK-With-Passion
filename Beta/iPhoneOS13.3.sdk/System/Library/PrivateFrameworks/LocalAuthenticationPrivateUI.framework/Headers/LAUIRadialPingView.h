/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface LAUIRadialPingView : UIView

{
    UIColor *_color;
    UIView *_container;
    UIView *_primary;
    struct array<(anonymous namespace)::blur_container, 2> _blurs;
    struct periodic_animation_state _pulse;
    _Bool _animating_dirty;
    unsigned char _animating_counter;
    _Bool _animating;
}

@property (nonatomic, getter=isAnimating) _Bool animating;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)_updateViewsWithColor;
- (void)_updateAnimatingAnimated:(_Bool)arg1;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_endExpand;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_attachExpandAnimationToContainer:(struct blur_container *)arg1 withDelay:(double)arg2;
- (void)_setPulse:(_Bool)arg1 withDelay:(double)arg2;
- (void)_setExpand:(_Bool)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3;

@end
