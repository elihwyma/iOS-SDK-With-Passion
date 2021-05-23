/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@interface _SYCountedSemaphore : NSObject

{
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic _Bool _invalidated;
}

- (id)init;
- (void)invalidate;
- (void)signal;
- (id)initWithCount:(long long)arg1;
- (_Bool)waitWithTimeout:(double)arg1;
- (_Bool)_waitSemaphoreWithTimeout:(double)arg1;
- (void)_signalSemaphore;
- (void)_ensureSemaphore;

@end
