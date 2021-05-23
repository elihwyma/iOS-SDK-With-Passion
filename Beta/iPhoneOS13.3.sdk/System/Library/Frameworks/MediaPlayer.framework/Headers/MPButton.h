/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIButton.h>

@class UIView;

@interface MPButton : UIButton

{
    unsigned int _holding:1;
    UIView *_hitTestDebugView;
    _Bool _hitTestDebugEnabled;
    double _holdDelayInterval;
    struct UIEdgeInsets _alignmentRectInsets;
    struct UIEdgeInsets _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic) double holdDelayInterval;
@property (nonatomic, readonly, getter=isHolding) _Bool holding;
@property (nonatomic) _Bool hitTestDebugEnabled;

+ (id)easyTouchButtonWithType:(long long)arg1;
+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;
+ (double)easyTouchDefaultCharge;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)_delayedTriggerHold;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)_handleTouchUp;

@end
