/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorController.h>

@class BWStillImageOverCaptureProcessorControllerConfiguration, BWStillImageOverCaptureProcessorRequest, FigStateMachine, FigStillStereoStitchingProcessor, NSMutableArray, NSSet, NSString;

@interface BWStillImageOverCaptureProcessorController : BWStillImageProcessorController

{
    BWStillImageOverCaptureProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    FigStillStereoStitchingProcessor *_processor;
    struct OpaqueVTPixelTransferSession *_pixelTransferSession;
    struct opaqueCMFormatDescription *_outputSbufFormatDescription;
    NSMutableArray *_requestQueue;
    BWStillImageOverCaptureProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:(id)arg1;
- (void)_process;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)_processorOptions;
- (void)_resetProcessor;
- (void)_updateStateIfNeeded;
- (void)_serviceNextRequest;
- (void)_setupProcessor;
- (void)input:(id)arg1 addFrame:(struct opaqueCMSampleBuffer *)arg2;
- (int)_loadAndConfigureStereoStitcherProcessor;
- (int)_processDualCameraStereoStitchingWithOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 primaryImageZoomCropRect:(struct CGRect)arg2 overCaptureImageTypeOut:(int *)arg3 overCaptureImageConfidenceScoreOut:(unsigned int *)arg4;
- (int)_processSingleCameraOverCaptureWithOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 primaryImageZoomCropRect:(struct CGRect)arg2 overCaptureImageTypeOut:(int *)arg3 overCaptureImageConfidenceScoreOut:(unsigned int *)arg4;
- (_Bool)_horizonLinePresentInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 horizonLineAngleInDegreesOut:(float *)arg2 horizonLineVerticalCenterlineIntersectionOut:(float *)arg3;
- (void)_addOverCaptureImageMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer *)arg1 inputRect:(struct CGRect)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 outputDimensions:(CDStruct_79c71658)arg4;
- (int)_generatePartialOverCaptureImageFromInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 primaryImageZoomCropRect:(struct CGRect)arg3 validBufferRect:(struct CGRect)arg4;
- (int)_generateFallbackOverCaptureImageWithWide:(struct opaqueCMSampleBuffer *)arg1 narrowSbuf:(struct opaqueCMSampleBuffer *)arg2 outputSbuf:(struct opaqueCMSampleBuffer *)arg3 primaryImageZoomCropRect:(struct CGRect)arg4 onlyCrop:(_Bool)arg5;
- (float)_zoomAdjustedHorizonLineVerticalCenterlineIntersection:(float)arg1 finalCropRect:(struct CGRect)arg2;

@end
