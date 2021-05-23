/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWDeepFusionProcessorControllerConfiguration, BWFigVideoCaptureDevice, BWPixelBufferPool, BWStillImageNodeConfiguration, BWStillImageOverCaptureProcessorControllerConfiguration, BWStillImageOverCaptureProcessorInput, BWStillImageProcessorConfiguration, BWStillImageProcessorCoordinator, BWUBInferenceControllerConfiguration, BWUBProcessorControllerConfiguration, BWUBSemanticRenderingInput, NSDictionary, NSMutableDictionary, NSObject, NSSet, NSString;

@protocol BWStillImageProcessingStatusDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface BWUBNode : BWNode

{
    NSSet *_supportedPortTypes;
    BWStillImageProcessorCoordinator *_processorCoordinator;
    NSObject<OS_dispatch_queue> *_processorCoordinatorWorkerQueue;
    struct os_unfair_lock_s _processorCoordinatorLock;
    BWUBProcessorControllerConfiguration *_ubProcessorControllerConfiguration;
    NSMutableDictionary *_ubProcessorInputByPortType;
    NSMutableDictionary *_remainingUBProcessorInputsByPortType;
    NSMutableDictionary *_emittedReferenceFrameIDForUBProcessorInputByPortType;
    BWDeepFusionProcessorControllerConfiguration *_deepFusionProcessorControllerConfiguration;
    NSMutableDictionary *_deepFusionProcessorInputByPortType;
    NSObject<OS_dispatch_queue> *_deepFusionProcessorControllerQueue;
    int _maxDeepFusionOutputCount;
    BWPixelBufferPool *_syntheticIntermediatesPool;
    BWPixelBufferPool *_syntheticFusionMapPool;
    BWUBInferenceControllerConfiguration *_inferenceControllerConfiguration;
    NSObject<OS_dispatch_queue> *_inferenceControllerQueue;
    NSObject<OS_dispatch_group> *_inferenceControllerGroup;
    BWPixelBufferPool *_intermediateInferenceInputPool;
    NSDictionary *_inferenceOutputPoolsByAttachedMediaKey;
    BWUBSemanticRenderingInput *_semanticRenderingInput;
    struct opaqueCMFormatDescription *_inferenceInputFormatDescription;
    struct OpaqueVTPixelTransferSession *_inferenceInputPixelTransferSession;
    BWStillImageProcessorConfiguration *_redEyeReductionConfiguration;
    NSMutableDictionary *_redEyeReductionInputByPortType;
    BWStillImageOverCaptureProcessorControllerConfiguration *_overCaptureProcessorControllerConfiguration;
    BWStillImageOverCaptureProcessorInput *_overCaptureProcessorInput;
    NSObject<OS_dispatch_queue> *_overCaptureProcessorControllerQueue;
    CDStruct_79c71658 _overCaptureImageDimensions;
    long long _currentSettingsID;
    NSString *_currentCaptureRequestIdentifier;
    unsigned int _priority;
    NSObject<OS_dispatch_queue> *_emitQueue;
    BWFigVideoCaptureDevice *_device;
    BWStillImageNodeConfiguration *_nodeConfiguration;
    id <BWStillImageProcessingStatusDelegate> _referenceFrameSelectionDelegate;
    _Bool _deferredProcessingSupportEnabled;
    _Bool _deferredPhotoProcessorEnabled;
    int _deferredCompressionProfile;
    NSMutableDictionary *_deferredProcessorInputByPortType;
    BWPixelBufferPool *_ubOutputDeferredPool;
    struct opaqueCMSampleBuffer *_deepFusionProxySbuf;
    struct opaqueCMSampleBuffer *_deepFusionErrorRecoveryFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (_Bool)depthDataDeliveryEnabled;
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;
- (_Bool)redEyeReductionEnabled;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (int)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)setAlwaysAllowModifyingInputBuffers:(_Bool)arg1;
- (void)_resetProcessingState;
- (_Bool)semanticRenderingEnabled;
- (_Bool)alwaysAllowModifyingInputBuffers;
- (void)setSharedResources:(id)arg1;
- (id)sharedResources;
- (void)_setupProcessorCoordinator;
- (int)_setupProcessingStateWithSettings:(id)arg1 captureSettings:(id)arg2;
- (void)_emitReferenceFrameIfNeededForProcessorInput:(id)arg1;
- (void)_inferenceProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4;
- (void)_infoForCaptureType:(int)arg1 isSupportedCaptureTypeOut:(_Bool *)arg2 isFusionCaptureTypeOut:(_Bool *)arg3;
- (int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4;
- (void)_resetProcessingStateIfDone;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (void)_commitDeferredBuffer:(struct __CVBuffer *)arg1 bufferType:(unsigned long long)arg2 metadata:(id)arg3 processorInput:(id)arg4;
- (void)_waitForInferenceIfNeededForProcessorInput:(id)arg1;
- (void)_handleDeepFusionError:(int)arg1 processorInput:(id)arg2;
- (void)_processorControllerDidFinishProcessingInputForPortType:(id)arg1 processorType:(unsigned long long)arg2;
- (void)commitDeferredSkinMask:(struct __CVBuffer *)arg1 personMask:(struct __CVBuffer *)arg2 faceObservations:(id)arg3 processorInput:(id)arg4;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(_Bool)arg3;
- (_Bool)_emitReferenceFrameForProcessorInput:(id)arg1;
- (int)_scaleInferenceInputForRedEyeReductionFromPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)_setupDeferredProcessingWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3;
- (struct __CVBuffer *)processorController:(id)arg1 newOutputPixelBufferForProcessorInput:(id)arg2 type:(unsigned long long)arg3;
- (void)processorController:(id)arg1 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 type:(unsigned long long)arg3 processorInput:(id)arg4 err:(int)arg5;
- (void)processorController:(id)arg1 didFinishProcessingInput:(id)arg2 err:(int)arg3;
- (void)processorController:(id)arg1 didFinishProcessingBuffer:(struct __CVBuffer *)arg2 metadata:(id)arg3 type:(unsigned long long)arg4 processorInput:(id)arg5 err:(int)arg6;
- (void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(CDStruct_1b6d18a9)arg2 transform:(id)arg3 processorInput:(id)arg4;
- (void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
- (id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)stopAdaptiveBracketingForSettings:(id)arg1 withGroup:(int)arg2;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 wait:(_Bool)arg2;
- (void)processorController:(id)arg1 didDetermineReferenceFrame:(struct opaqueCMSampleBuffer *)arg2 processorInput:(id)arg3 err:(int)arg4;
- (void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void *)arg2 personMask:(const void *)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 err:(int)arg6;
- (id)initWithNodeConfiguration:(id)arg1 captureDevice:(id)arg2 sensorConfigurations:(id)arg3 inputPixelFormat:(unsigned int)arg4 retainedBufferCount:(int)arg5 outputBufferCount:(int)arg6 deferredProcessingSupportEnabled:(_Bool)arg7 deferredPhotoProcessorEnabled:(_Bool)arg8 figThreadPriority:(unsigned int)arg9;
- (void)setReferenceFrameSelectionDelegate:(id)arg1;
- (id)hdrReferenceFrameSelectionDelegate;
- (void)setFusionSupportEnabled:(_Bool)arg1;
- (_Bool)fusionSupportEnabled;
- (void)setDigitalFlashSupportEnabled:(_Bool)arg1;
- (_Bool)digitalFlashSupportEnabled;
- (void)setDeepFusionPreprocessingSupportEnabled:(_Bool)arg1;
- (_Bool)deepFusionPreprocessingSupportEnabled;
- (void)setDeepFusionSupportEnabled:(_Bool)arg1;
- (_Bool)deepFusionSupportEnabled;
- (void)setMaxDeepFusionOutputCount:(int)arg1;
- (int)maxDeepFusionOutputCount;
- (void)setSpatialOverCaptureSupportEnabled:(_Bool)arg1 overCaptureImageDimensions:(CDStruct_79c71658)arg2 overCapturePercentage:(float)arg3;
- (void)setSemanticRenderingEnabled:(_Bool)arg1 inferenceScheduler:(id)arg2;
- (void)setRedEyeReductionEnabled:(_Bool)arg1 inferenceScheduler:(id)arg2;
- (id)processorCoordinator;

@end
