/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class BKSAccelerometer, NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIEvent

{
    BKSAccelerometer *_motionAccelerometer;
    long long _subtype;
    int _shakeState;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    _Bool _sentMotionBegan;
    float _lowPassState[10];
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property (nonatomic) int shakeState;

- (void)dealloc;
- (id)description;
- (long long)type;
- (id)_init;
- (long long)subtype;
- (id)_windows;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setSubtype:(long long)arg1;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;
- (void)_willResume;
- (void)_willSuspend;
- (void)_updateAccelerometerEnabled;
- (_Bool)_detectWhenNotActive;
- (void)_idleTimerFired;
- (void)_resetLowPassState;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;
- (float)_highPass:(float)arg1;
- (float)_lowPass:(float)arg1;
- (_Bool)_isDetectingMotionEvents;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (int)_shakeState;
- (void)_enablePeakDetectionIfNecessary;

@end
