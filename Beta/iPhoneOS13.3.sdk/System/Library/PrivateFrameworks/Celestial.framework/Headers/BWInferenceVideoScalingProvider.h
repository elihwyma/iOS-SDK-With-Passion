/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceVideoRequirement, FigM2MController, NSArray, NSDictionary, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWInferenceVideoScalingProvider : NSObject

{
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
    NSDictionary *_colorSpaceProperties;
    _Bool _applyUprightExifOrientation;
    _Bool _applyValidBufferRect;
    _Bool _computeAndApplyAspectRatioCrop;
    FigM2MController *_scalerController;
    float _customFiltersLastUsedHorizontalRatio;
    float _customFiltersLastUsedVerticalRatio;
    _Bool _enableFencing;
    float _outputAspectRatio;
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
@property (nonatomic, readonly) _Bool mustExecuteWhenAllowed;

+ (void)initialize;

- (void)dealloc;
- (id)newStorage;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingStorage:(id)arg2 withExecutionTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 enableFencing:(_Bool)arg3;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 executionTime:(CDStruct_1b6d18a9)arg2;
- (void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 destinationWidth:(unsigned long long)arg3 destinationHeight:(unsigned long long)arg4;

@end
