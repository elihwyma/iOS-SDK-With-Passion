/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeInput, BWNodeOutput, BWStillImageCaptureSettings, FigCaptureStillImageSettings, NSDictionary, NSMutableArray;

@interface BWStereoFusionNode : BWNode

{
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    NSDictionary *_telephotoSensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BWNodeInput *_wideInput;
    BWNodeInput *_telephotoInput;
    BWNodeOutput *_defaultOutput;
    BWNodeOutput *_stereoHDROutput;
    _Bool _expectsWideFrame;
    _Bool _receivedWideFrame;
    _Bool _expectsTelephotoFrame;
    _Bool _receivedTelephotoFrame;
    _Bool _performSBPProcessing;
    NSDictionary *_sbpZoomRectangleDictionary;
    BWNodeInput *_masterInput;
    NSMutableArray *_nodeErrorsForWide;
    NSMutableArray *_nodeErrorsForTelephoto;
}

@property (nonatomic, readonly) BWNodeInput *wideInput;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *stereoHDROutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (int)_setupSampleBufferProcessor;
- (void)setAttachesInputBracketToOutputSampleBuffer:(_Bool)arg1;
- (_Bool)attachesInputBracketToOutputSampleBuffer;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (id)sbpOptionsDictionary;
- (id)_initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 sbpCreationFunction:(CDUnknownFunctionPointerType)arg3 treatSoftErrorsAsHardErrors:(_Bool)arg4;
- (void)_setExpectedInputFramesWithResolvedCaptureSettings:(id)arg1;
- (void)_processSampleBufferInSampleBufferProcessor:(struct opaqueCMSampleBuffer *)arg1 metadataDictionary:(id)arg2;
- (void)_handleError:(int)arg1 forSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 input:(id)arg3;
- (_Bool)_receivedExpectedNumberOfFramesOrErrors;
- (void)_endSequence;
- (void)_setZoomRectangleOnSampleBufferProcessorIfNecessaryBasedOnMetadata:(id)arg1 captureType:(int)arg2;
- (void)_setZoomRectangleOnSampleBufferProcessorWithRectangle:(struct CGRect)arg1;
- (_Bool)isCaptureRequestStateReset;
- (struct OpaqueFigSampleBufferProcessor *)sampleBufferProcessor;

@end
