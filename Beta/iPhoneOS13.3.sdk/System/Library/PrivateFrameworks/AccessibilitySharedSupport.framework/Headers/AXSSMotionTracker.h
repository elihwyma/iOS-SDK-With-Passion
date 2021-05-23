/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class AXSSMotionTrackingInputConfiguration, AXSSMotionTrackingState, NSXPCConnection;

@protocol AXSSMotionTrackerDelegate, AXSSMotionTrackingDaemonProtocol;

@interface AXSSMotionTracker : NSObject

{
    _Bool _debugOverlayEnabled;
    _Bool __tracking;
    _Bool __hasBeenStarted;
    unsigned long long _motionTrackingMode;
    double _sensitivity;
    double _joystickModeMovementThreshold;
    AXSSMotionTrackingInputConfiguration *_inputConfiguration;
    AXSSMotionTrackingState *_state;
    id <AXSSMotionTrackerDelegate> _delegate;
    NSXPCConnection *__motionTrackingDaemonConnection;
}

@property (nonatomic, readonly) id <AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon;
@property (retain, nonatomic) NSXPCConnection *_motionTrackingDaemonConnection;
@property (nonatomic) _Bool _tracking;
@property (nonatomic) _Bool _hasBeenStarted;
@property (nonatomic) _Bool debugOverlayEnabled;
@property (copy, nonatomic) AXSSMotionTrackingState *state;
@property (nonatomic, readonly, getter=isTracking) _Bool tracking;
@property (weak, nonatomic) id <AXSSMotionTrackerDelegate> delegate;
@property (nonatomic) unsigned long long motionTrackingMode;
@property (nonatomic) double sensitivity;
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *inputConfiguration;
@property (nonatomic) double joystickModeMovementThreshold;

+ (id)supportedExpressions;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)stop;
- (void)start;
- (void)_updateState:(id)arg1;
- (void)motionTrackingDaemonUpdatedState:(id)arg1;
- (void)_motionTrackingDaemonWasInterruptedFromXPC;
- (void)_changeState:(id)arg1;

@end
