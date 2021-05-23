/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSOperationQueue, NSString;

@protocol OS_voucher;

@interface NSOperation : NSObject

{
    struct {
        NSOperation *__prevOp;
        NSOperation *__nextOp;
        NSOperation *__nextPriOp;
        NSOperationQueue *__queue;
        NSMutableArray *__dependencies;
        NSHashTable *__down_dependencies;
        long long __unfinished_deps;
        CDUnknownBlockType __completion;
        void *__obsInfo;
        void *__implicitObsInfo;
        double __thread_prio;
        char *__nameBuffer;
        NSObject<OS_voucher> *_voucher;
        CDUnknownBlockType __schedule;
        struct _opaque_pthread_mutex_t __wait_mutex;
        struct _opaque_pthread_cond_t {
            long long __sig;
            char __opaque[40];
        } __wait_cond;
        struct os_unfair_lock_s __lock;
        _Bool _shouldRemoveDependenciesAfterFinish;
        _Atomic unsigned char __state;
        char __prio;
        _Atomic _Bool __cached_isReady;
        _Atomic _Bool __isCancelled;
        _Atomic unsigned char __propertyQoS;
        _Atomic unsigned char __isExecutingObserverCount;
        _Atomic unsigned char __isFinishedObserverCount;
        _Atomic unsigned char __isReadyObserverCount;
        _Atomic unsigned char __isCancelledObserverCount;
    } _iop;
}

@property (readonly, getter=isCancelled) _Bool cancelled;
@property (readonly, getter=isExecuting) _Bool executing;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isConcurrent) _Bool concurrent;
@property (readonly, getter=isAsynchronous) _Bool asynchronous;
@property (readonly, getter=isReady) _Bool ready;
@property (copy, readonly) NSArray *dependencies;
@property long long queuePriority;
@property (copy) CDUnknownBlockType completionBlock;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingReady;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)currentOperation;
+ (_Bool)_removesDependenciesAfterFinish;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)waitUntilFinished;
- (void)setObservationInfo:(void *)arg1;
- (void)cancel;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)start;
- (void)main;
- (void *)observationInfo;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)_implicitObservationInfo;
- (id)__graphDescription:(unsigned long long)arg1;
- (CDUnknownBlockType)_copyCompletionBlock;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)addDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (void)removeAllDependencies;

@end
