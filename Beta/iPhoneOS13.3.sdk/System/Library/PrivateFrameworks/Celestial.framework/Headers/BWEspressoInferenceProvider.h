/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWEspressoInferenceContext, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWEspressoInferenceProvider : NSObject

{
    int _type;
    int _executionTarget;
    NSSet *_preventionReasons;
    NSURL *_networkURL;
    BWEspressoInferenceContext *_context;
    struct OpaqueFigCaptureISPProcessingSession *_ispProcessingSession;
    void *_espressoPlan;
    CDStruct_2bc666a5 _espressoNetwork;
    int _espressoPriority;
    NSMutableDictionary *_bindingNamesByRequirement;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_cloneVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    NSMutableArray *_outputMetadataRequirements;
    NSMutableArray *_pixelBuffersLockedDuringExecution;
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
- (id)newStorage;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (int)prewarmUsingLimitedMemory:(_Bool)arg1;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withSubmissionTime:(CDStruct_1b6d18a9)arg3 workQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (int)_mapSchedulerToEspressoPriority:(unsigned int)arg1;
- (int)_espressoStorageTypeForExecutionTarget:(int)arg1;
- (int)_bindPixelBuffer:(struct __CVBuffer *)arg1 asAccelerateImageForRequirement:(id)arg2 withBindingName:(id)arg3;
- (int)_prepareForInferenceWithWorkQueue:(id)arg1;
- (int)_ensureEspressoBindingsUsingStorage:(id)arg1;
- (id)initWithType:(int)arg1 networkURL:(id)arg2 context:(id)arg3 executionTarget:(int)arg4 schedulerPriority:(unsigned int)arg5 preventionReasons:(id)arg6 resourceProvider:(id)arg7;
- (id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;

@end
