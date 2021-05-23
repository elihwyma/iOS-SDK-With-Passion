/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWStillImageCaptureSettings, FigCalibration, NSDictionary, NSMutableDictionary, NSSet;

@interface BWStillImageCameraCalibrationDataNode : BWNode

{
    NSDictionary *_sensorConfigurationsByPortType;
    _Bool _propagatesDetectedObjects;
    NSDictionary *_baseZoomFactorsByPortType;
    NSSet *_expectedPortTypes;
    BWStillImageCaptureSettings *_captureSettings;
    int _processingMode;
    NSMutableDictionary *_inputSbufsByPortType;
    FigCalibration *_calibrationProcessor;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)baseZoomFactorsByPortType;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (id)initWithSensorConfigurationsByPortType:(id)arg1;
- (void)setPropagatesDetectedObjects:(_Bool)arg1;
- (void)_finishPendingProcessing;
- (int)_loadAndConfigureCalibrationBundle;
- (void)_resolveProcessingMode;
- (_Bool)_receivedExpectedInputsForCaptureRequest;
- (void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 auxiliarySampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_propagateDetectedObjects;
- (id)processorOptions;
- (id)_sensorConfigurationWithPortraitTuningParameters;
- (_Bool)propagatesDetectedObjects;

@end
