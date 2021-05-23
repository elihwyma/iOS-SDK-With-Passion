/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsCollectorQueue : NSObject

{
    struct OpaqueFigThread *_thread;
    _Bool _isThreadRunning;
    _Bool _shouldBlockWhenFull;
    CDStruct_b21f1e06 _messageQueue[100];
    int _firstMessageIndex;
    int _nextMessageIndex;
    int _maxQueueSize;
    int _almostFullQueueSize;
    CDUnknownBlockType _messageHandler;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_cond_t _queueNotFullCondition;
    struct _opaque_pthread_cond_t _queueNotEmptyCondition;
    struct _opaque_pthread_mutex_t _waitMutex;
    struct _opaque_pthread_cond_t _waitCondition;
    _Bool _shouldProcessMessageOnExternalThread;
    _Bool _shouldProcessMessageImmediately;
    unsigned int _queueProcessWaitTimeMs;
}

@property (readonly) _Bool isThreadRunning;
@property (copy) CDUnknownBlockType messageHandler;

- (void)dealloc;
- (void)stop;
- (void)start;
- (_Bool)enqueue:(CDStruct_b21f1e06)arg1;
- (int)queueSize;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(_Bool)arg2 queueWaitTimeMs:(unsigned int)arg3 useExternalThread:(_Bool)arg4;
- (_Bool)addStatisticsMessage:(CDStruct_b21f1e06)arg1;
- (void)drainAndProcessAllStatistics;
- (void)stopThread;
- (_Bool)dequeue:(CDStruct_b21f1e06 *)arg1;
- (void)processMessage:(CDStruct_b21f1e06)arg1;
- (_Bool)isQueueFull;
- (void)cancelWait;
- (void)waitBeforeProcessingQueue;

@end
