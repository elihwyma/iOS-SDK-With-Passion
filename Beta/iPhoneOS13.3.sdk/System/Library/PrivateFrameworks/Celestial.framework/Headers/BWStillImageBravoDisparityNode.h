/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, BWStillImageCaptureSettings, BWStillImageNodeConfiguration, FigCaptureStillImageSettings, FigDisparityGenerator, NSDictionary;

@interface BWStillImageBravoDisparityNode : BWNode

{
    NSDictionary *_sensorConfigurationsByPortType;
    FigDisparityGenerator *_disparityGenerator;
    BWNodeInput *_wideInput;
    BWNodeInput *_telephotoInput;
    unsigned long long _disparityMapWidth;
    unsigned long long _disparityMapHeight;
    struct opaqueCMFormatDescription *_disparityFormatDescription;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _expectedDisparityCount;
    int _deliveredDisparityCount;
    int _processingMode;
    struct opaqueCMSampleBuffer *_teleSbuf;
    struct opaqueCMSampleBuffer *_wideSbuf;
    _Bool _emitTeleFrame;
    _Bool _emitWideFrame;
    BWNodeError *_errorForWide;
    BWNodeError *_errorForTele;
    _Bool _shouldComputeDisparityWhenCalibrationFails;
    _Bool _disparityInputIsRaw;
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWNodeInput *_disparityFromReferenceFramesTelephotoFusedInput;
}

@property (nonatomic, readonly) BWNodeInput *wideInput;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeInput *disparityFromReferenceFramesTelephotoFusedInput;

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
- (id)processorOptionsDictionary;
- (void)_clearCaptureRequestState;
- (void)setAttachesInputBracketToOutputSampleBuffer:(_Bool)arg1;
- (_Bool)attachesInputBracketToOutputSampleBuffer;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 outputDisparityBufferCount:(int)arg5;
- (void)setShouldComputeDisparityWhenCalibrationFails:(_Bool)arg1;
- (void)_finishPendingProcessing;
- (void)_resolveProcessingMode;
- (id)_sensorConfigurationWithPortraitTuningParameters;
- (int)_loadAndConfigureDisparityGenerator;
- (void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromInput:(id)arg3;
- (void)_processBuffersForDisparityIfNecessary;
- (void)_computeDisparityForTeleBuffer:(struct opaqueCMSampleBuffer *)arg1 wideBuffer:(struct opaqueCMSampleBuffer *)arg2 attachToOutputBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (int)_OSStatusFromDisparityResult:(int)arg1;
- (_Bool)shouldComputeDisparityWhenCalibrationFails;

@end
