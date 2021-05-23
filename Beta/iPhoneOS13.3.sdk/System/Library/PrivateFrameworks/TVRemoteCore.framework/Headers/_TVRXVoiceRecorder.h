/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, AVVoiceController, NSString;

@protocol _TVRXVoiceRecorderDelegate;

@interface _TVRXVoiceRecorder : NSObject

{
    long long _state;
    struct AudioStreamBasicDescription _audioFormat;
    AVAudioFormat *_avAudioFormat;
    AVVoiceController *_voiceController;
    _Bool _recordsAutomatically;
    id <_TVRXVoiceRecorderDelegate> _delegate;
}

@property (weak, nonatomic) id <_TVRXVoiceRecorderDelegate> delegate;
@property (nonatomic) _Bool recordsAutomatically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (void)stop;
- (void)start;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_processAudioBufferOnMainQueue:(id)arg1;
- (id)audioFormatSettings;

@end
