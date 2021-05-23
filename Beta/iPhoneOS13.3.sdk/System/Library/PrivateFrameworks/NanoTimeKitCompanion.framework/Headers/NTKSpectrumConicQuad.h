/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUIQuad.h>

@class CAMediaTimingFunction, MISSING_TYPE, NSCalendar, NSDate, NTKSpectrumResourceManager;

@protocol MTLBuffer, MTLDevice;

@interface NTKSpectrumConicQuad : CLKUIQuad

{
    id <MTLDevice> _device;
    NTKSpectrumResourceManager *_resourceManager;
    id <MTLBuffer> _conicUniformsBuffers[3];
    CAMediaTimingFunction *_mediaTimingFunction;
    MISSING_TYPE *_fromColor;
    MISSING_TYPE *_toColor;
    MISSING_TYPE *_midColor;
    double _screenScale;
    MISSING_TYPE *_size;
    unsigned long long _frame;
    NSCalendar *_calendar;
    unsigned long long _style;
    double _startOverrideTime;
    double _endOverrideTime;
    float _startSecondAngle;
    float _startMinuteAngle;
    float _startHourAngle;
    float _endSecondAngle;
    float _endMinuteAngle;
    float _endHourAngle;
    unsigned int _isAnimatingStyle:1;
    unsigned long long _role;
    float _styleTransitionFraction;
    unsigned long long _toStyle;
    _Bool _masking;
    float _opacity;
    float _maskRadius;
    float _vignetteAlpha;
    NSDate *_overrideDate;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic) float opacity;
@property (nonatomic) float maskRadius;
@property (nonatomic, getter=isMasking) _Bool masking;
@property (nonatomic) float vignetteAlpha;

- (void)dealloc;
- (void)setStyle:(unsigned long long)arg1;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)setFromColor:(id)arg1 toColor:(id)arg2;
- (id)initWithRole:(unsigned long long)arg1 screenScale:(double)arg2;
- (void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4;

@end
