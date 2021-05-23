/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@protocol AVCaptureFileOutputDelegate;

@interface AVCaptureFileOutput : AVCaptureOutput

{
    AVCaptureFileOutputInternal *_fileOutputInternal;
    id <AVCaptureFileOutputDelegate> _delegate;
}

@property (nonatomic) id <AVCaptureFileOutputDelegate> delegate;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly, getter=isRecording) _Bool recording;
@property (nonatomic, readonly, getter=isRecordingPaused) _Bool recordingPaused;
@property (nonatomic, readonly) CDStruct_1b6d18a9 recordedDuration;
@property (nonatomic, readonly) long long recordedFileSize;
@property (nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

+ (void)initialize;

- (void)dealloc;
- (id)initSubclass;
- (_Bool)pausesRecordingOnInterruption;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)setPausesRecordingOnInterruption:(_Bool)arg1;

@end
