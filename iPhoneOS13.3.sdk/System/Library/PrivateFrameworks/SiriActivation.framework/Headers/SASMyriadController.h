//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/AFClockAlarmListening-Protocol.h>
#import <SiriActivation/AFClockTimerListening-Protocol.h>

@class AFClockAlarmObserver, AFClockTimerObserver, CMMotionActivityManager, FBSDisplayLayoutMonitor, SASLockStateMonitor;
@protocol OS_dispatch_semaphore;

@interface SASMyriadController : NSObject <AFClockAlarmListening, AFClockTimerListening>
{
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    CMMotionActivityManager *_activityManager;
    BOOL _isLifted;
    double _liftEndTime;
    BOOL _isLocked;
    SASLockStateMonitor *_lockStateMonitor;
    FBSDisplayLayoutMonitor *_displayMonitor;
    double _raiseToWakeTime;
    struct {
        AFClockAlarmObserver *alarmObserver;
        AFClockTimerObserver *timerObserver;
        BOOL isAlarmFiring;
        BOOL isTimerFiring;
    } _mobileClockObserver;
    BOOL _canceledByMyriad;
}

+ (id)currentController;
@property(nonatomic) BOOL canceledByMyriad; // @synthesize canceledByMyriad=_canceledByMyriad;
// - (void).cxx_destruct;
- (void)_handleCMMotionActivity:(id)arg1;
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;
- (void)clockAlarmObserver:(id)arg1 alarmDidDismiss:(id)arg2;
- (void)clockAlarmObserver:(id)arg1 alarmDidFire:(id)arg2;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(BOOL)arg1 isVisible:(BOOL)arg2;
- (BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2;
- (void)dealloc;
- (id)_init;

@end

