/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VCFigAssetWriter : NSObject

{
    struct OpaqueFigAssetWriter *_assetWriter;
    CDStruct_1b6d18a9 _startTime;
    NSString *_transactionID;
    NSURL *_outputURL;
    int _videoTrackID;
    int _localAudioTrackID;
    int _remoteAudioTrackID;
    int _metadataTrackID;
    CDStruct_1b6d18a9 _stillImageTime;
    unsigned char _writerMode;
    _Bool _isVideoStarted;
    _Bool _isEndRTPTimestampSet;
    unsigned int _startRTPTimeStamp;
    unsigned int _endRTPTimeStamp;
    unsigned char _stillImageCameraStatusBit;
    _Bool _resize;
    struct __CVPixelBufferPool *_bufferPool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct OpaqueVTCompressionSession *_compressionSession;
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
- (void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg1 resize:(_Bool)arg2 videoVisibleWidth:(int)arg3 height:(int)arg4;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 mediaType:(unsigned char)arg2;
- (int)_setupWriter;
- (void)writeIdentifierMetadata:(id)arg1;
- (void)setStillImageTimeInternal;
- (int)trackIDForWriterMode:(unsigned char)arg1;
- (struct OpaqueVTCompressionSession *)compressionSessionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)trackIDForMediaType:(unsigned char)arg1;

@end
