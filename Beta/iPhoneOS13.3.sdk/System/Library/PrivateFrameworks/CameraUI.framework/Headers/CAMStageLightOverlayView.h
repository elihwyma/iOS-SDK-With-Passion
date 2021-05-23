/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, CAMStageLightAnimator, CAMStageLightOverlayCircleView, UIImageView;

@interface CAMStageLightOverlayView : UIView

{
    _Bool _active;
    _Bool _visible;
    long long _orientation;
    double _bottomContentInset;
    UIView *__tintView;
    UIImageView *__vignetteView;
    CAMStageLightOverlayCircleView *__circleView;
    unsigned long long __activeTimerID;
    CAGradientLayer *__gradientLayer;
    CAMStageLightAnimator *__animator;
    struct CGRect _viewportFrame;
}

@property (nonatomic, readonly) UIView *_tintView;
@property (nonatomic, readonly) UIImageView *_vignetteView;
@property (nonatomic, readonly) CAMStageLightOverlayCircleView *_circleView;
@property (nonatomic, setter=_setActiveTimerID:) unsigned long long _activeTimerID;
@property (nonatomic, readonly) CAGradientLayer *_gradientLayer;
@property (retain, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect viewportFrame;
@property (nonatomic) double bottomContentInset;

+ (struct CGRect)circleFrameForViewport:(struct CGRect)arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3;
+ (_Bool)_useLargeLayoutForViewportSize:(struct CGSize)arg1;
+ (double)_circleDiameterForViewportSize:(struct CGSize)arg1 orientation:(long long)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateShadowViewsAnimated:(_Bool)arg1;
- (void)_updateAnimatorState;
- (struct CGRect)_circleFrameForOrientation:(long long)arg1;

@end
