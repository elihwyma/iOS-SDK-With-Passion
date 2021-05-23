/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeOutput, BWStillImageCaptureSettings, FigCapturePixelConverter, FigCaptureStillImageSettings, NSDictionary, NSMutableDictionary, NSString;

@protocol BWStillImageProcessingStatusDelegate;

@interface BWGNRNode : BWNode

{
    _Bool _sisEnabled;
    _Bool _oisEnabled;
    _Bool _hdrEnabled;
    _Bool _processingLTMHDRFusion;
    BWNodeOutput *_bravoHDRDisparityOutput;
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    NSString *_portType;
    NSString *_sensorID;
    NSDictionary *_sensorIDDictionary;
    NSString *_telephotoPortType;
    NSString *_telephotoSensorID;
    NSDictionary *_telephotoSensorIDDictionary;
    id <BWStillImageProcessingStatusDelegate> _hdrReferenceFrameSelectionDelegate;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _processingType;
    _Bool _clientExpectsPreBracketFrame;
    _Bool _expectsPreBracketFrame;
    _Bool _receivedPreBracketFrame;
    unsigned int _expectedFrameCount;
    unsigned int _receivedFrameCount;
    _Bool _receivedAllFrames;
    int _receivedReferenceFrameBracketedCaptureSequenceNumber;
    int _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    _Bool _processingHDREV0BracketFrame;
    int _hdrEV0BracketCaptureIdentifier;
    int _hdrDisparityBracketedCaptureSequenceNumber;
    NSMutableDictionary *_inputAttachedMedia;
    NSMutableDictionary *_presentationTimeStampsForInputFrames;
    struct opaqueCMSampleBuffer *_collectedUnprocessedPreBracketHDR;
    FigCapturePixelConverter *_stereoFusedGNRHDRPixelConverter;
    long long _previouslyCompletedFusionSettingsID;
    _Bool _usesHDRPreBracketFrameForErrorRecoveryDownstream;
    _Bool _allowedToModifyInputBuffers;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)hdrReferenceFrameSelectionDelegate;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (int)_setupSampleBufferProcessor;
- (void)setAttachesInputBracketToOutputSampleBuffer:(_Bool)arg1;
- (_Bool)attachesInputBracketToOutputSampleBuffer;
- (void)setAllowedToModifyInputBuffers:(_Bool)arg1;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)allowedToModifyInputBuffers;
- (id)initWithSISEnabled:(_Bool)arg1 OISEnabled:(_Bool)arg2 LTMHDREnabled:(_Bool)arg3 processingLTMHDRFusion:(_Bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(_Bool)arg1;
- (id)_initWithSISEnabled:(_Bool)arg1 OISEnabled:(_Bool)arg2 LTMHDREnabled:(_Bool)arg3 processingLTMHDRFusion:(_Bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10 sbpCreationFunction:(CDUnknownFunctionPointerType)arg11 treatSoftErrorsAsHardErrors:(_Bool)arg12;
- (unsigned int)_worstCaseFrameRetainCount;
- (void)_setExpectedFrameCountForPortType:(id)arg1;
- (int)_gnrProcessingTypeWithMetadataDictionary:(id)arg1;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (struct opaqueCMSampleBuffer *)_copyAndZoomSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingNormalizedZoomRectangle:(struct CGRect)arg2;
- (_Bool)_isBravoHDRDepthDataCapture;
- (_Bool)_receivedExpectedAmountOfFrames;
- (_Bool)_isBravoTelephotoHDRDepthDataCapture;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (id)sbpOptionsDictionary;
- (void)_handleSBPReferenceFrame:(int)arg1;
- (_Bool)_isBravoDepthDataCapture;
- (_Bool)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (void)setHdrReferenceFrameSelectionDelegate:(id)arg1;

@end
