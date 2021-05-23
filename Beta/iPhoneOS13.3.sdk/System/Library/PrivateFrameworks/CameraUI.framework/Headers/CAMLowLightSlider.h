/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraEditKit/CEKDiscreteSlider.h>

@class NSTimer;

@interface CAMLowLightSlider : CEKDiscreteSlider

{
    _Bool __performingCaptureAnimation;
    unsigned long long __selectedIndexBeforeCaptureAnimation;
    double __remainingCaptureAnimationTime;
    NSTimer *__valueLabelUpdateTimer;
    double __inactiveTickMarkHeight;
    CDStruct_c534d91b _durationMapping;
}

@property (nonatomic, getter=_isPerformingCaptureAnimation, setter=_setPerformingCaptureAnimation:) _Bool _performingCaptureAnimation;
@property (nonatomic, setter=_setSelectedIndexBeforeCaptureAnimation:) unsigned long long _selectedIndexBeforeCaptureAnimation;
@property (nonatomic, setter=_setRemainingCaptureAnimationTime:) double _remainingCaptureAnimationTime;
@property (retain, nonatomic, setter=_setValueLabelUpdateTimer:) NSTimer *_valueLabelUpdateTimer;
@property (nonatomic, readonly) double _inactiveTickMarkHeight;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) CDStruct_c3b9c2ee durationMapping;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)valueText;
- (void)performCaptureAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endCaptureAnimationAnimated:(_Bool)arg1;
- (id)_valueTextForDuration:(double)arg1;
- (id)_valueTextForDuration:(double)arg1 format:(id)arg2;
- (void)_startValueLabelUpdateTimerWithDuration:(double)arg1;
- (void)_stopValueLabelUpdateTimer;
- (void)_handleValueLabelUpdateTimerWithStartTime:(double)arg1 duration:(double)arg2;

@end
