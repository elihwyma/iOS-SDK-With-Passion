/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (void)runWithLockAcquired:(CDUnknownBlockType)arg1;
- (id)guardedDataAssertingLockContext;
- (id)unsafeGuardedData;
- (id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2;
- (void)runAsyncWithLockAcquired:(CDUnknownBlockType)arg1;

@end
