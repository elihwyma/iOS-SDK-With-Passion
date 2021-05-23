/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMovieWriter : NSObject

{
    NSString *_transactionID;
    CDStruct_1b6d18a9 _lastVideoPresentationTime;
    CDStruct_1b6d18a9 _lastLocalAudioPresentationTime;
    CDStruct_1b6d18a9 _lastRemoteAudioPresentationTime;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _stillImageTime;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_localAudioInput;
    AVAssetWriterInput *_remoteAudioInput;
    AVAssetWriterInput *_metadataInput;
    AVAssetWriterInputMetadataAdaptor *_adapter;
    NSURL *_outputURL;
    unsigned char _writerMode;
    _Bool _isVideoStarted;
    _Bool _isEndRTPTimestampSet;
    unsigned int _startRTPTimeStamp;
    unsigned int _endRTPTimeStamp;
    _Bool _writingStarted;
    struct opaqueCMBufferQueue *_videoQueue;
    struct opaqueCMBufferQueue *_localAudioQueue;
    struct opaqueCMBufferQueue *_remoteAudioQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    CDUnknownBlockType _completionHandler;
    struct CGRect _contectRect;
    double _visibleWidth;
    double _visibleHeight;
    struct __CVPixelBufferPool *_bufferPool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    unsigned int _codec;
}

@property unsigned int startRTPTimeStamp;
@property unsigned int endRTPTimeStamp;
@property (readonly) unsigned char writerMode;
@property (retain, nonatomic) NSURL *outputURL;

- (void)dealloc;
- (void)setStillImageTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned int)arg3;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (_Bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (void)finishWritingWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 mediaType:(unsigned char)arg2;
- (id)setupAssetWriterWithWidth:(int)arg1 height:(int)arg2 transactionID:(id)arg3;
- (void)setupInputs;
- (void)processSampleQueue:(struct opaqueCMBufferQueue *)arg1 input:(id)arg2 lastPresentationTime:(CDStruct_1b6d18a9 *)arg3;
- (void)startWritingAtTime:(CDStruct_1b6d18a9)arg1;
- (void)appendMetaData;
- (void)setupInput:(id)arg1 queue:(struct opaqueCMBufferQueue *)arg2 dispatchGroup:(id)arg3 lastPresentationTime:(CDStruct_1b6d18a9 *)arg4;
- (void)setupContectRect:(struct CGRect)arg1 withCaptureHeight:(int)arg2;

@end
