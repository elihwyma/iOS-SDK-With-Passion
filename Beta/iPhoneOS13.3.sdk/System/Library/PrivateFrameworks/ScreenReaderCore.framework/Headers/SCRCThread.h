/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class SCRCStackQueue;

@interface SCRCThread : NSObject

{
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_runLoop;
    _Bool _isInvalid;
    _Bool _isRegistered;
    _Bool _isTimerSet;
    _Bool _shouldStop;
    _Bool _isWaitingForStoppingThread;
    id __key;
    double _lastStartTime;
}

@property (retain, nonatomic, setter=_setKey:) id _key;
@property (nonatomic, setter=_setLastStartTime:) double lastStartTime;

+ (void)initialize;
+ (id)activity;
+ (long long)defaultThreadPriority;
+ (long long)activeThreadCount;
+ (void)setDefaultThreadPriority:(long long)arg1;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(char *)arg8;
+ (double)lastStartTimeForKey:(id)arg1;
+ (void)invalidateForKey:(id)arg1;
+ (void)postStopNotification;
+ (id)currentThreadTaskCache;
+ (_Bool)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (_Bool)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)setName:(id)arg1;
- (_Bool)_shouldStop;
- (void)_processQueue;
- (_Bool)isInvalid;
- (void)setIsInvalid:(_Bool)arg1;
- (void)_assignThreadPriority;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (void)_setIsWaitingForStoppingThread:(_Bool)arg1;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_runThread:(id)arg1;
- (void)_threadDidStop;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_processQueueFromTimer;
- (_Bool)_debug_currentlyRunningOnThisThread;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (_Bool)_isWaitingForStoppingThread;

@end
