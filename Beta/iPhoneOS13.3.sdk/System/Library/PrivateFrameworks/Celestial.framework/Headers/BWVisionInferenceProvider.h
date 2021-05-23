/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceVideoRequirement, BWVisionInferenceContext, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWVisionInferenceProvider : NSObject

{
    int _type;
    int _executionTarget;
    NSSet *_preventionReasons;
    NSArray *_prototypeRequests;
    BWVisionInferenceContext *_context;
    unsigned long long _indexOfRequestForMaximumNumberOfFaces;
    unsigned long long _maximumNumberOfFaces;
    _Bool _alwaysExecuteForRedEyeReduction;
    NSMapTable *_requestIndexByRequest;
    NSMutableDictionary *_requestIndexByRequirement;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_cloneVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    NSMutableArray *_outputMetadataRequirements;
    BWInferenceVideoRequirement *_primaryInputVideoRequirement;
    _Bool _executesRequestsIndividually;
}

@property (retain, nonatomic) BWInferenceVideoRequirement *primaryInputVideoRequirement;
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
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 requests:(id)arg2 executesRequestsIndividually:(_Bool)arg3 executionTarget:(int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6;
- (id)bindInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 preparedByAttachedMediaKey:(id)arg3 withVideoFormatProvider:(CDUnknownBlockType)arg4;
- (id)bindIdealInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2;
- (id)bindInputForRequest:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;

@end
