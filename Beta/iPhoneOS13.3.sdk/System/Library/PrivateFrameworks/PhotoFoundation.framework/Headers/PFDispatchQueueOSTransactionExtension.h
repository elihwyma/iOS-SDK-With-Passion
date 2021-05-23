/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@class NSObject, PFDispatchQueue;

@protocol OS_os_transaction;

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension

{
    PFDispatchQueue *_queue;
    NSObject<OS_os_transaction> *_currentTransaction;
    unsigned long long _transactionUseCount;
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (id)description;
- (void)installOnQueue:(id)arg1;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (id)newBlockInfo;
- (void)_blockCompleted;
- (void)dispatchTransactionName:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchTransactionName:(id)arg1 qos:(unsigned int)arg2 async:(CDUnknownBlockType)arg3;
- (void)dispatchTransactionName:(id)arg1 asyncWithCurrentQOS:(CDUnknownBlockType)arg2;

@end
