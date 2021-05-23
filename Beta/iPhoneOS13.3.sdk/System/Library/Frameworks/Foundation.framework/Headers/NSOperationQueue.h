/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperation, NSPointerArray, NSProgress, NSString, _NSOperationQueueProgress;

@protocol OS_dispatch_queue;

@interface NSOperationQueue : NSObject

{
    struct {
        struct os_unfair_lock_s __queueLock;
        NSOperation *__firstOperation;
        NSOperation *__lastOperation;
        NSOperation *__firstPriOperation[6];
        NSOperation *__lastPriOperation[6];
        NSMutableArray *_barriers;
        _NSOperationQueueProgress *_progress;
        _Atomic unsigned long long __operationCount;
        NSPointerArray *__activeThreads;
        long long __maxNumOps;
        int __actualMaxNumOps;
        int __numExecOps;
        NSObject<OS_dispatch_queue> *__dispatch_queue;
        NSObject<OS_dispatch_queue> *__backingQueue;
        NSString *__name;
        char __nameBuffer[300];
        _Atomic _Bool __suspended;
        _Atomic _Bool __overcommit;
        _Atomic unsigned char __propertyQoS;
        _Atomic unsigned char __operationsObserverCount;
        _Atomic unsigned char __operationCountObserverCount;
        _Atomic unsigned char __progressReporting;
        unsigned char __mainQ;
    } _iqp;
}

@property (readonly) NSProgress *progress;
@property long long maxConcurrentOperationCount;
@property (getter=isSuspended) _Bool suspended;
@property (copy) NSString *name;
@property long long qualityOfService;
@property NSObject<OS_dispatch_queue> *underlyingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentQueue;
+ (id)mainQueue;

- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)operations;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)operationCount;
- (_Bool)overcommitsOperations;
- (void)setOvercommitsOperations:(_Bool)arg1;
- (void)cancelAllOperations;
- (void)waitUntilAllOperationsAreFinished;
- (id)__graphDescription;
- (void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_fc_addUncancellableOperationWithBlock:(CDUnknownBlockType)arg1;

@end
