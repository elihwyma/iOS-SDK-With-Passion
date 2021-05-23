/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class AVAudioRecorder, NSString, NSTimer, NSURL;

@protocol WFAudioRecorderDelegate;

@interface WFAudioRecorder : NSObject

{
    _Bool _paused;
    _Bool _hasFinished;
    id <WFAudioRecorderDelegate> _delegate;
    long long _outputFormat;
    double _recordingDuration;
    NSURL *_outputURL;
    AVAudioRecorder *_recorder;
    NSTimer *_updateTimer;
}

@property (nonatomic) long long outputFormat;
@property (nonatomic) double recordingDuration;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (nonatomic) _Bool runningUpdateTimer;
@property (nonatomic) _Bool paused;
@property (nonatomic) _Bool hasFinished;
@property (weak, nonatomic) id <WFAudioRecorderDelegate> delegate;
@property (nonatomic, readonly, getter=isRecording) _Bool recording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pauseRecording;
- (void)resumeRecording;
- (void)startRecording;
- (void)recordForDuration:(double)arg1;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)finishRecording;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;
- (void)audioInterruption:(id)arg1;
- (void)countdownFire:(id)arg1;

@end
