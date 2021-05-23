/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMExposureBiasSliderThumb;

@interface CAMExposureBiasSlider : UIView

{
    _Bool _suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CAMExposureBiasSliderThumb *__thumbView;
    UIView *__minTrackView;
    UIView *__maxTrackView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    double __lastInteractionTime;
}

@property (retain, nonatomic, readonly) CAMExposureBiasSliderThumb *_thumbView;
@property (retain, nonatomic, readonly) UIView *_minTrackView;
@property (retain, nonatomic, readonly) UIView *_maxTrackView;
@property (retain, nonatomic, readonly) UIView *_minTrackMaskView;
@property (retain, nonatomic, readonly) UIView *_maxTrackMaskView;
@property (nonatomic, readonly) double _lastInteractionTime;
@property (nonatomic) float exposureBiasMin;
@property (nonatomic) float exposureBiasMax;
@property (nonatomic) float exposureBiasValue;
@property (nonatomic) _Bool suspendTrackFadeOut;
@property (nonatomic, readonly) double thumbMaxExtension;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_updateForChangedNormalizedExposureValue;
- (void)updateLastInteractionTime;
- (float)_normalizedExposureValue;
- (struct CGPoint)_sunCenterForNormalizedValue:(float)arg1;
- (void)_cancelDelayedDim;
- (void)_scheduleDelayedDim;
- (void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2;
- (double)_trackAlpha;
- (void)_dimTrackForInactivity;
- (void)forceTrackDimmed;

@end
