/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@class NSDictionary;

@protocol BWRemoteQueueSinkNodeDelegate;

@interface BWRemoteQueueSinkNode : BWSinkNode

{
    _Bool _mediaTypeIsVideo;
    struct remoteQueueSenderOpaque *_remoteQueueSender;
    struct OpaqueFigSimpleMutex *_peerTerminationMutex;
    struct shmemPoolOpaque *_sharedMemoryPool;
    struct __CFAllocator *_sharedMemoryPoolCFAllocator;
    struct localQueueOpaque *_localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    id <BWRemoteQueueSinkNodeDelegate> _delegate;
    int _clientVideoRetainedBufferCount;
    _Bool _discardsLateSampleBuffers;
    _Bool _attachPanoramaMetadata;
    _Bool _sentDiagnosticMetadata;
    _Bool _disableFlatDictionaryVDOMetadata;
    struct OpaqueFigFlatDictionaryKeySpec *_makerNoteKeySpec;
    NSDictionary *_videoColorInfoOverride;
    _Bool _pixelBufferAttachmentModificationAllowed;
    _Bool _cameraSupportsFlash;
    _Bool _removeCameraIntrinsicMatrixAttachment;
    struct opaqueCMFormatDescription *_cachedVideoFormatDescription;
    CDStruct_1b6d18a9 _lastPTS;
    int _receiverPID;
    _Bool _clientIsRunningInMediaserverd;
    _Bool _panoramaRequiresLTMLocking;
}

@property (nonatomic) id <BWRemoteQueueSinkNodeDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 receiverPID:(int)arg2 sinkID:(id)arg3;
- (void)setVideoColorInfoOverride:(id)arg1;
- (void)setDiscardsLateSampleBuffers:(_Bool)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setAttachPanoramaMetadata:(_Bool)arg1;
- (void)setCameraSupportsFlash:(_Bool)arg1;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(_Bool)arg1;
- (void)setPanoramaRequiresLTMLocking:(_Bool)arg1;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (void)setPixelBufferAttachmentModificationAllowed:(_Bool)arg1;
- (id)videoColorInfoOverride;
- (void)_handlePeerTerminated;
- (int)_finishRenderingSampleBufferUsingTheRemoteCaptureStack:(struct opaqueCMSampleBuffer *)arg1 isDroppedSample:(_Bool)arg2;
- (int)_finishRenderingSampleBufferUsingTheLocalQueue:(struct opaqueCMSampleBuffer *)arg1;
- (int)clientVideoRetainedBufferCount;
- (_Bool)discardsLateSampleBuffers;
- (_Bool)attachPanoramaMetadata;
- (_Bool)panoramaRequiresLTMLocking;
- (_Bool)pixelBufferAttachmentModificationAllowed;
- (_Bool)cameraSupportsFlash;
- (_Bool)removeCameraIntrinsicMatrixAttachment;
- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer *)arg1 panoramaRequiresLTMLocking:(_Bool)arg2;

@end
