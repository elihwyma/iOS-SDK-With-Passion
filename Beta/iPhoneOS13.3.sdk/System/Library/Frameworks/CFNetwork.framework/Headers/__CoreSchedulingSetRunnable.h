/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol OS_dispatch_semaphore;

@interface __CoreSchedulingSetRunnable : NSObject

{
    NSObject<OS_dispatch_semaphore> *_sem;
    CDUnknownBlockType _setup;
    struct _opaque_pthread_t *_tid;
    struct __CFRunLoop *_rl;
    long long _performCount;
    struct __CFRunLoopSource *_pinnedSource;
    long long _count[5];
}

+ (void)_run:(id)arg1;

- (void)dealloc;
- (struct __CFRunLoop *)copyRunLoopWhenAvailable;
- (id)initWithSetupHadler:(CDUnknownBlockType)arg1;
- (void)startedRunLoop:(struct __CFRunLoop *)arg1;
- (void)runForever;
- (void)__SITUATIONAL_ABORT__:(const char *)arg1 reason:(id)arg2;
- (void)performed;
- (void)canceled:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;
- (void)pinCurrentRunLoop;

@end
