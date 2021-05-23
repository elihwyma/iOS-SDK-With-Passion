/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@protocol UICoordinateSpace;

@interface LAUIPhysicalButtonView : UIView

{
    id <UICoordinateSpace> _fixedCoordinateSpace;
    id <UICoordinateSpace> _coordinateSpace;
    unsigned int _edge;
    _Bool _onScreen;
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    _Bool _animating;
    double _animationLength;
    NSString *_periodicAnimationKey;
    long long _style;
    NSString *_instruction;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (copy, nonatomic) NSString *instruction;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateFrame;
- (void)_setOnScreen:(_Bool)arg1;
- (void)_beginAnimationIfNecessary;
- (void)_animateWithLength:(double)arg1;
- (void)_beginAnimationIfNecessaryWithDelay:(double)arg1;
- (void)_animateWithLength:(double)arg1 delay:(double)arg2;
- (void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2;
- (void)_endAnimationIfNecessary;

@end
