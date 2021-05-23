/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@class NSArray;

@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorInput

{
    id <BWRedEyeReductionControllerInputDelegate> _inputDelegate;
    id <BWStillImageProcessorControllerDelegate> _processorControllerDelegate;
    struct opaqueCMSampleBuffer *_primaryImage;
    struct opaqueCMSampleBuffer *_auxImage;
    NSArray *_faceObservations;
}

@property (retain, nonatomic) id <BWRedEyeReductionControllerInputDelegate> inputDelegate;
@property (retain, nonatomic) id <BWStillImageProcessorControllerDelegate> processorControllerDelegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *primaryImage;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *auxImage;
@property (nonatomic, readonly) NSArray *faceObservations;

+ (_Bool)requiresInferencesFromFrame:(struct opaqueCMSampleBuffer *)arg1;

- (void)dealloc;
- (void)addFrame:(struct opaqueCMSampleBuffer *)arg1 faceObservations:(id)arg2;

@end
