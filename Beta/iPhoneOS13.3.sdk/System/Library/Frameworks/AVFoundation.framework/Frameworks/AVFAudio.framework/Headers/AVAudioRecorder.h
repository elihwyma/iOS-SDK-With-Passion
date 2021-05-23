/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, AVAudioSession, NSArray, NSDictionary, NSURL;

@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject

{
    void *_impl;
}

@property (nonatomic) int processToTap;
@property (nonatomic) _Bool instantaneousMetering;
@property (readonly, getter=isRecording) _Bool recording;
@property (readonly) NSURL *url;
@property (readonly) NSDictionary *settings;
@property (readonly) AVAudioFormat *format;
@property (weak) id <AVAudioRecorderDelegate> delegate;
@property (readonly) double currentTime;
@property (readonly) double deviceCurrentTime;
@property (getter=isMeteringEnabled) _Bool meteringEnabled;
@property (copy, nonatomic) NSArray *channelAssignments;
@property (retain) AVAudioSession *audioSession;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)pause;
- (void)stop;
- (struct AudioRecorderImpl *)impl;
- (id)baseInit;
- (_Bool)record;
- (void)handleInterruption:(id)arg1;
- (void)beginInterruption;
- (void)endInterruption;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)finishedRecording;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (id)initWithURL:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)prepareToRecord;
- (_Bool)recordAtTime:(double)arg1;
- (_Bool)recordForDuration:(double)arg1;
- (_Bool)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (_Bool)deleteRecording;
- (void)endInterruptionWithFlags;

@end
