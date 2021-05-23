/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWUBProcessorInput, UBDeepFusionOutput, UBFusionOutput;

@protocol BWUBProcessorControllerDelegate;

@interface BWUBProcessorRequest : NSObject

{
    BWUBProcessorInput *_input;
    UBFusionOutput *_output;
    UBDeepFusionOutput *_deepFusionOutput;
    _Bool _processErrorRecoveryFrame;
    _Bool _processOriginalImage;
    id <BWUBProcessorControllerDelegate> _delegate;
    int _err;
    int _numberOfFramesAddedForMultiFrameProcessing;
    float _totalExposureTimesOfFramesAddedForMultiFrameProcessing;
    float _minExposureTimesOfFramesAddedForMultiFrameProcessing;
    float _maxExposureTimesOfFramesAddedForMultiFrameProcessing;
    _Bool _deliveredDeferredProxyImage;
}

@property (nonatomic, readonly) BWUBProcessorInput *input;
@property (nonatomic, readonly) UBFusionOutput *output;
@property (nonatomic, readonly) UBDeepFusionOutput *deepFusionOutput;
@property (nonatomic) int err;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) _Bool deliveredDeferredProxyImage;

- (void)dealloc;
- (id)description;
- (id)delegate;
- (unsigned long long)imageType;
- (_Bool)receivedAllFrames;
- (int)expectedFrameCount;
- (unsigned int)processingType;
- (_Bool)keepFramesUntilReferenceFrameSelected;
- (id)initWithInput:(id)arg1 output:(id)arg2 deepFusionOutput:(id)arg3 processErrorRecoveryFrame:(_Bool)arg4 processOriginalImage:(_Bool)arg5 delegate:(id)arg6;
- (_Bool)processErrorRecoveryFrame;
- (_Bool)processOriginalImage;
- (unsigned long long)fusionErrorRecoveryImageType;
- (_Bool)useFrameForMultiFrameProcessing:(struct opaqueCMSampleBuffer *)arg1;

@end
