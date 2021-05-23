/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, CIImage, NSArray, NSError, NSString, NUComposition, NUGeometrySpaceMap, NUImageGeometry, NUObservatory, NUPriority, NURenderJobStatistics, NURenderNode, NURenderPipeline, NURenderRequest;

@protocol NUDevice, NUExtentPolicy, NURenderStatistics, NUScalePolicy, OS_dispatch_group, OS_dispatch_queue;

@interface NURenderJob : NSObject

{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NUObservatory *_observatory;
    NURenderJobStatistics *_stats;
    NSError *_error;
    _Bool _isAborted;
    _Bool _failed;
    _Bool _replySynchronous;
    _Bool _didRespond;
    NSString *_memoizationCacheKey;
    _Bool _isExecuting;
    _Bool _isCanceled;
    _Bool _isFinished;
    int _rendererType;
    long long _currentStage;
    NURenderRequest *_request;
    unsigned long long _number;
    NSArray *_dependentJobs;
    NURenderNode *_prepareNode;
    NURenderNode *_renderNode;
    NUImageGeometry *_outputGeometry;
    NSObject<OS_dispatch_group> *_replyGroup;
    id <NUDevice> _device;
    NUComposition *_composition;
    NURenderPipeline *_renderPipeline;
    NUGeometrySpaceMap *_resolvedSpaceMap;
    NUImageGeometry *_fullSizeGeometry;
    CIImage *_outputImage;
    AVComposition *_outputVideo;
    AVVideoComposition *_outputVideoComposition;
    AVAudioMix *_outputAudioMix;
    CDStruct_1e2b2e48 _renderScale;
}

@property (copy, nonatomic, readonly) NSString *additionalDebugInfo;
@property (nonatomic, readonly) id <NUDevice> device;
@property (nonatomic, readonly) int rendererType;
@property (retain, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NURenderPipeline *renderPipeline;
@property (retain, nonatomic) NURenderNode *prepareNode;
@property (nonatomic) CDStruct_912cb5d2 renderScale;
@property (retain, nonatomic) NURenderNode *renderNode;
@property (retain, nonatomic) NUGeometrySpaceMap *resolvedSpaceMap;
@property (retain, nonatomic) NUImageGeometry *outputGeometry;
@property (retain, nonatomic) NUImageGeometry *fullSizeGeometry;
@property (retain, nonatomic) CIImage *outputImage;
@property (retain, nonatomic) AVComposition *outputVideo;
@property (retain, nonatomic) AVVideoComposition *outputVideoComposition;
@property (retain, nonatomic) AVAudioMix *outputAudioMix;
@property (nonatomic, readonly) id <NURenderStatistics> statistics;
@property (retain) NSArray *dependentJobs;
@property (nonatomic, readonly) _Bool wantsOutputGeometry;
@property (nonatomic, readonly) _Bool wantsOutputImage;
@property (nonatomic, readonly) _Bool wantsOutputVideoFrame;
@property (nonatomic, readonly) _Bool wantsOutputVideo;
@property (nonatomic, readonly) _Bool wantsRenderStage;
@property (nonatomic, readonly) _Bool wantsCompleteStage;
@property (nonatomic, readonly) _Bool wantsPrepareNodeCached;
@property (nonatomic, readonly) _Bool wantsRenderNodeCached;
@property (nonatomic, readonly) _Bool wantsRenderScaleClampedToNativeScale;
@property (readonly) NURenderRequest *request;
@property (readonly) NUPriority *priority;
@property (readonly) unsigned long long number;
@property (readonly) long long currentStage;
@property (readonly) _Bool isExecuting;
@property (readonly) _Bool isCanceled;
@property (readonly) _Bool isAborted;
@property (readonly) _Bool isFinished;
@property (readonly) _Bool succeeded;
@property (readonly) CDStruct_912cb5d2 imageSize;
@property (readonly) id <NUScalePolicy> scalePolicy;
@property (readonly) id <NUExtentPolicy> extentPolicy;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *replyGroup;
@property (readonly) NSError *error;
@property (readonly) _Bool failed;

+ (void)initialize;
+ (void)flushCache;

- (id)init;
- (id)description;
- (void)_resume;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)removeObserver:(id)arg1;
- (id)result;
- (void)finish;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (void)_run:(long long)arg1;
- (id)initWithRequest:(id)arg1;
- (void)_cancel;
- (void)cleanUp;
- (void)_finish;
- (void)_pause;
- (void)run:(long long)arg1;
- (void)finalize:(_Bool)arg1;
- (void)_didPrepare;
- (_Bool)complete:(out id *)arg1;
- (void)reply:(id)arg1;
- (void)fail:(id)arg1;
- (_Bool)prepare:(out id *)arg1;
- (void)didRun;
- (id)renderer:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)generateVideoComposition:(out id *)arg1;
- (_Bool)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;
- (id)_memoizationCacheKey;
- (void)runSynchronous;
- (void)runToPrepareSynchronous;
- (long long)resolvedSampleMode:(long long)arg1;
- (void)_emitSignpostEventType:(unsigned char)arg1 forStage:(long long)arg2 duration:(double)arg3;
- (long long)willRun;
- (_Bool)runStage:(long long)arg1 error:(out id *)arg2;
- (long long)_nextStageForStage:(long long)arg1;
- (_Bool)_shouldWaitForDependentJobs;
- (_Bool)_shouldCancelCoalescedJob;
- (_Bool)cancelCoalescedJob;
- (_Bool)_cancelCoalescedJob;
- (CDStruct_2a4d9400)_atomicCancel;
- (void)abortStage:(long long)arg1;
- (void)abortPrepare;
- (void)abortRender;
- (void)abortComplete;
- (void)respond;
- (void)_setCurrentStage:(long long)arg1;
- (void)_reply:(id)arg1;
- (_Bool)_checkForMemoizedResult;
- (void)_memoizeResult:(id)arg1;
- (id)validateComposition:(out id *)arg1;
- (id)pipelineForComposition:(id)arg1 error:(out id *)arg2;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (id)evaluateComposition:(id)arg1 pipeline:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)evaluateOutputGeometry:(out id *)arg1;
- (id)renderNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (void)addStageObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addCancelObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_notifyStageTransition:(long long)arg1;
- (void)_notifyCanceled:(long long)arg1;
- (id)renderImage:(id)arg1 into:(id)arg2 colorSpace:(id)arg3 roi:(id)arg4 imageSize:(CDStruct_912cb5d2)arg5 error:(out id *)arg6;

@end
