/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput

{
    struct opaqueCMSampleBuffer *_inferenceImage;
    struct opaqueCMSampleBuffer *_propagationImage;
    _Bool _generateSemanticSkinMatte;
    _Bool _generateLowResPersonSegmentationMask;
    _Bool _generateFaceObservations;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer *inferenceImage;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *propagationImage;
@property (nonatomic) _Bool generateSemanticSkinMatte;
@property (nonatomic) _Bool generateLowResPersonSegmentationMask;
@property (nonatomic) _Bool generateFaceObservations;

- (void)dealloc;
- (void)addInferenceImage:(struct opaqueCMSampleBuffer *)arg1;
- (void)addPropagationImage:(struct opaqueCMSampleBuffer *)arg1;

@end
