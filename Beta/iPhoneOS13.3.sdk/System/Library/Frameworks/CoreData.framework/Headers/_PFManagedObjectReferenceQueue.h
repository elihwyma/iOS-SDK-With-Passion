/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFManagedObjectReferenceQueue : NSObject

{
    int _cd_rc;
    int _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray *_queue;
    struct __CFRunLoopObserver *_rlObserver;
    int _processing;
}

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)finalize;
- (void)_processReferenceQueue:(_Bool)arg1;
- (_Bool)_queueForDealloc:(id)arg1;
- (void)_unregisterRunloopObservers;
- (void)_contextDidDealloc;
- (id)initForContext:(id)arg1;
- (long long)_queueCount;
- (_Bool)_signal;
- (_Bool)_queueBatchForDealloc:(struct __CFArray *)arg1;

@end
