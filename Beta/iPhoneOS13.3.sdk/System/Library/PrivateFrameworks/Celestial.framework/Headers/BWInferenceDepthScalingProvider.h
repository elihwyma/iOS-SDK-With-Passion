/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceVideoRequirement, NSArray, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWInferenceDepthScalingProvider : NSObject

{
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
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

- (void)dealloc;
- (id)newStorage;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2;

@end
