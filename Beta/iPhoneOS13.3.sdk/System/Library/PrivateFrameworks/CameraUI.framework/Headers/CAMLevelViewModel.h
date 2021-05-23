/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMObservable.h>

@interface CAMLevelViewModel : CAMObservable

{
    _Bool _monitoringDevice;
    long long _currentIndicatorMode;
    double _currentIndicatorAlpha;
    double _desiredUpdateInterval;
    long long __desiredIndicatorMode;
    double __desiredModeBeganTime;
    struct UIOffset _currentIndicatorOffset;
}

@property (nonatomic, setter=_setCurrentIndicatorMode:) long long currentIndicatorMode;
@property (nonatomic, setter=_setCurrentIndicatorOffset:) struct UIOffset currentIndicatorOffset;
@property (nonatomic, setter=_setCurrentIndicatorAlpha:) double currentIndicatorAlpha;
@property (nonatomic, setter=_setDesiredUpdateInterval:) double desiredUpdateInterval;
@property (nonatomic, setter=_setDesiredIndicatorMode:) long long _desiredIndicatorMode;
@property (nonatomic, setter=_setDesiredModeBeganTime:) double _desiredModeBeganTime;
@property (nonatomic, getter=isMonitoringDevice) _Bool monitoringDevice;

- (id)mutableChangeObject;
- (void)applyDeviceMotion:(id)arg1;
- (long long)_hysteresisModeForDesiredMode:(long long)arg1;
- (void)_updateFlatModeWithRoll:(float)arg1 pitch:(float)arg2 magnitude:(float)arg3;
- (void)_updateModeNone;
- (double)_hysteresisAlphaForDesiredAlpha:(double)arg1 fromCurrentAlpha:(double)arg2;

@end
