/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class AVVoiceController, NSString;

@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionAVVC : NSObject

{
    AVVoiceController *_voiceController;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVTUIAudioSessionDelegate> _delegate;
}

@property (weak, nonatomic) id <CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (float)averagePower;
- (_Bool)isRecording;
- (void)stopRecording;
- (unsigned long long)audioSource;
- (_Bool)hasAudioRoute;
- (void)releaseAudioSession;
- (_Bool)startRecording;
- (void)setEndpointerDelegate:(id)arg1;
- (void)updateMeters;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (id)voiceController;
- (_Bool)prepareRecord;
- (_Bool)hasCorrectAudioRoute;
- (long long)convertStopReason:(long long)arg1;
- (void)resetEndPointer;
- (_Bool)_hasInputAudioRoute;
- (_Bool)_hasCorrectInputAudioRoute;
- (_Bool)_hasCorrectOutputAudioRoute;

@end
