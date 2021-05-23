/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UISlider.h>

@class NSTimer, UIView;

@protocol CAMZoomSliderDelegate;

@interface CAMZoomSlider : UISlider

{
    _Bool _minimumAutozooming;
    _Bool _maximumAutozooming;
    _Bool _visibilityTimerSuspended;
    _Bool __autozooming;
    long long _layoutStyle;
    id <CAMZoomSliderDelegate> _delegate;
    long long _orientation;
    NSTimer *__visibilityTimer;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic, readonly) NSTimer *_visibilityTimer;
@property (nonatomic, getter=_isAutozooming, setter=_setAutozooming:) _Bool _autozooming;
@property (nonatomic, getter=isMinimumAutozooming, setter=_setMinimumAutozooming:) _Bool minimumAutozooming;
@property (nonatomic, getter=isMaximumAutozooming, setter=_setMaximumAutozooming:) _Bool maximumAutozooming;
@property (nonatomic, readonly) UIView *_minTrackMaskView;
@property (nonatomic, readonly) UIView *_maxTrackMaskView;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id <CAMZoomSliderDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (nonatomic, readonly, getter=isAutozooming) _Bool autozooming;
@property (nonatomic, getter=isVisibilityTimerSuspended) _Bool visibilityTimerSuspended;
@property (nonatomic) long long orientation;

+ (_Bool)shouldFadeOutZoomSliderForLayoutStyle:(long long)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_updateForLayoutStyle;
- (void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)arg1;
- (double)_thumbCenterXForValue:(float)arg1 trackRect:(struct CGRect)arg2;
- (double)_thumbCenterMinimumXForTrackRect:(struct CGRect)arg1;
- (double)_thumbCenterMaximumXForTrackRect:(struct CGRect)arg1;
- (long long)locationOfTouch:(id)arg1;
- (void)_startVisibilityTimer;
- (void)_updateAutozooming;
- (void)_beginAutozooming;
- (void)_endAutozooming;
- (void)_stopVisibilityTimer;
- (void)_hideZoomSlider:(id)arg1;
- (void)_makeInvisibleAnimationDuration:(double)arg1;
- (float)_valueForThumbCenterX:(double)arg1 trackRect:(struct CGRect)arg2;
- (_Bool)shouldHideForExpiredVisibilityTimer;
- (void)makeVisibleAnimated:(_Bool)arg1;
- (void)makeInvisibleAnimated:(_Bool)arg1;

@end
