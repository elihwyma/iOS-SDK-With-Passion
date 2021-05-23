/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class AVCaptureDeviceInput, AVCaptureSession, NSURL, OFAudioRecorder;

@protocol OFAudioCaptureManagerDelegate;

@interface OFAudioCaptureManager : NSObject

{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_audioInput;
    OFAudioRecorder *_recorder;
    NSURL *_outputFileURL;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    unsigned long long _backgroundRecordingID;
    _Bool _isCancelled;
    id <OFAudioCaptureManagerDelegate> _delegate;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) OFAudioRecorder *recorder;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (nonatomic) id deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver;
@property (nonatomic) unsigned long long backgroundRecordingID;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic) id <OFAudioCaptureManagerDelegate> delegate;

- (void)dealloc;
- (_Bool)openSession;
- (_Bool)isRecording;
- (void)stopRecording;
- (void)startRecording;
- (void)cancelRecording;
- (void)_removeFile:(id)arg1;
- (id)_audioDevice;
- (id)_tempFileURL;
- (void)recorderRecordingDidBegin:(id)arg1;
- (void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3;
- (id)initWithOutputFileURL:(id)arg1;
- (unsigned long long)micCount;
- (float)meanAudioLevel;

@end
