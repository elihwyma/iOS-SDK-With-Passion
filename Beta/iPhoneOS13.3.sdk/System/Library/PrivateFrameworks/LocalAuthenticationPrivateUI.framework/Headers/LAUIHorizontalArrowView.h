/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface LAUIHorizontalArrowView : UIView

{
    UIColor *_color;
    _Bool _effective_animating;
    unsigned short _dismissal_animation_count;
    _Bool _animated;
    double _resting_height;
    UIView *_container;
    UIView *_arrow_container;
    UIImageView *_head;
    UIView *_tail_container;
    UIImageView *_tail;
    UILabel *_label;
    _Bool _pulsing;
    struct periodic_animation_state _head_pulse;
    struct periodic_animation_state _tail_container_pulse;
    struct periodic_animation_state _tail_counter_pulse;
    _Bool _animating;
    long long _direction;
    double _displacement;
    NSString *_text;
    struct CGSize _maximum_line_size;
    struct UIOffset _displacementOffset;
}

@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic) long long direction;
@property (nonatomic) double displacement;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGSize maximumLineSize;
@property (nonatomic) struct UIOffset displacementOffset;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)_updateFont;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)_updateViewsWithColor;
- (void)_updateAnimatingAnimated:(_Bool)arg1;
- (void)_updateDirectionTransform;
- (void)_updatePulsingWithDelay:(double)arg1;
- (void)_layoutIfNeededAnimated:(_Bool)arg1;
- (void)_updateLabelSize;

@end
