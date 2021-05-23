/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, NSDictionary, NSLock, NSMutableArray, NSString, NSURL, WriterReorderQ;

@protocol JTVideoWriterDelegate;

@interface JTVideoWriter : NSObject

{
    AVAssetWriter *_movieAssetWriter;
    AVAssetWriterInput *_movieVideoAssetWriterInput;
    AVAssetWriterInput *_movieAudioAssetWriterInput;
    AVAssetWriterInput *_movieMetadataAssetWriterInput;
    AVAssetWriterInput *_movieFaceMetadataAssetWriterInput;
    AVAssetWriterInput *_movieDepthAssetWriterInput;
    AVAssetWriterInput *_movieARFrameAssetWriterInput;
    AVAssetWriterInput *_movieFaceAnchorAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthAdaptor;
    AVAssetWriterInputMetadataAdaptor *_metadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_faceMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_arFrameMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_faceAnchorMetadataAdaptor;
    NSDictionary *_depthPixelBufferAttributes;
    struct opaqueCMFormatDescription *_audioFormatHint;
    _Bool _wroteSessionStartTime;
    CDStruct_1b6d18a9 _sessionsStartTime;
    CDStruct_1b6d18a9 _sessionEndTime;
    _Atomic _Bool _preparingWriter;
    _Atomic _Bool _finishingWritingMovie;
    NSLock *_finishingLock;
    _Bool _wroteFirstAudioSample;
    CDStruct_79c71658 _depthDimensions;
    WriterReorderQ *_reorderQ;
    NSMutableArray *_audioBufferQ;
    _Bool _forInternalRecord;
    _Bool _storeDepthDataAsVideoTrack;
    _Bool _trackOutOfOrderVideoBuffers;
    NSURL *_url;
    NSString *_fileType;
    NSDictionary *_videoOutputSettings;
    NSDictionary *_audioOutputSettings;
    id <JTVideoWriterDelegate> _delegate;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *fileType;
@property (nonatomic, readonly) NSDictionary *videoOutputSettings;
@property (nonatomic, readonly) NSDictionary *audioOutputSettings;
@property (nonatomic, readonly) NSDictionary *depthPixelBufferAttributes;
@property (nonatomic, readonly) _Bool wroteSessionStartTime;
@property _Bool forInternalRecord;
@property _Bool storeDepthDataAsVideoTrack;
@property CDStruct_79c71658 depthDimensions;
@property (weak, nonatomic) id <JTVideoWriterDelegate> delegate;
@property (nonatomic) _Bool trackOutOfOrderVideoBuffers;

+ (id)ARFrameMetadataTrackForAsset:(id)arg1;
+ (id)faceAnchorMetadataTrackForAsset:(id)arg1;
+ (id)JT_funcamCameraPositionMetadataIdentifier;
+ (id)JT_funcamCaptureInterfaceOrientationMetadataIdentifier;
+ (id)JT_arFrameMetadataIdentifier;
+ (id)JT_metadataAssetTrackFromAsset:(id)arg1 metadataIdentifier:(id)arg2;
+ (id)JT_faceAnchorMetadataIdentifier;
+ (struct opaqueCMSampleBuffer *)CreateCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(CDStruct_d2aef016)arg2;
+ (void)metadataForVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeCameraFrameSet:(id)arg1;
- (void)writeAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 videoOutputSettings:(id)arg3 audioOutputSettings:(id)arg4 audioFormatHint:(struct opaqueCMFormatDescription *)arg5;
- (_Bool)startWriter:(id *)arg1;
- (_Bool)_canStart:(id *)arg1;
- (_Bool)_setupWriter:(id *)arg1;
- (_Bool)_setupVideoOutput:(id *)arg1;
- (_Bool)_setupDepthOutput:(id *)arg1;
- (_Bool)_setupFaceMetadataOutput:(id *)arg1;
- (_Bool)_setupARFrameMetadata;
- (_Bool)_setupFaceAnchorMetadata;
- (_Bool)_setupAutoExposureMetadataOutput:(id *)arg1;
- (_Bool)_setupAudioOutput:(id *)arg1;
- (void)_startSessionAtSourceTime_noLock:(CDStruct_1b6d18a9)arg1;
- (struct __CVBuffer *)copyDepthBufferAsBGRA:(struct __CVBuffer *)arg1;
- (void)_writeDepthBuffer:(id)arg1;
- (void)_writeFaceDetectMetadata:(id)arg1 pts:(CDStruct_1b6d18a9)arg2;
- (void)_writeVideoBuffer:(id)arg1;
- (void)_writeDepthBufferForAVDepthData:(id)arg1 withTimingInfo:(CDStruct_d2aef016)arg2;
- (void)_writeMetadata:(id)arg1 withTimingInfo:(CDStruct_d2aef016)arg2;
- (void)_writeBuffer:(struct opaqueCMSampleBuffer *)arg1 type:(int)arg2 arFrame:(id)arg3 faceAnchor:(id)arg4;
- (void)_writeBuffer:(struct opaqueCMSampleBuffer *)arg1 type:(int)arg2;
- (id)JT_FunCamMetadata;
- (void)_drainQueuedAudioBufferBeforeSessionStart_noLock;
- (void)_writeARFrameMetadata:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)_writeFaceAnchorMetadata:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)_writeAutoExposureMetadata:(struct opaqueCMSampleBuffer *)arg1;
- (void)_queueAudioBufferBeforeSessionStart:(struct opaqueCMSampleBuffer *)arg1;
- (void)writeImageBuffer:(id)arg1 timingInfo:(CDStruct_d2aef016)arg2;

@end
