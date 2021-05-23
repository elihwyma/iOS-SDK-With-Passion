/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class BWUBProcessorControllerConfiguration, BWUBProcessorRequest, FigStateMachine, NSDictionary, NSMutableArray, NSSet, NSString, UBPrepareDescriptor, UBProcessor;

@interface BWUBProcessorController : BWStillImageProcessorController

{
    BWUBProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    UBProcessor *_ubProcessor;
    UBPrepareDescriptor *_prepareDescriptor;
    Class _ubFusionOutputClass;
    Class _ubProgressiveBracketingStatisticsClass;
    Class _ubProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _ubDeepFusionOutputClass;
    UBPrepareDescriptor *_deepFusionPrepareDescriptor;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    struct opaqueCMFormatDescription *_inferenceInputFormatDescription;
    NSMutableArray *_requestQueue;
    BWUBProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)finishProcessingCurrentInputNow;
- (void)cancelProcessing;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(_Bool)arg3;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(_Bool)arg3 processOriginalImage:(_Bool)arg4;
- (void)_resetProcessor;
- (void)_updateStateIfNeeded;
- (void)_serviceNextRequest;
- (void)_setupProcessor;
- (void)input:(id)arg1 addFrame:(struct opaqueCMSampleBuffer *)arg2 isReferenceFrame:(_Bool)arg3;
- (void)inputReceivedAllFrames:(id)arg1;
- (int)_loadSetupAndPrepareUBProcessor;
- (int)_setupProcessorForProcessingType:(unsigned int)arg1;
- (int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferOut:(struct opaqueCMSampleBuffer **)arg2;
- (void)_processUBFusion;
- (struct opaqueCMSampleBuffer *)_newOutputSampleBufferWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 formatDescriptionInOut:(const struct opaqueCMFormatDescription **)arg3 metadataToMerge:(id)arg4;
- (void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 outputMetadata:(id)arg4 error:(int)arg5;
- (id)processorGetInferenceResults:(id)arg1;
- (void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
- (void)_processSingleImage;
- (void)_processUBOriginalImage;
- (void)_processLowLightFusion;
- (void)_processDeepFusion;

@end
