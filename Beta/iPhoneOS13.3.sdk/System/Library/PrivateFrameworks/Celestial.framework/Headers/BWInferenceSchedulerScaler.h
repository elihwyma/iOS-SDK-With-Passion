/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class BWInferenceVideoRequirement, NSArray, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceScalingProvider, BWInferenceSubmittable;

@interface BWInferenceSchedulerScaler : NSObject <Swift>

{
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
    id <BWInferenceScalingProvider> _provider;
}

@property (nonatomic, readonly) BWInferenceVideoRequirement *inputRequirement;
@property (nonatomic, readonly) NSArray *outputRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <BWInferenceExecutable> executable;
@property (nonatomic, readonly) id <BWInferenceSubmittable> submittable;
@property (nonatomic, readonly) id <BWInferenceExtractable> extractable;
@property (nonatomic, readonly) id <BWInferencePropagatable> propagatable;
@property (nonatomic, readonly) _Bool mustExecuteWhenAllowed;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)prepare;
- (id)newStorage;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_newProviderForWithOptions:(unsigned long long)arg1;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 executionTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 options:(unsigned long long)arg3;

@end
