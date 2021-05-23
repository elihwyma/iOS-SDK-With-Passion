/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWPixelBufferPool, BWStillImageCaptureSettings, FigCapturePixelConverter, FigCaptureStillImageSettings, NSArray, NSDictionary, NSMutableArray;

@interface BWHDRNode : BWNode

{
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    struct opaqueCMSampleBuffer *_pendingBracketBuffers[3];
    _Bool _preBracketedFrameExpected;
    _Bool _preBracketedFrameReceived;
    NSMutableArray *_receivedNodeErrors;
    unsigned int _emittedFrameOrErrorCount;
    _Bool _alwaysRequestsPreBracketedEV0;
    _Bool _supportsStereoFusionCaptures;
    FigCapturePixelConverter *_stereoFusionPixelConverter;
    BWPixelBufferPool *_telephotoHDREV0DisparityBufferPool;
    struct opaqueCMFormatDescription *_telephotoHDREV0DisparityFormatDescription;
    struct OpaqueVTPixelTransferSession *_telephotoHDREV0DisparityCopySession;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(CDUnknownFunctionPointerType)arg3;
- (void)_clearCaptureRequestState;
- (int)_setupSampleBufferProcessor;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (_Bool)_receivedExpectedNumberOfInputFramesOrErrors;
- (void)_emitNodeErrorToReportFailedOutputFrame;
- (void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_emitNodeErrorsIfNecessary;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (void)setAttachesInputBracketToOutputSampleBuffer:(_Bool)arg1;
- (_Bool)attachesInputBracketToOutputSampleBuffer;
- (void)setAlwaysRequestsPreBracketedEV0:(_Bool)arg1;
- (_Bool)alwaysRequestsPreBracketedEV0;
- (void)setSupportsStereoFusionCaptures:(_Bool)arg1;
- (_Bool)supportsStereoFusionCaptures;

@end
