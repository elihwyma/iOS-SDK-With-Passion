/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, AVCaptureConnection, NSURL;

@protocol ICDocCamDebugMovieControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDocCamDebugMovieController : NSObject

{
    _Bool _recording;
    _Bool _readyToRecordVideo;
    _Bool _readyToRecordMetadata;
    _Bool _recordingWillBeStarted;
    _Bool _recordingWillBeStopped;
    _Bool _canRecordFrames;
    long long _referenceOrientation;
    AVCaptureConnection *_videoConnection;
    id <ICDocCamDebugMovieControllerDelegate> _delegate;
    NSURL *_movieURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterVideoIn;
    AVAssetWriterInput *_assetWriterMetadataIn;
    AVAssetWriterInputMetadataAdaptor *_assetWriterMetadataAdaptor;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_movieWritingQueue;
    long long _videoOrientation;
    unsigned long long _backgroundRecordingID;
}

@property (nonatomic) long long referenceOrientation;
@property (weak, nonatomic) AVCaptureConnection *videoConnection;
@property (weak, nonatomic) id <ICDocCamDebugMovieControllerDelegate> delegate;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterVideoIn;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterMetadataIn;
@property (retain, nonatomic) AVAssetWriterInputMetadataAdaptor *assetWriterMetadataAdaptor;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movieWritingQueue;
@property (nonatomic) _Bool readyToRecordVideo;
@property (nonatomic) _Bool readyToRecordMetadata;
@property (nonatomic) _Bool recordingWillBeStarted;
@property (nonatomic) _Bool recordingWillBeStopped;
@property (nonatomic) _Bool canRecordFrames;
@property (getter=isRecording) _Bool recording;
@property long long videoOrientation;
@property (nonatomic) unsigned long long backgroundRecordingID;

- (void)removeFile:(id)arg1;
- (void)stopRecording;
- (void)startRecording;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)recordingDidStop;
- (id)initWithDelegate:(id)arg1 videoConnection:(id)arg2 referenceOrientation:(long long)arg3;
- (void)recordFrame:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (void)pauseCaptureSessionForMovieRecording;
- (void)resumeCaptureSessionForMovieRecording;
- (_Bool)inputsReadyToRecord;
- (_Bool)setupAssetWriterVideoInput:(struct opaqueCMFormatDescription *)arg1;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ofType:(id)arg2 atFrame:(long long)arg3;
- (_Bool)setupAssetWriterMetadataInputAndMetadataAdaptor;
- (_Bool)writeMetaDataAtFrame:(long long)arg1 intrinsicMatrix:(CDStruct_d80e62f2)arg2;
- (void)recordingDidStart;
- (struct CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (void)recordingWillStart;
- (void)recordingWillStop;
- (void)saveMovieToCameraRoll;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;

@end
