/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationBuffer.h>

@class NSMutableArray, NSObject, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSConcreteObservationBuffer : NSObservationBuffer

{
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    long long _policy;
    int _state;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_dequeue;
    unsigned long long _maxCount;
    CDUnknownBlockType _bufferFullHandler;
    _Bool _memoryPressureSensitive;
    _Bool _automaticallyEmitsObjects;
}

- (void)dealloc;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (void)_receiveBox:(id)arg1;
- (void)_alreadyOnQueueEmitObject;
- (void)_alreadyOnQueueEmitAllObjects;
- (void)_mergeChanges;
- (CDUnknownBlockType)bufferFullHandler;
- (void)emitObject;
- (void)emitAllObjects;
- (void)setBufferFullHandler:(CDUnknownBlockType)arg1;
- (_Bool)automaticallyEmitsObjects;
- (void)setAutomaticallyEmitsObjects:(_Bool)arg1;
- (_Bool)isMemoryPressureSensitive;
- (void)setMemoryPressureSensitive:(_Bool)arg1;

@end
