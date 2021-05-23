/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSDTilingLimitedQueue : NSObject

{
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    unsigned long long mLimit;
    unsigned long long mReaderCount;
    struct os_unfair_lock_s mSpinLock;
}

- (id)init;
- (void)dealloc;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (id)initWithLimit:(unsigned long long)arg1;

@end
