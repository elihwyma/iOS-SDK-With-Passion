/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWSlaveFrameSynchronizerNode : BWNode

{
    int _numEODMessagesReceived;
    struct os_unfair_lock_s _bufferServicingLock;
    struct opaqueCMSampleBuffer **_inputSampleBuffers;
    _Bool _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    _Bool _startEmittingMasterFramesBeforeSlaveStreamStarts;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 inputIndexesDrivingDepthOutput:(id)arg3;
- (void)_tryToEmitBuffers;
- (void)_purgeAllBuffersOlderThanCaptureID:(int)arg1;
- (id)initWithDepthEnabled:(_Bool)arg1 numberOfInputs:(int)arg2;
- (void)_emitIncomingFrameKtraces:(struct opaqueCMSampleBuffer *)arg1 withInput:(id)arg2;

@end
