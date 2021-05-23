/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject

{
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _numThreads;
    unsigned long long _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
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

- (id)init;
- (void)dealloc;
- (void)removeAllItems;
- (id)copyDiagnosticInformation;
- (void)addInvocation:(id)arg1;
- (void)didCancel:(id)arg1;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;
- (void)_drainQueue:(id)arg1;

@end
