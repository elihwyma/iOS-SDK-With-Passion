/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class BWInferenceEngine, BWInferenceScheduler, BWVideoFormat, NSArray, NSDictionary, NSString;

@interface BWUBInferenceController : BWStillImageProcessorController

{
    BWInferenceScheduler *_inferenceScheduler;
    _Bool _inferenceEnginePrepared;
    BWInferenceEngine *_inferenceEngine;
    BWVideoFormat *_inputFormat;
    NSDictionary *_inferenceOutputFormatByAttachedMediaKey;
}

@property (nonatomic, readonly) NSArray *providedAttachedMediaKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (struct __CVBuffer *)semanticSkinMatteFromSbuf:(struct opaqueCMSampleBuffer *)arg1;
+ (struct __CVBuffer *)lowResPersonSegmentationMaskFromSbuf:(struct opaqueCMSampleBuffer *)arg1;
+ (id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer *)arg1;
+ (id)faceLandmarksObservationsFromSbuf:(struct opaqueCMSampleBuffer *)arg1;

- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:(id)arg1;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepareWithPixelBufferPoolProvider:(id)arg1;
- (void)_releaseResources;
- (_Bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (int)_configureInferenceWithConfiguration:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;

@end
