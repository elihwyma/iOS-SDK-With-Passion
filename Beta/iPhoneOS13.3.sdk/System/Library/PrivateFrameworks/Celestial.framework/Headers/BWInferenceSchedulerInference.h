/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable;

@interface BWInferenceSchedulerInference : NSObject <Swift>

{
    unsigned long long _identifier;
    id <BWInferenceProvider> _provider;
    unsigned int _priority;
    float _maximumFramesPerSecond;
    _Atomic double _previousExecutionTimeInSeconds;
}

@property (nonatomic, readonly) id <BWInferenceProvider> provider;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) float maximumFramesPerSecond;
@property (nonatomic, readonly) CDStruct_1b6d18a9 previousExecutionTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <BWInferenceExecutable> executable;
@property (nonatomic, readonly) id <BWInferenceSubmittable> submittable;
@property (nonatomic, readonly) id <BWInferenceExtractable> extractable;
@property (nonatomic, readonly) id <BWInferencePropagatable> propagatable;
@property (nonatomic, readonly) _Bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)prepare;
- (id)newStorage;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withSubmissionTime:(CDStruct_1b6d18a9)arg3 workQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 executionTime:(CDStruct_1b6d18a9)arg2;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 withExecutionTime:(CDStruct_1b6d18a9)arg4;
- (id)initWithInferenceRequirement:(id)arg1;

@end
