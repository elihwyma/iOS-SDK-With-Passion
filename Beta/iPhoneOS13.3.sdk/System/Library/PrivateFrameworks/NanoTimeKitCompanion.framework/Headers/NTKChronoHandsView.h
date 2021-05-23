/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class NTKChronoPalette, NTKHandView;

@interface NTKChronoHandsView : NTKAnalogHandsView

{
    _Bool _isChronoAnimationRunning;
    _Bool _minuteHandUsesManualTime;
    unsigned long long _timeScale;
    NTKChronoPalette *_palette;
    NTKHandView *_chronoSecondHandView;
    NTKHandView *_chronoFlybackSecondHandView;
    NTKHandView *_chronoMinuteHandView;
    NTKHandView *_chronoFlybackMinuteHandView;
}

@property (nonatomic) unsigned long long timeScale;
@property (retain, nonatomic) NTKChronoPalette *palette;
@property (nonatomic, readonly) NTKHandView *chronoSecondHandView;
@property (nonatomic, readonly) NTKHandView *chronoFlybackSecondHandView;
@property (nonatomic, readonly) NTKHandView *chronoMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoFlybackMinuteHandView;
@property (nonatomic) _Bool minuteHandUsesManualTime;

+ (long long)preferredCountOfInstancesToCache;

- (void)layoutSubviews;
- (id)initForDevice:(id)arg1;
- (void)showTimeMode;
- (void)showChronoMode;
- (void)updateLapHandsVisibility;
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_stopwatchCurrentTime;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (void)_enumeratePrimaryChronoHands:(CDUnknownBlockType)arg1;
- (_Bool)_stopwatchIsRunning;
- (double)_stopwatchCurrentLapTime;
- (double)chronoDuration;
- (double)upperDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;
- (double)secondsAnimationFPS;
- (void)_enumerateChronoHandViews:(CDUnknownBlockType)arg1;
- (_Bool)_stopwatchIsStopped;
- (long long)_stopwatchLapCount;
- (void)_enumerateFlybackChronoHands:(CDUnknownBlockType)arg1;

@end
