/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class FigCaptureStillImageSettings, NSArray, NSDictionary;

@interface BWSISNode : BWNode

{
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    NSDictionary *_cameraTuningDictionary;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_noiseModelParamsDictionary;
    NSDictionary *_fusionParamsDictionary;
    int _fusionScheme;
    _Bool _alwaysRequestsPreBracketedEV0;
    _Bool _allowExperimentalOverrides;
    int _lensShadingCorrectionMode;
    int _maxIntegrationTimeLimitMsec;
    float _bracketGainCap;
    NSArray *_exposureValues;
    NSArray *_afWindowParamsArray;
    int _sisBracketCount;
    NSArray *_oisExposureDurationTypes;
    int _oisBracketCount;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    _Bool _preBracketedFrameReceived;
    int _numberFramesReceived;
    int _lastFusionTypeUsed;
    _Bool _livePhotoSupported;
    _Bool _OISSupported;
    _Bool _allowAllocationsAtPrepareTime;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (int)_setupSampleBufferProcessor;
- (void)setAttachesInputBracketToOutputSampleBuffer:(_Bool)arg1;
- (_Bool)attachesInputBracketToOutputSampleBuffer;
- (void)setAlwaysRequestsPreBracketedEV0:(_Bool)arg1;
- (_Bool)alwaysRequestsPreBracketedEV0;
- (id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(CDUnknownFunctionPointerType)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(_Bool)arg5;
- (int)_unpackSISOptions;
- (_Bool)livePhotoSupported;
- (_Bool)OISSupported;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3;
- (void)setLivePhotoSupported:(_Bool)arg1;
- (void)setOISSupported:(_Bool)arg1;
- (void)setAllowAllocationsAtPrepareTime:(_Bool)arg1;
- (_Bool)allowAllocationsAtPrepareTime;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2;

@end
