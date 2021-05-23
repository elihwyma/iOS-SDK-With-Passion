/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWFigVideoCaptureDevice, BWPhotoManifest, BWStillImageCaptureSettings, FigCaptureStillImageSettings, FigStateMachine, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol BWStillImageCaptureStatusDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface BWStillImageCoordinatorNode : BWNode

{
    _Bool _active;
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    id <BWStillImageCaptureStatusDelegate> _stillImageCaptureStatusDelegate;
    _Bool _stillImageGraphSupportsMultipleInflightCaptures;
    unsigned int _numberOfBurstCapturesInFlight;
    unsigned int _maxNumberOfBurstCapturesAllowedInFlight;
    _Bool _alwaysRequestsPreBracketedEV0;
    _Bool _usesHDRPreBracketFrameForErrorRecovery;
    _Bool _supportsCalibrationWithoutDepthForBravoConstituentPhoto;
    NSMutableArray *_requestQueue;
    struct os_unfair_lock_s _requestQueueLock;
    int _captureRequestCount;
    int _prepareRequestCount;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    NSObject<OS_dispatch_group> *_stillImageDispatchGroup;
    FigStateMachine *_stateMachine;
    NSMutableDictionary *_receivedImagesOrErrorsForRequestByPortType;
    int _clientExpectedImagesOrErrorsForRequest;
    int _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    int _captureType;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BWPhotoManifest *_photoManifest;
    unsigned int _firedDelegateCallbackFlags;
    _Bool _isMomentCaptureCapturingBeforeCommitted;
    NSMutableArray *_momentCaptureUnfiredCallbacks;
    NSMutableArray *_momentCaptureBuffersByInputIndex;
    int _momentCaptureUncommittedStillImageCaptureError;
    CDStruct_1b6d18a9 _streamingDisruptionEndPTS;
    _Bool _receivedQuadraHighResError;
}

@property (nonatomic) id <BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)_stateMachine;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)nodeDidCaptureStillImage:(id)arg1;
- (void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(CDStruct_1b6d18a9)arg3;
- (id)inputForPortType:(id)arg1;
- (id)outputForPortType:(id)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)node:(id)arg1 didSelectNewReferenceFrameWithPTS:(CDStruct_1b6d18a9)arg2 transform:(id)arg3;
- (void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(_Bool)arg3;
- (void)setAlwaysRequestsPreBracketedEV0:(_Bool)arg1;
- (_Bool)alwaysRequestsPreBracketedEV0;
- (int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1;
- (void)willStopGraph:(_Bool)arg1;
- (void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(_Bool)arg1;
- (int)initiateStillImageCaptureNowWithSettings:(id)arg1;
- (int)beginStillImageMomentCaptureWithSettings:(id)arg1;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (int)prepareStillImageCaptureNowWithSettings:(id)arg1;
- (int)commitStillImageMomentCaptureWithSettings:(id)arg1;
- (int)cancelStillImageMomentCaptureWithSettingsID:(long long)arg1;
- (void)_serviceNextRequest;
- (void)captureStreamWillBeginStillImageCapture:(id)arg1;
- (void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
- (void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(CDStruct_1b6d18a9)arg2;
- (void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(CDStruct_1b6d18a9)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
- (id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 allStateTransitionsHandler:(CDUnknownBlockType)arg3;
- (void)_setupStateMachineWithAllStateTransitionsHandler:(CDUnknownBlockType)arg1;
- (int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(_Bool)arg2;
- (id)_resolvePhotoManifest;
- (void)_cancelMomentCaptureIfNeeded;
- (void)_renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)_flushStillImageRequestWithError:(int)arg1;
- (void)_addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)_outputForInput:(id)arg1;
- (void)_completeRequestWithStatus:(int)arg1;
- (void)_fireDelegateCallbackWithFlag:(unsigned int)arg1;
- (void)_didResolveStillImagePTS:(CDStruct_1b6d18a9)arg1 isPreBracketedEV0:(_Bool)arg2;
- (void)_didCaptureStillImage;
- (void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg1;
- (void)_didSelectNewReferenceFrameWithPTS:(CDStruct_1b6d18a9)arg1 transform:(id)arg2;
- (void)_beginPreparingCapture;
- (void)_beginInitiatingCapture;
- (void)_beginResolvingCapture;
- (void)_beginCapture;
- (void)_beginMomentCapture;
- (void)_beginUncommittedMomentCapture;
- (void)_commitMomentCapture;
- (void)_cancelMomentCapture;
- (void)_unpackNextRequest;
- (void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
- (id)_clientBracketSettingsWithFrameStatisticsByPortType:(id)arg1;
- (int)_captureTypeForSettings:(id)arg1 frameStatisticsByPortType:(id)arg2 captureFlags:(unsigned long long *)arg3;
- (void)_fireDelegateCallbackWithInfo:(id)arg1;
- (void)_setupProcessing;
- (void)node:(id)arg1 didReceiveOriginalImageWithPTS:(CDStruct_1b6d18a9)arg2;
- (id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2;
- (_Bool)stillImageGraphSupportsMultipleInflightCaptures;
- (void)setStillImageGraphSupportsMultipleInflightCaptures:(_Bool)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecovery:(_Bool)arg1;
- (_Bool)usesHDRPreBracketFrameForErrorRecovery;
- (_Bool)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
- (void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned int)arg1;
- (unsigned int)maxNumberOfBurstCapturesAllowedInFlight;
- (id)_stillImageDispatchQueue;

@end
