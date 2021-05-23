/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSSet, NSString, VCPCaptureAnalysisSession;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWVideoProcessingInferenceProvider : NSObject

{
    int _type;
    int _executionTarget;
    NSSet *_preventionReasons;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_cloneVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    NSMutableArray *_outputMetadataRequirements;
    unsigned long long _analysisType;
    VCPCaptureAnalysisSession *_vcpSession;
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
- (id)initWithType:(int)arg1 analysisType:(unsigned long long)arg2 executionTarget:(int)arg3 schedulerPriority:(unsigned int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6;
- (id)bindVideoInputFromAttachedMediaUsingKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 withVideoFormatProvider:(CDUnknownBlockType)arg3;
- (id)bindOutputMetadataKeys:(id)arg1;

@end
