/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, _SBFVibrantSettings;

@interface SBUIChevronView : UIView

{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    _SBFVibrantSettings *_vibrantSettings;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;

- (id)initWithColor:(id)arg1;
- (_Bool)_setState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_setUnified:(_Bool)arg1;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(_Bool)arg3;
- (struct CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (void)configureForLightStyle;

@end
