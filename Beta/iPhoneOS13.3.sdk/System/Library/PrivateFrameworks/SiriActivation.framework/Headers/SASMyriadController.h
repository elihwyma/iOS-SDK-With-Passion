/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFClockAlarmObserver, AFClockTimerObserver, CMMotionActivityManager, FBSDisplayLayoutMonitor, NSString, SASLockStateMonitor;

@protocol OS_dispatch_semaphore;

@interface SASMyriadController : NSObject

{
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    CMMotionActivityManager *_activityManager;
    _Bool _isLifted;
    double _liftEndTime;
    _Bool _isLocked;
    SASLockStateMonitor *_lockStateMonitor;
    FBSDisplayLayoutMonitor *_displayMonitor;
    double _raiseToWakeTime;
    struct {
        AFClockAlarmObserver *alarmObserver;
        AFClockTimerObserver *timerObserver;
        _Bool isAlarmFiring;
        _Bool isTimerFiring;
    } _mobileClockObserver;
    _Bool _canceledByMyriad;
}

@property (nonatomic) _Bool canceledByMyriad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentController;

- (void)dealloc;
- (id)_init;
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockAlarmObserver:(id)arg1 alarmDidDismiss:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 alarmDidFire:(id)arg2;
- (void)_handleCMMotionActivity:(id)arg1;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (_Bool)activateForRequest:(id)arg1 visible:(_Bool)arg2;
- (void)activateForInTaskRequest:(_Bool)arg1 isVisible:(_Bool)arg2;

@end
