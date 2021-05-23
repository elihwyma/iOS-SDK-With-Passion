/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSMutableArray, NSObject, NSString, _MTLDevice;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface _MTLCommandQueue : _MTLObjectWithLabel

{
    _MTLDevice *_dev;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t _pendingQueueLock;
    struct _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    int _backgroundTrackingPID;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _Bool _profilingEnabled;
    _Bool _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _numCommandBuffers;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _listIndex;
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    _Bool _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _disableCrossQueueHazardTracking;
    _Bool _executionEnabled;
    _Bool _skipRender;
    _Bool _openGLQueue;
    NSObject<OS_dispatch_semaphore> *_presentScheduledSemaphore;
    _Bool _forceImmediateSubmissionOnCommitThread;
}

@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) _Bool commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) _Bool disableCrossQueueHazardTracking;
@property (readonly) _Bool isOpenGLQueue;
@property int backgroundTrackingPID;
@property (readonly) unsigned long long globalTraceObjectID;
@property _Bool skipRender;
@property _Bool executionEnabled;
@property (copy) NSString *label;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (nonatomic) unsigned long long numCommandBuffers;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex;

- (void)dealloc;
- (id)description;
- (void)finish;
- (id)initWithDevice:(id)arg1;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (void)setSubmissionQueue:(id)arg1;
- (void)insertDebugCaptureBoundary;
- (void)availableCounters;
- (int)requestCounters:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4;
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getAndIncrementNumCommandBuffers;
- (void)enqueueCommandBuffer:(id)arg1;
- (void)commitCommandBuffer:(id)arg1 wake:(_Bool)arg2;
- (_Bool)submitCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (_Bool)_submitAvailableCommandBuffers;
- (void)completeCommandBuffers:(id *)arg1 count:(unsigned long long)arg2;

@end
