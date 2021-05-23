/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, VCMomentsHistoryBuffer, VideoAttributes;

@protocol OS_dispatch_queue, VCMovieWriterProtocol;

__attribute__((visibility("hidden")))
@interface VCMomentsHistory : NSObject

{
    NSMutableDictionary *_writers;
    NSObject<VCMovieWriterProtocol> *_writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_momentsQueue;
    VCMomentsHistoryBuffer *_frameBuffer;
    VCMomentsHistoryBuffer *_localAudioBuffer;
    VCMomentsHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_stillImageURLs;
    VideoAttributes *_remoteScreenAttributes;
    struct __CVPixelBufferPool *_bufferPool;
    struct __CVPixelBufferPool *_copyPool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct OpaqueVTPixelTransferSession *_copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    _Bool _resize;
    _Bool _isFirstFrame;
    int _imageType;
    int videoPayload;
    struct __CFAllocator *_audioSampleBufferAllocator;
    int _videoCodec;
}

@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setFrameRate:(float)arg1;
- (void)cleanupTransferSession;
- (void)updateAudioBuffer:(id)arg1 WithSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;
- (void)updateCaptureSizesWithFirstFrame:(struct opaqueCMSampleBuffer *)arg1;
- (struct __CVBuffer *)copyBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateVideoBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
- (void)updateResizeFlag;
- (_Bool)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 URL:(id *)arg3 imageType:(int)arg4;
- (id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2;
- (void)registerDirectoryWithFilePath:(id)arg1;
- (void)setCompeletionHandler:(CDUnknownBlockType)arg1 forTransactionID:(id)arg2;
- (CDStruct_1b6d18a9)setupStillImageWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 visibleRect:(struct CGRect *)arg3 cameraStatusBit:(char *)arg4 imageType:(int)arg5;
- (void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 visibleRect:(struct CGRect)arg4 cameraStatusBit:(unsigned char)arg5;
- (unsigned char)_mediaTypeForBuffer:(id)arg1;
- (id)_getActiveWriters;
- (void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2;
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer *)arg3;
- (void)flushHistoryBuffers;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;
- (_Bool)writeToLivePhotoToFileWithFrame:(struct __CVBuffer *)arg1 transactionID:(id)arg2 URL:(id *)arg3 imageType:(int)arg4 cameraStatusBits:(unsigned char)arg5;
- (struct CGSize)calculateVisibleAreaWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;
- (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;
- (void)handlePendingRequestWithError:(id)arg1;
- (void)handlePendingRequestSuccessWithSourceURL:(id)arg1;
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)getPhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startRecording:(unsigned char)arg1 transactionID:(id)arg2 timestamp:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cleanupActiveRequests;
- (void)cancelRequestWithTransactionID:(id)arg1;

@end
