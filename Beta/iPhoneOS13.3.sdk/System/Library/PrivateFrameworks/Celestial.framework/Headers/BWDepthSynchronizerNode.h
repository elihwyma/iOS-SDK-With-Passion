/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, NSMutableArray;

@interface BWDepthSynchronizerNode : BWNode

{
    int _numEODMessagesReceived;
    NSMutableArray *_imageBufferQueue;
    NSMutableArray *_depthBufferQueue;
    int _maxQueueDepth;
    int _lastEmittedFrameCaptureID;
    int _lastReceivedImageID;
    int _lastReceivedDepthID;
    int _imageIDWrapAroundCounter;
    int _depthIDWrapAroundCounter;
    _Bool _discardsDegradedDepthBuffers;
    _Bool _separateDepthComponentsEnabled;
    BWNodeInput *_imageInput;
    BWNodeInput *_depthInput;
    _Bool _streaming;
    BWNodeError *_errorForImageInput;
    BWNodeError *_errorForDepthInput;
    struct os_unfair_lock_s _bufferServicingLock;
}

@property (readonly) BWNodeInput *imageInput;
@property (readonly) BWNodeInput *depthInput;
@property (nonatomic) _Bool discardsDegradedDepthBuffers;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (void)_tryToEmitBuffers;
- (void)_setupDepthMediaConfigurationForOutput:(id)arg1 inputAttachedMediaKey:(id)arg2 outputAttachedMediaKey:(id)arg3;
- (_Bool)_isDepthExpectedForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_frameCaptureID:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_attachDepthDataToSampleBufferOrReportDepthMissing:(struct opaqueCMSampleBuffer *)arg1 isDepthMissing:(_Bool *)arg2;
- (void)_cleanupDepthBufferQueue;
- (id)initForStreaming:(_Bool)arg1 separateDepthComponentsEnabled:(_Bool)arg2;
- (id)_bufferArrayToString:(id)arg1;

@end
