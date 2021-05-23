/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface HACCChevronView : UIView

{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIColor *color;

- (id)description;
- (id)initWithColor:(id)arg1;
- (_Bool)_setState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_setUnified:(_Bool)arg1;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(_Bool)arg3;
- (struct CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (void)configureForLightStyle;

@end
