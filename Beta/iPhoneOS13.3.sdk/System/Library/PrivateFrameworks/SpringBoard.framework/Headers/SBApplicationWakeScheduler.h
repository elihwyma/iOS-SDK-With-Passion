/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SBApplication;

@protocol BSTimer, SBApplicationWakeLifecycleHandling;

@interface SBApplicationWakeScheduler : NSObject

{
    id <SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    _Bool _invalidated;
    id <BSTimer> _wakeTimer;
    id <BSTimer> _wakeSuspendTimer;
}

@property (retain, nonatomic) id <BSTimer> wakeTimer;
@property (retain, nonatomic) id <BSTimer> wakeSuspendTimer;
@property (nonatomic, readonly) NSDate *scheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)unschedule;
- (void)wakeImmediately;
- (void)scheduleWakeForDate:(id)arg1;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (id)_expectedFireDateForTimer:(id)arg1;
- (id)_safelyScheduleTimerForDate:(id)arg1 persistent:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)endResumeIfAwoken;
- (id)_createPersistentTimerWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_createTimerWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_initWithLifecycleTracker:(id)arg1 forApplication:(id)arg2;
- (id)suspensionDate;
- (void)_forceInvalidate;

@end
