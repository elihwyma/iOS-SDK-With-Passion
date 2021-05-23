/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class AVCaptureMovieFileOutput, AVCaptureSession, NSString, NSURL;

@protocol OFAudioRecorderDelegate;

@interface OFAudioRecorder : NSObject

{
    AVCaptureSession *_session;
    AVCaptureMovieFileOutput *_movieFileOutput;
    NSURL *_outputFileURL;
    NSObject<OFAudioRecorderDelegate> *_delegate;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (nonatomic, readonly) _Bool recordsAudio;
@property (nonatomic, readonly, getter=isRecording) _Bool recording;
@property (nonatomic) NSObject<OFAudioRecorderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stopRecording;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)startRecording;
- (id)initWithSession:(id)arg1 outputFileURL:(id)arg2;
- (id)_connectionWithMediaType:(id)arg1;

@end
