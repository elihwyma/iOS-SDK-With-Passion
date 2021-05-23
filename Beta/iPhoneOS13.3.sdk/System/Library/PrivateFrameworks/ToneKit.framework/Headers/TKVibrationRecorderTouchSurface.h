/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKVibrationRecorderRippleView.h>

@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView

{
    _Bool _isRecordingModeEnabled;
    double _vibrationPatternMaximumDuration;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    _Bool _shouldIgnoreCurrentTouch;
    _Bool _isReplayModeEnabled;
    TLVibrationPattern *_vibrationPatternToReplay;
    double _replayModeWasEnteredStartTime;
    id <NSCopying> _displayLinkManagerObserverToken;
    id <TKVibrationRecorderTouchSurfaceDelegate> _delegate;
}

@property (weak, nonatomic) id <TKVibrationRecorderTouchSurfaceDelegate> delegate;

- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)enterRecordingMode;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;
- (void)exitRecordingMode;
- (void)currentVibrationComponentShouldEnd;
- (void)_recordTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2;
- (void)_updateTouchLocationForReplayMode:(id)arg1;

@end
