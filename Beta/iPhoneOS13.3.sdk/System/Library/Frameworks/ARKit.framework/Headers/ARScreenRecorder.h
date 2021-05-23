/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ARScreenRecorder : NSObject

{
    _Bool _isRecording;
    double _firstFrameTime;
    double _previousFrameTime;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_imageInput;
    AVAssetWriterInputPixelBufferAdaptor *_imageInputAdaptor;
    NSObject<OS_dispatch_queue> *_writerQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSURL *_fileURL;
}

@property (nonatomic) double firstFrameTime;
@property (nonatomic) double previousFrameTime;
@property (nonatomic) _Bool isRecording;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *imageInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *imageInputAdaptor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)sharedRecorder;

- (id)init;
- (void)_timerFired;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (id)_recordingUrl;
- (void)_finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;
- (void)_submitFrame:(id)arg1 forTime:(double)arg2;
- (void)_setupTracksWithImageHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 time:(double)arg3;
- (void)_appendFrame:(id)arg1 forTime:(double)arg2;
- (void)_addImageStreamTrack:(id)arg1;
- (_Bool)_appendImageData:(id)arg1 forTime:(double)arg2;
- (void)stopRecordingAndSaveToCameraRoll:(CDUnknownBlockType)arg1;

@end
