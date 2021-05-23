/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceVideoRequirement, FigMatting, NSArray, NSDictionary, NSSet, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable, MTLCommandQueue;

@interface BWMattingInferenceProvider : NSObject

{
    BWInferenceVideoRequirement *_primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationInputVideoRequirement;
    BWInferenceVideoRequirement *_depthInputVideoRequirement;
    BWInferenceVideoRequirement *_disparityInputVideoRequirement;
    NSArray *_inputVideoRequirements;
    BWInferenceVideoRequirement *_segmentationOutputVideoRequirement;
    BWInferenceVideoRequirement *_refinedDepthOutputVideoRequirement;
    NSArray *_outputVideoRequirements;
    NSDictionary *_tuningParameters;
    FigMatting *_mattingProcessor;
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
- (id)processorOptionsDictionary;

@end
