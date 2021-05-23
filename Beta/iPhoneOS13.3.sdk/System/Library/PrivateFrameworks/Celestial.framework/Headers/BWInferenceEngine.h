/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWEspressoInferenceAdapter, BWEspressoInferenceContext, BWFigVideoCaptureDevice, BWInferenceDependencyProvider, BWInferenceScheduler, BWVideoProcessingInferenceAdapter, BWVisionInferenceAdapter, BWVisionInferenceContext, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface BWInferenceEngine : NSObject

{
    BWInferenceScheduler *_scheduler;
    unsigned long long _connection;
    unsigned int _priority;
    BWInferenceDependencyProvider *_dependencyProvider;
    BWEspressoInferenceAdapter *_espressoAdapter;
    BWEspressoInferenceContext *_cpuContext;
    BWEspressoInferenceContext *_gpuContext;
    BWEspressoInferenceContext *_convContext;
    BWEspressoInferenceContext *_aneContext;
    BWVisionInferenceAdapter *_visionAdapter;
    BWVisionInferenceContext *_visionContext;
    BWVideoProcessingInferenceAdapter *_videoProcessingAdapter;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureISPProcessingSession *_ispProcessingSession;
    NSMutableArray *_inferenceRequirements;
    NSMutableArray *_videoRequirementsPossiblyReceivingAttachedMedia;
    NSMutableArray *_videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableDictionary *_lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary *_lazyOutputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary *_scalingRequirementByVideoFormatByAttachedMediaKey;
    NSMutableSet *_unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
    _Bool _requiresDeviceOrientationMetadata;
}

@property (copy, nonatomic, readonly) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (nonatomic, readonly) _Bool requiresDeviceOrientationMetadata;
@property (nonatomic, readonly, getter=isConfiguredForInference) _Bool configuredForInference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)isNeuralEngineSupported;
+ (_Bool)isConvolutionEngineSupported;

- (void)dealloc;
- (id)visionContextForExecutionTarget:(int)arg1;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1;
- (id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (int)addInferenceOfType:(int)arg1 version:(CDStruct_08002bce)arg2 configuration:(id)arg3;
- (int)prewarmInferencesUsingLimitedMemory:(_Bool)arg1;
- (id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3 shareIntermediateBuffer:(_Bool)arg4;
- (int)prepareForInputVideoFormat:(id)arg1 attachedMediaKey:(id)arg2;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (int)prepareForInferenceWithFormatProvider:(id)arg1 pixelBufferPoolProvider:(id)arg2;
- (int)prepareForInferenceWithFormatProvider:(id)arg1;
- (struct OpaqueFigCaptureISPProcessingSession *)ispProcessingSessionForExecutionTarget:(int)arg1;
- (void)_invalidateProcessingSessionIfNecessary;
- (void)_prepareProvidedVideoRequirementsIfNecessary;
- (void)_prepareDependenciesByRequirementIfNecessary;
- (int)_prepareProcessingSessionIfNecessary;
- (void)_addInferenceRequirementForProvider:(id)arg1 configuration:(id)arg2;
- (id)espressoContextForExecutionTarget:(int)arg1;

@end
