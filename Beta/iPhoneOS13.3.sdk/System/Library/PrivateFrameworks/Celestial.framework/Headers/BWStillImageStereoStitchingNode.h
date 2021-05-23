/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, BWNodeOutput, BWStillImageCaptureSettings, BWStillImageNodeConfiguration, FigCaptureStillImageSettings, FigStillImageSharedProcessingResources, FigStillStereoStitchingProcessor, NSArray, NSDictionary;

@interface BWStillImageStereoStitchingNode : BWNode

{
    NSArray *_sensorConfigurations;
    FigStillImageSharedProcessingResources *_sharedResources;
    FigStillStereoStitchingProcessor *_processor;
    struct OpaqueVTPixelTransferSession *_pixelTransferSession;
    BWStillImageNodeConfiguration *_nodeConfiguration;
    float _overCaptureMultiplier;
    BWNodeInput *_wideFieldOfViewInput;
    BWNodeInput *_narrowFieldOfViewInput;
    BWNodeOutput *_overCaptureOutput;
    BWNodeOutput *_narrowFieldOfViewOutput;
    struct opaqueCMFormatDescription *_outputSbufFormatDescription;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _overCaptureMode;
    struct opaqueCMSampleBuffer *_wideFieldOfViewSbuf;
    struct opaqueCMSampleBuffer *_narrowFieldOfViewSbuf;
    BWNodeError *_wideFieldOfViewError;
    BWNodeError *_narrowFieldOfViewError;
    NSDictionary *_baseZoomFactorByPortType;
    _Bool _stereoStitchingEnabled;
}

@property (nonatomic, readonly) BWNodeInput *wideFieldOfViewInput;
@property (nonatomic, readonly) BWNodeInput *narrowFieldOfViewInput;
@property (nonatomic, readonly) BWNodeOutput *overCaptureOutput;
@property (nonatomic, readonly) BWNodeOutput *narrowFieldOfViewOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)setSharedResources:(id)arg1;
- (id)sharedResources;
- (id)_processorOptions;
- (void)_clearCaptureRequestState;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurations:(id)arg2 overCapturePercentage:(float)arg3 overCaptureOutputDimensions:(CDStruct_79c71658)arg4 stereoStitchingEnabled:(_Bool)arg5;
- (void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (int)_processDualCameraStereoStitchingWithOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 primaryImageZoomCropRect:(struct CGRect)arg2 overCaptureImageTypeOut:(int *)arg3 overCaptureImageConfidenceScoreOut:(unsigned int *)arg4;
- (int)_processSingleCameraOverCaptureWithOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 primaryImageZoomCropRect:(struct CGRect)arg2 overCaptureImageTypeOut:(int *)arg3 overCaptureImageConfidenceScoreOut:(unsigned int *)arg4;
- (_Bool)_horizonLinePresentInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 horizonLineAngleInDegreesOut:(float *)arg2 horizonLineVerticalCenterlineIntersectionOut:(float *)arg3;
- (void)_addOverCaptureImageMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer *)arg1 inputRect:(struct CGRect)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 outputDimensions:(CDStruct_79c71658)arg4;
- (int)_generatePartialOverCaptureImageFromInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 primaryImageZoomCropRect:(struct CGRect)arg3 validBufferRect:(struct CGRect)arg4;
- (int)_generateFallbackOverCaptureImageWithWide:(struct opaqueCMSampleBuffer *)arg1 narrowSbuf:(struct opaqueCMSampleBuffer *)arg2 outputSbuf:(struct opaqueCMSampleBuffer *)arg3 primaryImageZoomCropRect:(struct CGRect)arg4 onlyCrop:(_Bool)arg5;
- (float)_zoomAdjustedHorizonLineVerticalCenterlineIntersection:(float)arg1 finalCropRect:(struct CGRect)arg2;
- (int)_loadAndConfigureProcessor;
- (void)_emitNodeErrorForError:(int)arg1 fromNodeOutput:(id)arg2;
- (void)_processOverCaptureIfNecessary;

@end
