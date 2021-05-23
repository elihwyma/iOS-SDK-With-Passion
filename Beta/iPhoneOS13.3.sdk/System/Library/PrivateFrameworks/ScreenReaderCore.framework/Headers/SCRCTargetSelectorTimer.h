/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector

{
    struct __CFRunLoopTimer *_timer;
    id _key;
    _Bool _isCanceled;
    _Bool _isPending;
    id _object;
    NSLock *_lock;
    _Bool _createdTimer;
    CDUnknownBlockType _block;
}

+ (void)initialize;
+ (void)_runThread;
+ (void)_assignThreadPriority;

- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (_Bool)isCancelled;
- (_Bool)isPending;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (_Bool)isCanceled;
- (_Bool)_createdTimer;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (void)dispatchAfterDelay:(double)arg1;
- (id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3;
- (void)_dispatchThreadHelper:(CDUnknownBlockType)arg1;
- (void)_runTimerBlock:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3;
- (void)dispatchAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;

@end
