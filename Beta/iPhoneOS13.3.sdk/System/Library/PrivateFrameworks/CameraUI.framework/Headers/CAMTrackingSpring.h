/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMSpring.h>

@interface CAMTrackingSpring : CAMSpring

{
    CAMSpring *__settleProgressSpring;
    double __convergenceStartValue;
    struct {
        double value;
        double strength;
    } __secondaryTarget;
}

@property (retain, nonatomic, setter=_setSettlingSpring:) CAMSpring *_settleProgressSpring;
@property (nonatomic, setter=_setSecondaryTarget:) CDStruct_c3b9c2ee _secondaryTarget;
@property (nonatomic, setter=_convergenceStartValue:) double _convergenceStartValue;
@property (nonatomic, readonly) double convergenceProgress;
@property (nonatomic, readonly) _Bool hasSecondaryTarget;

- (void)resetToValue:(double)arg1;
- (_Bool)isConverged;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3;
- (void)updateForTimestamp:(double)arg1;
- (void)_beginConverging;
- (void)setSecondaryTarget:(double)arg1 withStrength:(double)arg2 animated:(_Bool)arg3;
- (void)resetToValue:(double)arg1 animated:(_Bool)arg2;
- (void)removeSecondaryTargetAnimated:(_Bool)arg1;
- (void)setTarget:(double)arg1 animated:(_Bool)arg2;

@end
