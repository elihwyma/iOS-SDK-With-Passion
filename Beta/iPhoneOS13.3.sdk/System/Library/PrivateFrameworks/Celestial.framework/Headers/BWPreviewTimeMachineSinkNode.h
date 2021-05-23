/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@class BWFigVideoCaptureDevice, FigCaptureImageMotionDetector, FigStateMachine, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface BWPreviewTimeMachineSinkNode : BWSinkNode

{
    BWFigVideoCaptureDevice *_device;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableArray *_timeMachineFrames;
    struct os_unfair_lock_s _timeMachineLock;
    int _timeMachineCapacity;
    FigStateMachine *_stateMachine;
    CDStruct_1b6d18a9 _earliestAllowedPTS;
    struct {
        CDStruct_1b6d18a9 start;
        CDStruct_1b6d18a9 duration;
    } _requestedSuspendPTSRange;
    CDUnknownBlockType _suspendCompletionHandler;
    FigCaptureImageMotionDetector *_motionDetector;
    _Bool _faceMotionDetectionEnabled;
    _Bool _haveFrameRotationAndMirror;
    int _frameRotationDegrees;
    _Bool _frameMirrored;
}

@property CDStruct_1b6d18a9 earliestAllowedPTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) CDStruct_79c71658 frameDimensions;

+ (void)initialize;

- (void)dealloc;
- (void)resume;
- (void)_setupStateMachine;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_trimToTimeRange:(struct)arg1;
- (_Bool)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg1 faceMotionRectOut:(struct CGRect *)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)suspendWithPTSRange:(struct)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned int)arg2 timeMachineCapacity:(int)arg3 sinkID:(id)arg4;

@end
