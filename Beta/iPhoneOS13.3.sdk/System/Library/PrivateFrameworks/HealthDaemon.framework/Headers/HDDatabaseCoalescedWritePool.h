/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSLock, NSMutableArray, NSString, _HKDelayedOperation;

@protocol OS_dispatch_queue, OS_os_log;

@interface HDDatabaseCoalescedWritePool : NSObject

{
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_writeQueue;
    _HKDelayedOperation *_pendingWriteOperation;
    NSLock *_pendingWriteLock;
    NSMutableArray *_pendingWriteQueue;
    HDProfile *_profile;
}

@property (weak, nonatomic, readonly) HDProfile *profile;

- (id)init;
- (void)_queue_performDelayedOperation;
- (_Bool)_queue_performPendingWriteOperationsWithError:(id *)arg1;
- (_Bool)_performPendingWriteRecords:(id)arg1 transaction:(id)arg2 accessibilityError:(id)arg3 error:(id *)arg4;
- (id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3;
- (void)performWriteWithMaximumLatency:(double)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flushPendingWriteQueueWithCompletion:(CDUnknownBlockType)arg1;

@end
