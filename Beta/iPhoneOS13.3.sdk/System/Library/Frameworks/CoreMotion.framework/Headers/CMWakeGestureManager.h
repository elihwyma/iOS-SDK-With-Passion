/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CMWakeGestureDelegate, OS_dispatch_queue;

@interface CMWakeGestureManager : NSObject

{
    NSObject<OS_dispatch_queue> *fDispatchQ;
    _Bool gestureUpdatesStarted;
    struct Dispatcher *fWakeDispatcher;
    struct Dispatcher *fPowerStateDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor>> fWakeGestureVisitor;
    long long fCurrentState;
    int fMeasureLatencyState;
    double fWakePacketTimestamp;
    struct IONotificationPort *fIoNotifyPort;
    unsigned int fIoNotification;
    unsigned int backlightService;
    double fLastNotificationTime;
    int fScreenDimmingNotificationToken;
    int fLockScreenToken;
    double fLastDisplayOnTime;
    NSString *fProcessName;
    _Bool fIsRunningInPrimaryProcess;
    _Bool fEnableLatencyAlert;
    _Bool fEnableAudioAlert;
    int fLatencyAlertThreshold;
    BOOL fDisplayState;
    int fSelector;
    id <CMWakeGestureDelegate> _delegate;
}

@property (nonatomic) id <CMWakeGestureDelegate> delegate;

+ (id)sharedManager;
+ (_Bool)isWakeGestureAvailable;
+ (_Bool)isWakeGestureOverrideEnabled;
+ (unsigned char)toRaw:(long long)arg1;
+ (_Bool)hasSlowBootArgs;
+ (id)stringForNotification:(unsigned char)arg1;
+ (id)stringForMode:(unsigned char)arg1;
+ (id)stringForStartPose:(unsigned char)arg1;
+ (id)stringForViewPose:(unsigned char)arg1;
+ (long long)toState:(unsigned char)arg1;
+ (id)stringForGestureState:(long long)arg1;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id).cxx_construct;
- (void)loadPreferences;
- (void)stopWakeGestureUpdates;
- (void)onNotificationControl:(id)arg1;
- (void)invokeDelegateWithState:(long long)arg1;
- (void)onWakeUpdated:(const struct Sample *)arg1;
- (void)onPowerStateUpdated:(const struct Sample *)arg1;
- (void)onBacklightServiceUpdated:(unsigned int)arg1;
- (void)writeAggdScalarForKey:(id)arg1 withValue:(id)arg2;
- (void)playAlert;
- (void)logWakeLatency;
- (void)startWakeGestureUpdates;
- (_Bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)simulateGesture:(long long)arg1 after:(double)arg2;
- (void)forceDetected;
- (void)reenableDetectedStateRecognition;

@end
