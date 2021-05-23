/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface MFInvocationQueue : NSObject

{
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _numThreads;
    unsigned long long _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
    NSMutableSet *_threadOverrides;
    _Bool _isForeground;
    NSObject<OS_dispatch_queue> *_keybagQueue;
}

@property (nonatomic) unsigned long long maxThreadCount;
@property (nonatomic) int threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;
@property (nonatomic, readonly) unsigned long long invocationCount;
@property (nonatomic, readonly) unsigned long long threadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInvocationQueue;
+ (void)flushAllInvocationQueues;
+ (unsigned long long)totalInvocationCount;

- (id)init;
- (void)dealloc;
- (void)removeAllItems;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (void)addInvocation:(id)arg1;
- (void)didCancel:(id)arg1;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;
- (void)_drainQueue:(id)arg1;
- (void)applicationWillResume;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)_processInvocation:(id)arg1;
- (void)_adjustThreadPrioritiesIsForeground:(_Bool)arg1;

@end
