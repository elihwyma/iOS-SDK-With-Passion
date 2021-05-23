/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, _MTLCommandQueue;

@protocol MTLCommandEncoder, MTLCommandQueue;

@interface _MTLCommandBuffer : _MTLObjectWithLabel

{
    id <MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_scheduledDispatchListTail;
    struct MTLDispatch *_completedDispatchList;
    struct MTLDispatch *_completedDispatchListTail;
    struct MTLSyncDispatch *_syncDispatchList;
    struct MTLSyncDispatch *_syncDispatchListTail;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _status;
    NSError *_error;
    _Bool _skipRender;
    _Bool _profilingEnabled;
    _Bool _scheduledCallbacksDone;
    _Bool _completedCallbacksDone;
    _Bool _strongObjectReferences;
    NSDictionary *_profilingResults;
    _Bool _retainedReferences;
    _Bool _synchronousDebugMode;
    NSMutableDictionary *_userDictionary;
    unsigned long long _kernelStartTime;
    unsigned long long _kernelEndTime;
    unsigned long long _gpuStartTime;
    unsigned long long _gpuEndTime;
    unsigned long long _numEncoders;
    unsigned long long _numThisCommandBuffer;
    unsigned long long _listIndex;
    _Bool _ownedByParallelEncoder;
    _Bool _wakeOnCommit;
    NSMutableArray *_retainedObjects;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _Bool _StatEnabled;
    CDUnknownBlockType _perfSampleHandlerBlock;
    _Bool _hasPresent;
}

@property (readonly) _Bool retainedReferences;
@property (readonly) _Bool synchronousDebugMode;
@property (readonly) id <MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long status;
@property (copy) NSString *label;
@property (readonly) NSError *error;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) unsigned long long globalTraceObjectID;
@property (nonatomic, readonly) double kernelStartTime;
@property (nonatomic, readonly) double kernelEndTime;
@property (nonatomic, readonly) double GPUStartTime;
@property (nonatomic, readonly) double GPUEndTime;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;
@property (nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property (nonatomic) unsigned long long numThisCommandBuffer;
@property (nonatomic) unsigned long long numEncoders;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (nonatomic) _Bool ownedByParallelEncoder;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)commit;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilScheduled;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)setCommitted:(_Bool)arg1;
- (_Bool)isCommitted;
- (void)enqueue;
- (_Bool)commitAndWaitUntilSubmitted;
- (_Bool)skipRender;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (void)commitAndHold;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2 synchronousDebugMode:(_Bool)arg3;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)commitAndReset;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)_addRetainedObject:(id)arg1;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;
- (unsigned long long)getAndIncrementNumEncoders;
- (void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)kernelSubmitTime;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)didSchedule:(unsigned long long)arg1 error:(id)arg2;
- (void)runPerfCounterCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;

@end
