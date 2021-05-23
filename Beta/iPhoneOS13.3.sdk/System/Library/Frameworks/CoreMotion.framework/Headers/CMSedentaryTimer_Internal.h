/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSedentaryTimer_Internal : NSObject

{
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    struct CLConnectionClient *fLocationdConnection;
    _Bool _timerArmed;
}

@property (nonatomic, getter=isTimerArmed) _Bool timerArmed;

- (id)init;
- (void)dealloc;
- (_Bool)_isActive;
- (void)_teardown;
- (void)_handleAlarmDataResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleStartStopTimerResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_registerForAlarmsWithHandler:(CDUnknownBlockType)arg1;

@end
