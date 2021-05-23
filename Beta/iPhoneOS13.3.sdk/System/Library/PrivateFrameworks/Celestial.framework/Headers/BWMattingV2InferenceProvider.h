/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceMetadataRequirement, BWInferenceVideoRequirement, FigMatting, NSArray, NSDictionary, NSMutableArray, NSSet, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable, MTLCommandQueue;

@interface BWMattingV2InferenceProvider : NSObject

{
    NSDictionary *_sensorConfigurationsByPortType;
    FigMatting *_mattingProcessor;
    int _mattingProcessorVersion;
    int _mattingTuningConfiguration;
    _Bool _submitWithoutSynchronization;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    BWInferenceVideoRequirement *_primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement *_depthInputVideoRequirement;
    BWInferenceVideoRequirement *_disparityInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationOutputVideoRequirement;
    BWInferenceVideoRequirement *_refinedDepthOutputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsHairInputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsSkinInputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsTeethInputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsHairOutputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsSkinOutputVideoRequirement;
    BWInferenceVideoRequirement *_personSemanticsTeethOutputVideoRequirement;
    BWInferenceMetadataRequirement *_faceSegmentsWithLandmarksMetadataRequirement;
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <BWInferenceExecutable> executable;
@property (nonatomic, readonly) id <BWInferenceSubmittable> submittable;
@property (nonatomic, readonly) id <BWInferenceExtractable> extractable;
@property (nonatomic, readonly) id <BWInferencePropagatable> propagatable;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int executionTarget;
@property (copy, nonatomic, readonly) NSSet *preventionReasons;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)newStorage;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (int)prewarmUsingLimitedMemory:(_Bool)arg1;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)_loadMattingProcessor;
- (int)_configureMattingProcessor;
- (id)_processorOptions;
- (struct __CVBuffer *)_outputPixelBufferForOutputVideoRequirement:(id)arg1 storage:(id)arg2 isMatte:(_Bool)arg3;
- (void)propagateMattingOutputToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 storage:(id)arg2;
- (id)mutableInputVideoRequirements;
- (id)mutableOutputVideoRequirements;
- (int)setInputsAndOutputsOnMattingProcessor:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 storage:(id)arg3;

@end
